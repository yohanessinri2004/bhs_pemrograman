#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Deklarasi variabel
    int tahun_lahir, tahun_sekarang, usia;

    // Mendapatkan tahun sekarang
    time_t now = time(0);
    tm *ltm = localtime(&now);
    tahun_sekarang = 1900 + ltm->tm_year;

    // Meminta pengguna memasukkan tahun kelahiran
    cout << "Masukkan tahun kelahiran Anda: ";
    cin >> tahun_lahir;

    // Menghitung usia
    usia = tahun_sekarang - tahun_lahir;

    // Menampilkan usia
    cout << "Usia Anda adalah: " << usia << " tahun" << endl;

    return 0;
}