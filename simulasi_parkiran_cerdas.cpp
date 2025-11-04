#include <iostream>
#include <string>
using namespace std;

int main() {
    int kapasitas;   
    int jumlahKendaraan = 0;

    cout << "Masukkan kapasitas parkir: ";
    cin >> kapasitas;

    if (kapasitas <= 0) {
        cout << "Kapasitas parkir harus lebih dari 0!" << endl;
        return 0;
    }

    cout << "Kapasitas parkir berhasil diatur: " << kapasitas << " slot." << endl;

    string plat[100];
    string jenis[100];
    int jam[100];
    int menit[100];

    int pilihan;
    do {
        cout << "\nMenu Parkiran:" << endl;
        cout << "1. Tambah Kendaraan" << endl;
        cout << "2. Keluar Kendaraan" << endl;
        cout << "3. Tampilkan Status Parkir" << endl;
        cout << "4. Keluar Program" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Fitur tambah kendaraan akan dikembangkan pada tahap berikutnya.\n";
                break;
            case 2:
                cout << "Fitur keluar kendaraan akan dikembangkan pada tahap berikutnya.\n";
                break;
            case 3:
                cout << "Fitur tampilkan status parkir akan dikembangkan pada tahap berikutnya.\n";
                break;
            case 4:
                cout << "Keluar program.\n";
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n";
        }

    } while (pilihan != 4);

    return 0;
}
