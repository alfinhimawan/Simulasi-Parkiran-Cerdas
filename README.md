# Simulasi Parkiran Cerdas Berdasarkan Kapasitas dan Waktu Masuk

## Deskripsi
Program ini mensimulasikan *sistem parkiran cerdas* berbasis C++ yang mengelola kendaraan berdasarkan waktu masuk dan kapasitas parkir maksimum.  
Program mencatat kendaraan yang masuk, mengatur slot parkir, dan menampilkan status parkir secara real-time.  

Tujuan program ini adalah:
- Mengatur data kendaraan secara otomatis.  
- Mengurutkan kendaraan berdasarkan waktu masuk (prioritas kendaraan lama).  
- Mempermudah pengelolaan parkir dan monitoring slot kosong.  

## Fitur Utama
*Tahap 1*
- Input kapasitas parkiran.  
- Menu utama dengan opsi:
  1. Tambah kendaraan (sementara placeholder)  
  2. Keluar kendaraan (sementara placeholder)  
  3. Tampilkan status parkir (sementara placeholder)  
  4. Keluar program  

*Tahap 2*
- Fitur *Tambah Kendaraan*:
  - Input plat nomor, jenis kendaraan (Mobil/Motor), jam & menit masuk.  
  - Validasi kapasitas parkir (tidak bisa menambah jika penuh).  
  - Data kendaraan disimpan ke array.  

*Tahap 3*
- Fitur *Tampilkan Status Parkir*:
  - Menampilkan semua kendaraan yang sedang parkir dengan slot, plat, jenis, dan waktu masuk.  
  - Jika parkiran kosong, menampilkan pesan “Belum ada kendaraan di parkir.”  
  - Masih sementara, belum ada sorting atau keluar kendaraan.  

## Algoritma & Struktur Program
- *Percabangan:* if / else untuk validasi, switch untuk menu.  
- *Perulangan:* do-while untuk menu, for untuk menampilkan kendaraan.  
- *Array:* 1D array (plat[], jenis[], jam[], menit[]) untuk menyimpan data kendaraan.  
- *Sorting:* akan menggunakan Bubble Sort untuk mengurutkan kendaraan berdasarkan waktu masuk.  
- *Searching:* akan menggunakan Sequential Search untuk mencari kendaraan berdasarkan plat nomor.  

## Struktur File
- simulasi_parkiran_cerdas.cpp → kode utama program (Tahap 1–3).  
- README.md → dokumentasi repo.  

## Rencana Tahap Berikutnya
1. Fitur *Keluar Kendaraan* dengan pencarian plat nomor.  
2. Fitur *Urutkan Kendaraan Berdasarkan Waktu Masuk* (Bubble Sort).  
3. Fitur tambahan lainnya (opsional) seperti laporan slot kosong atau kendaraan lama.  

## Catatan
Program ini dibuat untuk *praktikum mata kuliah Praktik Algoritma Pemrograman*.  
Tahap 3 sudah fungsional untuk *input kendaraan dan menampilkan status parkir sementara*, fitur lain akan dikembangkan bertahap.