# 🌀 Fract-ol - Fraktal Keşif Uygulaması

Bu proje, **grafik programlama** ve **matematiksel algoritmaları** birleştirerek interaktif bir **fraktal görselleştirme aracı** geliştirmeyi amaçlar. MiniLibX kütüphanesiyle oluşturulan bu uygulama, kullanıcıya **Mandelbrot**, **Julia** gibi fraktalları inceleyebileceği dinamik bir ortam sunar.

---

## 🎯 Genel Amaç

- Grafik programlamaya giriş yapmak
- Karmaşık sayılarla fraktal üretimini anlamak
- Event-driven (olay tabanlı) programlama öğrenmek
- Floating point aritmetiği ile yakınlaştırma ve kaydırma işlemleri yapmak

---

## 🧠 Neler Yaptım?

### 🧱 Grafik Programlama
- **MiniLibX** kütüphanesiyle pencere açma, piksel çizme, renk yönetimi ve kullanıcı olaylarını (mouse, klavye) işleme süreçlerini öğrendim.

### 📈 Fraktal Algoritmaları
- **Mandelbrot** ve **Julia setleri** gibi fraktal oluşturma algoritmalarını uyguladım.
- **Kompleks sayı** işlemleriyle fraktal üretimini matematiksel olarak modelledim.

### ⚙️ Performans ve Optimizasyon
- Floating point precision hatalarını minimize ederek yüksek zoom seviyelerinde stabilite sağladım.
- Her frame yeniden çizilmeden yalnızca gerekli alanların render edilmesiyle performansı artırdım.

### 🎮 Event-Driven Programlama
- Klavye ile renk değiştirme, mouse scroll ile zoom, ok tuşları ile kaydırma gibi kontrolleri ekledim.
- Kullanıcı ile etkileşimli grafik uygulamaları geliştirme pratiği kazandım.

---

## 💻 Nasıl Çalıştırılır?

### 🔧 Derleme

```bash
make
```

### 🚀 Çalıştırma

```bash
./fractol mandelbrot
./fractol julia
```

> Not: `mandelbrot`, `julia`, `burningship` gibi parametreler desteklenmelidir.

---

## 🎮 Kontroller

| Tuş / Mouse       | İşlev                         |
|------------------|-------------------------------|
| `+` / `-`         | Zoom in / out                 |
| `← ↑ ↓ →`         | Görseli kaydır (pan)          |
| `C`               | Renk paleti değiştir          |
| `ESC`             | Uygulamadan çık               |
| Mouse Scroll      | Zoom in/out (pointer'a göre)  |

---
oluşturduğum fraktal kitabım :
[Fract-ol.pdf](https://github.com/user-attachments/files/20978588/Fract-ol.pdf)

