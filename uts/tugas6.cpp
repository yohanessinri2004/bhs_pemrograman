#include <iostream>
using namespace std;

// Deklarasi prototipe fungsi
void menu();
void tambah();
void kurang();
void kali();
void bagi();

int main() {
    // Memanggil fungsi menu dan operasi matematika
    menu();
    return 0;
}

// Definisi fungsi menu
void menu() {
    cout << "Pilih operasi matematika:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan Anda (1-4): ";
    int pilihan;
    cin >> pilihan;

    // Memanggil fungsi sesuai pilihan
    switch(pilihan) {
        case 1:
            tambah();
            break;
        case 2:
            kurang();
            break;
        case 3:
            kali();
            break;
        case 4:
            bagi();
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
}

// Definisi fungsi tambah
void tambah() {
    float angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
}

// Definisi fungsi kurang
void kurang() {
    float angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
}

// Definisi fungsi kali
void kali() {
    float angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Hasil perkalian: " << angka1 * angka2 << endl;
}

// Definisi fungsi bagi
void bagi() {
    float angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    if (angka2 != 0) {
        cout << "Hasil pembagian: " << angka1 / angka2 << endl;
    } else {
        cout << "Tidak bisa melakukan pembagian karena angka kedua adalah nol." << endl;
    }
}