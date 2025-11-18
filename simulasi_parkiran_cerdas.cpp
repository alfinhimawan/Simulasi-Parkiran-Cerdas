#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_KAPASITAS = 5;

string platNomor[MAX_KAPASITAS];
string waktuMasuk[MAX_KAPASITAS];

int jumlahKendaraan = 0;

void clearScreen() {
    system("cls");
}

void tampilkanHeader() {
    cout << "===============================================" << endl;
    cout << "    SIMULASI PARKIRAN CERDAS" << endl;
    cout << "    Kapasitas Maksimal: " << MAX_KAPASITAS << " Kendaraan" << endl;
    cout << "===============================================" << endl;
    cout << endl;
}

void pause() {
    cout << endl << "Tekan Enter untuk melanjutkan...";
    cin.ignore();
    cin.get();
}

void tambahKendaraan() {
    clearScreen();
    tampilkanHeader();
    cout << "=== MASUKKAN KENDARAAN ===" << endl << endl;
    
    if (jumlahKendaraan >= MAX_KAPASITAS) {
        cout << "ERROR: Parkiran penuh!" << endl;
        cout << "Kapasitas maksimal: " << MAX_KAPASITAS << " kendaraan" << endl;
        cout << "Silakan tunggu hingga ada kendaraan yang keluar." << endl;
        pause();
        return;
    }
    
    string plat, waktu;
    
    cout << "Plat Nomor   : ";
    cin >> plat;
    
    cout << "Waktu Masuk  : ";
    cin >> waktu;
    
    platNomor[jumlahKendaraan] = plat;
    waktuMasuk[jumlahKendaraan] = waktu;
    jumlahKendaraan++;
    
    cout << endl << "Kendaraan berhasil masuk parkiran!" << endl;
    cout << "Total kendaraan saat ini: " << jumlahKendaraan << "/" << MAX_KAPASITAS << endl;
    
    pause();
}

void keluarkanKendaraan() {
    clearScreen();
    tampilkanHeader();
    cout << "=== KELUARKAN KENDARAAN ===" << endl << endl;
    
    if (jumlahKendaraan == 0) {
        cout << "ERROR: Parkiran kosong!" << endl;
        cout << "Tidak ada kendaraan yang dapat dikeluarkan." << endl;
        pause();
        return;
    }
    
    string plat;
    cout << "Masukkan plat nomor yang akan keluar: ";
    cin >> plat;
    
    int index = -1;
    for (int i = 0; i < jumlahKendaraan; i++) {
        if (platNomor[i] == plat) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        cout << endl << "ERROR: Kendaraan dengan plat nomor '" << plat << "' tidak ditemukan!" << endl;
        cout << "Pastikan plat nomor yang dimasukkan benar." << endl;
        pause();
        return;
    }
    
    string waktuKeluarTemp = waktuMasuk[index];
    
    for (int i = index; i < jumlahKendaraan - 1; i++) {
        platNomor[i] = platNomor[i + 1];
        waktuMasuk[i] = waktuMasuk[i + 1];
    }
    
    jumlahKendaraan--;
    
    cout << endl << "Kendaraan berhasil keluar!" << endl;
    cout << "Plat Nomor   : " << plat << endl;
    cout << "Waktu Masuk  : " << waktuKeluarTemp << endl;
    cout << "Total kendaraan saat ini: " << jumlahKendaraan << "/" << MAX_KAPASITAS << endl;
    
    pause();
}

void tampilkanStatus() {
    clearScreen();
    tampilkanHeader();
    cout << "=== STATUS PARKIRAN ===" << endl << endl;
    
    if (jumlahKendaraan == 0) {
        cout << "INFO: Parkiran kosong." << endl;
        cout << "Belum ada kendaraan yang parkir." << endl;
        pause();
        return;
    }
    
    cout << "Jumlah Kendaraan: " << jumlahKendaraan << "/" << MAX_KAPASITAS << endl;
    cout << "Slot Tersisa    : " << (MAX_KAPASITAS - jumlahKendaraan) << endl << endl;
    
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(5) << "No" 
         << setw(20) << "Plat Nomor" 
         << setw(20) << "Waktu Masuk" << endl;
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    
    for (int i = 0; i < jumlahKendaraan; i++) {
        cout << left << setw(5) << (i + 1)
             << setw(20) << platNomor[i]
             << setw(20) << waktuMasuk[i] << endl;
    }
    
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' ');
    
    pause();
}

void urutkanKendaraan() {
    clearScreen();
    tampilkanHeader();
    cout << "=== URUTKAN KENDARAAN (BUBBLE SORT) ===" << endl << endl;
    
    cout << "INFORMASI: Fitur pengurutan sedang dalam tahap pengembangan." << endl;
    cout << endl;
    pause();
    
}

void cariKendaraan() {
    clearScreen();
    tampilkanHeader();
    cout << "=== CARI KENDARAAN (SEQUENTIAL SEARCH) ===" << endl << endl;
    
    cout << "INFORMASI: Fitur pencarian sedang dalam tahap pengembangan." << endl;
    cout << endl;

    pause();
    
}

void tampilkanMenu() {
    clearScreen();
    tampilkanHeader();
    cout << "MENU UTAMA" << endl;
    cout << "1. Masukkan Kendaraan" << endl;
    cout << "2. Keluarkan Kendaraan" << endl;
    cout << "3. Tampilkan Status Parkir" << endl;
    cout << "4. Urutkan Kendaraan (Bubble Sort)" << endl;
    cout << "5. Cari Kendaraan (Sequential Search)" << endl;
    cout << "6. Keluar Program" << endl;
    cout << endl;
    cout << "Pilihan Anda: ";
}

int main() {
    int pilihan;
    
    do {
        tampilkanMenu();
        cin >> pilihan;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            pilihan = 0;
        }
        
        switch (pilihan) {
            case 1:
                tambahKendaraan();
                break;
            case 2:
                keluarkanKendaraan();
                break;
            case 3:
                tampilkanStatus();
                break;
            case 4:
                urutkanKendaraan();
                break;
            case 5:
                cariKendaraan();
                break;
            case 6:
                clearScreen();
                cout << "========================================" << endl;
                cout << "Terima kasih telah menggunakan program!" << endl;
                cout << "        PARKIRAN CERDAS v1.0" << endl;
                cout << "========================================" << endl;
                break;
            default:
                clearScreen();
                cout << "ERROR: Pilihan tidak valid! Silakan pilih 1-6." << endl;
                pause();
        }
        
    } while (pilihan != 6);
    
    return 0;
}