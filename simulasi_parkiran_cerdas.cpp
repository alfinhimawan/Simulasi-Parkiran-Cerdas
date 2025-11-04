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
                if (jumlahKendaraan >= kapasitas) {
                    cout << "Parkiran penuh! Tidak bisa menambah kendaraan.\n";
                } else {
                    cout << "Masukkan plat nomor: ";
                    cin >> plat[jumlahKendaraan];

                    cout << "Masukkan jenis kendaraan (Mobil/Motor): ";
                    cin >> jenis[jumlahKendaraan];

                    cout << "Masukkan jam masuk (0-23): ";
                    cin >> jam[jumlahKendaraan];

                    cout << "Masukkan menit masuk (0-59): ";
                    cin >> menit[jumlahKendaraan];

                    jumlahKendaraan++;
                    cout << "Kendaraan berhasil ditambahkan.\n";
                }
                break;

            case 2:
                cout << "Fitur keluar kendaraan akan dikembangkan di tahap berikutnya.\n";
                break;

            case 3:
                cout << "Fitur tampilkan status parkir akan dikembangkan di tahap berikutnya.\n";
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
