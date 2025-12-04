#include <iostream>
#include <string>
using namespace std;

int main () {
    string namaBarang;
    int jumlah;
    double harga, total;

    cout <<"Masukan nama barang: " ;
    getline(cin, namaBarang);

    cout<< "Masukan harga satuan  barang: ";
    cin>> harga;

    cout<< "Masukan jumlah barang : ";
    cin>> jumlah;

    total = harga * jumlah;

    cout<< "\n--- Rincian Pembelian ---" << endl;
    cout << "nama barang : " << namaBarang << endl;
    cout << "Harga Satuan : Rp " << harga << endl;
    cout << "jumlah : " << jumlah << endl;
    cout << "Total harga : Rp " << total << endl;

    return 0;

}