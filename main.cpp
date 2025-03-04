#include <iostream>

using namespace std;

void tampilkanMenu() {
    cout << "===== Kalkulator Sederhana =====" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih operasi (1-5): ";
}

int main() {
    int pilihan;
    double angka1, angka2, hasil;

    do {
        tampilkanMenu();
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
        }

        switch (pilihan) {
            case 1:
                hasil = angka1 + angka2;
                cout << "Hasil: " << hasil << endl;
                break;
            case 2:
                hasil = angka1 - angka2;
                cout << "Hasil: " << hasil << endl;
                break;
            case 3:
                hasil = angka1 * angka2;
                cout << "Hasil: " << hasil << endl;
                break;
            case 4:
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                    cout << "Hasil: " << hasil << endl;
                } else {
                    cout << "Kesalahan: Pembagian oleh nol tidak diperbolehkan!" << endl;
                }
                break;
            case 5:
                cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }

        cout << "\n";
    } while (pilihan != 5);

    return 0;
}
