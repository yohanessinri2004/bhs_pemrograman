#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float angka1, angka2;
    
    // Meminta pengguna memasukkan dua angka
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    
    // Melakukan operasi penjumlahan, pengurangan, perkalian, dan pembagian
    float hasil_penjumlahan = angka1 + angka2;
    float hasil_pengurangan = angka1 - angka2;
    float hasil_perkalian = angka1 * angka2;
    // Menghindari pembagian dengan nol
    float hasil_pembagian = (angka2 != 0) ? (angka1 / angka2) : 0;

    // Menampilkan hasil operasi
    cout << "Hasil penjumlahan: " << hasil_penjumlahan << endl;
    cout << "Hasil pengurangan: " << hasil_pengurangan << endl;
    cout << "Hasil perkalian: " << hasil_perkalian << endl;
    cout << "Hasil pembagian: " << hasil_pembagian << endl;

    return 0;
}