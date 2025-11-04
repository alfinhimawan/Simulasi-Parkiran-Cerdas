# Simulasi Parkiran Cerdas Berdasarkan Kapasitas dan Waktu Masuk

## Deskripsi
Program ini mensimulasikan **sistem parkiran cerdas** berbasis C++ yang mengelola kendaraan berdasarkan waktu masuk dan kapasitas parkir maksimum.  
Program mencatat kendaraan yang masuk, mengatur slot parkir, dan menampilkan status parkir secara real-time.  

Tujuan program ini adalah:
- Mengatur data kendaraan secara otomatis.  
- Mengurutkan kendaraan berdasarkan waktu masuk (prioritas kendaraan lama).  
- Mempermudah pengelolaan parkir dan monitoring slot kosong.  

## Fitur Utama (Tahap 1)
- Input kapasitas parkiran.  
- Menu utama dengan opsi:
  1. Tambah kendaraan (sementara placeholder)  
  2. Keluar kendaraan (sementara placeholder)  
  3. Tampilkan status parkir (sementara placeholder)  
  4. Keluar program  
- Validasi kapasitas minimal > 0.  

## Algoritma & Struktur Program
- **Percabangan:** `if / else` untuk validasi, `switch` untuk menu.  
- **Perulangan:** `do-while` untuk menu, `for` nantinya untuk menampilkan kendaraan.  
- **Array:** 1D array (`plat[]`, `jenis[]`, `jam[]`, `menit[]`) untuk menyimpan data kendaraan.  
- **Sorting:** akan menggunakan Bubble Sort untuk mengurutkan kendaraan berdasarkan waktu masuk.  
- **Searching:** akan menggunakan Sequential Search untuk mencari kendaraan berdasarkan plat nomor.  

## Struktur File
- `simulasi_parkiran_cerdas.cpp` → kode utama program (Tahap 1).  
- `README.md` → dokumentasi repo.  

## Rencana Tahap Berikutnya
1. Fitur **Tambah Kendaraan** dengan validasi kapasitas.  
2. Fitur **Keluar Kendaraan** dengan pencarian plat nomor.  
3. Fitur **Tampilkan Status Parkir** dan sorting kendaraan berdasarkan waktu masuk.  

## Catatan
Program ini dibuat untuk **Praktikum mata kuliah Praktik Algoritma Pemrograman**.  
Tahap 1 masih berupa kerangka program, fitur lengkap akan dikembangkan bertahap.