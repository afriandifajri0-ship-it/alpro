#include <iostream>
#include <cstdlib>   // untuk rand() dan srand()
#include <ctime>     // untuk time()

using namespace std;

int main() {
    int angkaRahasia, tebakan;
    int kesempatan = 5;

    // Membuat angka acak antara 1–10
    srand(time(0));
    angkaRahasia = rand() % 10 + 1;

    cout << "=== Permainan Tebak Angka ===" << endl;
    cout << "Tebak angka rahasia antara 1 sampai 10" << endl;

    for (int i = 1; i <= kesempatan; i++) {
        cout << "Percobaan ke-" << i << ": ";
        cin >> tebakan;

        if (tebakan == angkaRahasia) {
            cout << "Selamat! Tebakan kamu benar" << endl;
            break; // menghentikan perulangan jika benar
        } else {
            cout << "Tebakan salah. Coba lagi!" << endl;
        }

        if (i == kesempatan) {
            cout << "Kesempatan habis. Angka yang benar adalah " << angkaRahasia << endl;
        }
    }

    cout << "Program selesai." << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int menu;

//     cout << "=== MENU RESTORAN CEPAT SAJI ===" << endl;
//     cout << "1. Burger" << endl;
//     cout << "2. Ayam Goreng" << endl;
//     cout << "3. Kentang Goreng" << endl;
//     cout << "4. Minuman" << endl;
//     cout << "===============================" << endl;

//     cout << "Masukkan nomor menu pilihan Anda: ";
//     cin >> menu;

//     // Gunakan switch statement untuk menampilkan menu sesuai pilihan
//     switch (menu) {
//         case 1:
//             cout << "Anda memilih: Burger" << endl;
//             break;
//         case 2:
//             cout << "Anda memilih: Ayam Goreng" << endl;
//             break;
//         case 3:
//             cout << "Anda memilih: Kentang Goreng" << endl;
//             break;
//         case 4:
//             cout << "Anda memilih: Minuman" << endl;
//             break;
//         default:
//             cout << "Nomor menu tidak valid! Silakan coba lagi." << endl;
//     }

//     cout << "Terima kasih telah memesan di restoran kami!" << endl;
//     return 0;
// }