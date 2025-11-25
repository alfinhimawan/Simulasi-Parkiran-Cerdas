# 🚗 SIMULASI PARKIRAN CERDAS

**Program manajemen parkir berbasis kapasitas dan waktu masuk menggunakan C++**

## 📊 Status Progres: 100% ✅

**Semua fitur telah diimplementasikan dan teruji dengan sempurna!**

- ✅ 6 Menu Selesai (Tambah, Keluar, Tampilkan, Urutkan, Cari, Exit)
- ✅ Sequential Search - Pencarian dengan algoritma linear
- ✅ Bubble Sort - Pengurutan berdasarkan waktu masuk
- ✅ Shift-Left Algorithm - Penghapusan data dari array
- ✅ Edge Case Handling - Validasi lengkap untuk semua kondisi

## ✨ Fitur yang Sudah Selesai

✅ **Array 1 Dimensi** - Penyimpanan data plat nomor & waktu masuk  
✅ **Menu Interaktif Lengkap** - 6 pilihan menu yang user-friendly  
✅ **Fungsi Modular** - 10 fungsi terpisah untuk kemudahan maintenance  
✅ **Sequential Search** - Pencarian linear dengan kompleksitas O(n)  
✅ **Bubble Sort** - Pengurutan data dengan kompleksitas O(n²)  
✅ **Shift-Left Algorithm** - Penghapusan data dari array tanpa memory leak  
✅ **Edge Case Handling Lengkap** - Validasi parkiran penuh, kosong, data tidak ditemukan, dan input invalid  
✅ **Tampilan Tabel Terformat** - Output menggunakan `iomanip` untuk presentasi profesional  
✅ **Input Validation** - Error handling untuk input yang tidak valid  

## 🎯 Ketentuan PBL ✅

Program ini dibuat sesuai proposal PBL dengan ketentuan berikut yang **SEMUA SUDAH TERPENUHI**:

| Ketentuan | Status | Keterangan |
|-----------|--------|-----------|
| Menggunakan array 1 dimensi | ✅ | Array `platNomor[]` dan `waktuMasuk[]` |
| Menu interaktif (minimal 6) | ✅ | 6 menu utama dengan switch-case |
| Minimal 4 fungsi/prosedur | ✅ | 10 fungsi yang sudah diimplementasikan |
| Shift-left untuk penghapusan data | ✅ | Diterapkan di menu "Keluarkan Kendaraan" |
| Validasi edge case lengkap | ✅ | Parkiran penuh, kosong, data tidak ditemukan |
| Implementasi Bubble Sort | ✅ | Menu "Urutkan Kendaraan" - O(n²) |
| Implementasi Sequential Search | ✅ | Menu "Cari Kendaraan" & "Keluarkan Kendaraan" - O(n) |
| Dokumentasi lengkap | ✅ | README ini

## 📦 Struktur Data

```cpp
const int MAX_KAPASITAS = 5;           
string platNomor[MAX_KAPASITAS];       
string waktuMasuk[MAX_KAPASITAS];      
int jumlahKendaraan = 0;               
```

## 🔧 Fungsi-Fungsi Utama

| No | Fungsi | Status | Deskripsi |
|----|--------|--------|-----------|
| 1 | `tambahKendaraan()` | ✅ | Menambah kendaraan baru ke parkiran |
| 2 | `keluarkanKendaraan()` | ✅ | Mengeluarkan kendaraan dengan Sequential Search + Shift-Left |
| 3 | `tampilkanStatus()` | ✅ | Menampilkan semua data kendaraan dalam format tabel |
| 4 | `urutkanKendaraan()` | ✅ | Bubble Sort berdasarkan waktu masuk (ascending) |
| 5 | `cariKendaraan()` | ✅ | Sequential Search menu terpisah untuk mencari kendaraan |
| 6 | `tampilkanMenu()` | ✅ | Menampilkan menu utama program |
| 7 | `clearScreen()` | ✅ | Membersihkan layar console (Windows: `cls`) |
| 8 | `tampilkanHeader()` | ✅ | Menampilkan header program dengan kapasitas |
| 9 | `pause()` | ✅ | Jeda untuk membaca output sebelum next action |
| 10 | `main()` | ✅ | Fungsi utama program dengan loop menu |

