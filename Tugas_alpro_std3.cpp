#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
};

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore(); // membersihkan buffer

    Buku daftarBuku[100]; // maksimal 100 buku

    // Input data buku
    for (int i = 0; i < n; i++) {
        cout << "\nBuku ke-" << i + 1 << endl;
        cout << "Judul     : ";
        getline(cin, daftarBuku[i].judul);
        cout << "Pengarang : ";
        getline(cin, daftarBuku[i].pengarang);
    }

    // Menu pencarian
    string cariJudul;
    cout << "\nMasukkan judul buku yang ingin dicari: ";
    getline(cin, cariJudul);

    bool ketemu = false;
    for (int i = 0; i < n; i++) {
        if (daftarBuku[i].judul == cariJudul) {
            cout << "\nBuku ditemukan!" << endl;
            cout << "Judul     : " << daftarBuku[i].judul << endl;
            cout << "Pengarang : " << daftarBuku[i].pengarang << endl;
            ketemu = true;
            break;
        }
    }

    if (!ketemu) {
        cout << "\nBuku dengan judul \"" << cariJudul << "\" tidak ditemukan." << endl;
    }

    return 0;
}
