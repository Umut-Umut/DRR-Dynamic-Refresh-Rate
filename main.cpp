#include <iostream>
#include <windows.h>


#define SLEEP_SEC 10 * 1000


enum SYSTEM_STATUS
{
    BTY,
    ACC
};
SYSTEM_POWER_STATUS status;
DEVMODE devm;



int GET_POWER_STATUS()
{
    GetSystemPowerStatus(&status);

    return (int)(status.ACLineStatus);
}

void CHANGE_FREQUENCY(DWORD f)
{
    // Frequency is only changed when power source transitions (AC <-> Battery); otherwise, last applied value remains cached and manual changes are ignored.
    if (devm.dmDisplayFrequency == f) return;
    devm.dmDisplayFrequency = f;
    ChangeDisplaySettings(&devm, CDS_UPDATEREGISTRY);
    EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &devm); // Retrieves the system-applied display settings from the last power source transition
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    devm.dmSize = sizeof(DEVMODE);
    EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &devm);

    while (true)
    {
        switch (GET_POWER_STATUS())
        {
        case ACC:
            CHANGE_FREQUENCY(60);
            break;
        case BTY:
            CHANGE_FREQUENCY(40);
            break;
        default:
            break;
        }
        
        Sleep(SLEEP_SEC);
    }

    return 0;
}