## 🚀 Cara Kompilasi & Menjalankan

### **Windows (MinGW/g++)**
```bash
g++ -std=c++17 simulasi_parkiran_cerdas.cpp -o parkir.exe
parkir.exe
```

### **Linux/Mac**
```bash
g++ -std=c++17 simulasi_parkiran_cerdas.cpp -o parkir
./parkir
```

### **VS Code (dengan task)**
```bash
Tekan Ctrl+Shift+B → pilih "build and run"
```

## 📖 Menu Program

| Menu | Fitur | Status | Deskripsi |
|------|-------|--------|-----------|
| 1 | Masukkan Kendaraan | ✅ | Menambahkan kendaraan baru dengan validasi kapasitas penuh |
| 2 | Keluarkan Kendaraan | ✅ | Mencari dan mengeluarkan kendaraan menggunakan Sequential Search |
| 3 | Tampilkan Status Parkir | ✅ | Menampilkan semua kendaraan dalam format tabel terformat |
| 4 | Urutkan Kendaraan (Bubble Sort) | ✅ | Mengurutkan kendaraan berdasarkan waktu masuk ascending |
| 5 | Cari Kendaraan (Sequential Search) | ✅ | Mencari kendaraan berdasarkan plat nomor |
| 6 | Keluar Program | ✅ | Menutup program dengan pesan terima kasih |

## 💡 Contoh Penggunaan

### **1. Tambah Kendaraan**
```
Plat Nomor   : B1234AB
Waktu Masuk  : 08:00

✓ Kendaraan berhasil masuk parkiran!
Total kendaraan saat ini: 1/5
```

### **2. Tampilkan Status**
```
--------------------------------------------------
No   Plat Nomor          Waktu Masuk         
--------------------------------------------------
1    B1234AB             08:00               
2    D5678CD             07:30               
3    E9012EF             09:00               
--------------------------------------------------
```

### **3. Keluarkan Kendaraan (dengan Sequential Search)**
```
=== KELUARKAN KENDARAAN ===

Masukkan plat nomor yang akan keluar: B1234AB

Kendaraan berhasil keluar!
Plat Nomor   : B1234AB
Waktu Masuk  : 08:00
Total kendaraan saat ini: 2/5
```

### **4. Urutkan Kendaraan (Bubble Sort)**
```
=== URUTKAN KENDARAAN (BUBBLE SORT) ===

Mengurutkan berdasarkan waktu masuk...

Data berhasil diurutkan!

=== HASIL PENGURUTAN ===
--------------------------------------------------
No   Plat Nomor          Waktu Masuk         
--------------------------------------------------
1    D5678CD             07:30               
2    E9012EF             08:15               
3    B1234AB             09:45               
--------------------------------------------------

Keterangan: Data diurutkan secara ascending (dari terkecil ke terbesar)
```

### **5. Cari Kendaraan (Sequential Search)**
```
=== CARI KENDARAAN (SEQUENTIAL SEARCH) ===

Masukkan plat nomor yang dicari: E9012EF

Mencari kendaraan...

Kendaraan ditemukan!

--------------------------------------------------
Posisi       : 3
Plat Nomor   : E9012EF
Waktu Masuk  : 08:15
--------------------------------------------------
```

### **6. Keluar Program**
```
========================================
Terima kasih telah menggunakan program!
        PARKIRAN CERDAS v1.0
========================================
```

## ⚠️ Edge Cases yang Ditangani

