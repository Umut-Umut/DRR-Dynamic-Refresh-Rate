# DRR - Display Refresh Rate Otomatik Ayarlayıcı

## 🇹🇷 Türkçe Açıklama

**DRR.exe**, bilgisayarınızın güç durumunu kontrol ederek ekran yenileme hızını otomatik olarak ayarlar. Şarj adaptörü takılıysa ekranı **60 Hz**, batarya modundaysa **40 Hz** olarak ayarlar.

### 🔧 Derleme (g++ ile)

`main.cpp` dosyasını aşağıdaki komutla derleyebilirsiniz:

```bash
g++ -o DRR.exe main.cpp
````

### 🚀 Başlangıç (Startup) Klasörüne Ekleme

DRR.exe'yi her açılışta otomatik çalıştırmak için şu adımları izleyin:

1. `Win + R` tuşlarına basın, `shell:startup` yazın ve Enter'a basın.
2. Açılan klasöre `DRR.exe` dosyasını yapıştırın.

> Bu klasör, kullanıcı oturum açtığında çalışacak programları içerir.

### 🔌 Ne Yapar?

* Her **10 saniyede bir**, bilgisayarın şarjda olup olmadığını kontrol eder.
* Şarjda ise **60 Hz**, bataryadaysa **40 Hz** olarak ekran yenileme hızını ayarlar.
* Bu işlem arka planda çalışır, görünmezdir.

### ❌ Kapatma

Eğer programı kapatmak isterseniz:

1. `Ctrl + Shift + Esc` ile Görev Yöneticisi'ni açın.
2. **DRR.exe** işlemini bulun.
3. Sağ tıklayın ve **Görevi Sonlandır** seçeneğine tıklayın.

---

## 🇺🇸 English Description

**DRR.exe** automatically adjusts your monitor's refresh rate based on your power status. If the laptop is plugged in, it sets the screen to **60 Hz**; if on battery, it sets it to **40 Hz**.

### 🔧 Compile with g++

To compile `main.cpp` with g++, run:

```bash
g++ -o DRR.exe main.cpp
```

### 🚀 Add to Startup Folder

To make DRR.exe run automatically at startup:

1. Press `Win + R`, type `shell:startup`, and hit Enter.
2. Paste your `DRR.exe` file into the opened folder.

> This folder contains programs that run when the user logs in.

### 🔌 What It Does

* Checks the power state every **10 seconds**.
* Sets the refresh rate to **60 Hz** when plugged in.
* Sets it to **40 Hz** when on battery.
* Runs silently in the background.

### ❌ How to Close

To terminate the program:

1. Press `Ctrl + Shift + Esc` to open Task Manager.
2. Find **DRR.exe** in the list.
3. Right-click and select **End Task**.