| Situasi | Respons Program | Status | Penjelasan |
|---------|----------------|---------|-----------|
| Parkiran penuh (5 kendaraan) | ❌ ERROR: Parkiran penuh! | ✅ | Mencegah overflow data |
| Parkiran kosong saat tampil status | ℹ️ INFO: Parkiran kosong. | ✅ | Validasi sebelum iterate array |
| Parkiran kosong saat keluarkan kendaraan | ❌ ERROR: Parkiran kosong! | ✅ | Mencegah akses index negatif |
| Kendaraan tidak ditemukan | ❌ ERROR: Kendaraan tidak ditemukan! | ✅ | Sequential Search return -1 |
| Parkiran kosong saat urutkan | ❌ ERROR: Parkiran kosong! | ✅ | Validasi sebelum nested loop |
| Parkiran kosong saat cari | ❌ ERROR: Parkiran kosong! | ✅ | Validasi sebelum search loop |
| Input menu tidak valid (non-integer) | ❌ ERROR: Pilihan tidak valid! | ✅ | cin.fail() check di main() |
| Input menu tidak valid (1-6) | ❌ ERROR: Pilihan tidak valid! | ✅ | Default case di switch statement |

## 📊 Algoritma yang Diimplementasikan ✅ LENGKAP

### **1. Sequential Search** ✅ LENGKAP
- **Lokasi:** Menu 2 (Keluarkan Kendaraan) & Menu 5 (Cari Kendaraan)
- **Kompleksitas Waktu:** O(n) - Linear Time
- **Kompleksitas Ruang:** O(1) - Constant Space
- **Cara Kerja:** 
  - Iterasi setiap elemen array dari awal hingga akhir
  - Membandingkan dengan nilai yang dicari
  - Berhenti ketika elemen ditemukan atau array habis
- **Keunggulan:** Sederhana, efisien untuk data kecil, tidak perlu data terurut
- **Penggunaan:** Mencari kendaraan berdasarkan plat nomor di Menu 2 & 5

### **2. Bubble Sort** ✅ LENGKAP
- **Lokasi:** Menu 4 (Urutkan Kendaraan)
- **Kompleksitas Waktu:** O(n²) - Quadratic Time (Worst & Average case)
- **Kompleksitas Ruang:** O(1) - Constant Space (In-place sorting)
- **Cara Kerja:**
  - Nested loop membandingkan elemen yang berdekatan
  - Tukar posisi jika elemen kiri > elemen kanan
  - Ulangi hingga seluruh array terurut ascending
  - Outer loop berkurang 1 setiap iterasi (optimization)
- **Keunggulan:** In-place sorting, stabil, mudah dipahami
- **Kekurangan:** Tidak efisien untuk data besar (> 10,000 elemen)
- **Penggunaan:** Mengurutkan kendaraan berdasarkan waktu masuk (ascending)

### **3. Shift-Left Algorithm** ✅ LENGKAP
- **Lokasi:** Menu 2 (Keluarkan Kendaraan) - setelah Sequential Search menemukan index
- **Kompleksitas Waktu:** O(n) - Linear Time
- **Kompleksitas Ruang:** O(1) - Constant Space
- **Cara Kerja:**
  - Mulai dari index yang dihapus
  - Geser semua elemen setelahnya satu posisi ke kiri
  - Kurangi counter `jumlahKendaraan`
- **Fungsi:** Menghapus elemen dari array tanpa meninggalkan gap atau "lubang"
- **Keunggulan:** Mempertahankan struktur array yang compact, tidak ada memory leak
- **Penggunaan:** Penghapusan kendaraan dari array setelah ditemukan Sequential Search

## 📊 Flowchart Program

![Flowchart Sistem Parkir Cerdas](flowchart/Flowchart-Sistem-Parkir-Cerdas.drawio.png)

*Flowchart menunjukkan alur kerja sistem parkir dari menu utama hingga setiap fitur yang tersedia.*

## 📁 File dalam Project

```
Simulasi-Parkiran-Cerdas/
├── flowchart/
│   └── Flowchart-Sistem-Parkir-Cerdas.drawio.png
├── simulasi_parkiran_cerdas.cpp    # File program utama (100% selesai)
├── simulasi_parkiran_cerdas.exe    # File executable hasil compile (Windows)
└── README.md                        # File dokumentasi (overview project)
```

## ✅ Hasil Testing & Validasi

Semua fitur telah diuji dan berfungsi dengan sempurna:

✅ **Menu 1 (Tambah Kendaraan)**
- Menambah kendaraan hingga kapasitas penuh
- Validasi input plat nomor & waktu masuk
- Pesan error ketika parkiran penuh

✅ **Menu 2 (Keluarkan Kendaraan)**
- Sequential Search menemukan kendaraan
- Shift-Left Algorithm menghapus dengan sempurna
- Pesan error ketika kendaraan tidak ditemukan atau parkiran kosong

✅ **Menu 3 (Tampilkan Status)**
- Menampilkan tabel terformat dengan `iomanip`
- Informasi jumlah kendaraan & slot tersisa
- Pesan info ketika parkiran kosong

✅ **Menu 4 (Urutkan Kendaraan)**
- Bubble Sort mengurutkan waktu masuk ascending
- Menampilkan hasil pengurutan dalam tabel
- Pesan error ketika parkiran kosong

✅ **Menu 5 (Cari Kendaraan)**
- Sequential Search mencari berdasarkan plat nomor
- Menampilkan posisi & detail kendaraan yang ditemukan
- Pesan error ketika kendaraan tidak ditemukan atau parkiran kosong

✅ **Menu 6 (Keluar Program)**
- Menampilkan pesan terima kasih
- Exit program dengan clean

## 🎯 Status Penyelesaian

**Status:** 100% SELESAI ✅

- ✅ Semua 6 menu diimplementasikan dan teruji
- ✅ Semua algoritma (Sequential Search, Bubble Sort, Shift-Left) berfungsi
- ✅ Semua edge case ditangani dengan baik
- ✅ Dokumentasi lengkap dan profesional
- ✅ Code sudah di-compile dan siap dijalankan

## 🚀 Cara Menjalankan Program

### **Di Windows (dengan g++/MinGW):**
```bash
g++ -std=c++17 simulasi_parkiran_cerdas.cpp -o parkir.exe
parkir.exe
```

### **Di Linux/Mac (dengan g++):**
```bash
g++ -std=c++17 simulasi_parkiran_cerdas.cpp -o parkir
./parkir
```

### **Menggunakan VS Code Task:**
Tekan `Ctrl+Shift+B` dan pilih "build and run"

## 📊 Spesifikasi Teknis

- **Bahasa:** C++ (Standard C++17)
- **Platform:** Windows, Linux, macOS
- **Compiler:** g++/MinGW (recommended)
- **Kapasitas Maksimal:** 5 kendaraan
- **Ukuran Executable:** ~50-100 KB (tergantung compiler flags)
- **Memory Usage:** ~2-5 MB

## 📝 Catatan Penting

1. **Input Plat Nomor & Waktu:** Gunakan format tanpa spasi (contoh: B1234AB, 08:00)
2. **Urutan Bubble Sort:** Data diurutkan berdasarkan string comparison (ASCII order)
3. **Pembersihan Layar:** Menggunakan `system("cls")` untuk Windows
4. **Input Validation:** Program menangani input invalid dengan baik

## 🎓 Pembelajaran yang Didapat

Dalam membuat project ini, telah mempelajari:

1. **Data Structures:** Array 1D untuk penyimpanan data
2. **Algorithms:** Sequential Search (O(n)), Bubble Sort (O(n²)), Shift-Left (O(n))
3. **Programming Concepts:** Loop, conditional, array manipulation, string handling
4. **Best Practices:** Modular functions, edge case handling, user-friendly UI
5. **C++ Features:** `iomanip` untuk formatting output, `cin.fail()` untuk input validation
6. **Problem Solving:** Merancang solusi yang efisien dan maintainable

## 👨‍💻 Informasi Developer

- **Proyek:** PBL - Simulasi Parkiran Cerdas
- **Bahasa:** C++
- **Standard:** C++17
- **Status:** ✅ SELESAI 100%
- **Tanggal Selesai:** November 2025

## 📄 Lisensi

Program ini dibuat untuk keperluan pembelajaran PBL (Project Based Learning).

---

**Created with ❤️ for learning purposes**
