#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

void inputNilaiUjian() {
    int nilai[5], total = 0;
    cout << "\n=== Input Nilai Ujian ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }
    float rata = total / 5.0;
    cout << "Rata-rata: " << rata << endl;
}

void minMaxArray() {
    int data[6] = {10, 5, 8, 2, 7, 3};
    int min = data[0], max = data[0];
    for (int i = 1; i < 6; i++) {
        if (data[i] < min) min = data[i];
        if (data[i] > max) max = data[i];
    }
    cout << "\n=== Min & Max Array ===\n";
    cout << "Terkecil: " << min << ", Terbesar: " << max << endl;
}

void sortArray() {
    int data[6] = {10, 5, 8, 2, 7, 3};
    sort(data, data + 6);
    cout << "\n=== Array Terurut ===\n";
    for (int i = 0; i < 6; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void array2D() {
    int arr[3][3];
    srand(time(0));
    cout << "\n=== Array 2D Random ===\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void simpanNamaKeFile() {
    ofstream file("nama.txt");
    string nama;
    cout << "\n=== Simpan Nama Mahasiswa ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nama ke-" << i+1 << ": ";
        cin >> nama;
        file << nama << endl;
    }
    file.close();
}

void bacaNamaDariFile() {
    ifstream file("nama.txt");
    string nama;
    cout << "\n=== Baca Nama dari File ===\n";
    while (getline(file, nama)) {
        cout << nama << endl;
    }
    file.close();
}

void simpanNilaiKeFile() {
    ofstream file("nilai.txt");
    int nilai;
    cout << "\n=== Simpan Nilai ke File ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai;
        file << nilai << " ";
    }
file.close();
}

void bacaNilaiDariFile() {
    ifstream file("nilai.txt");
    int nilai, total = 0, count = 0, max = 0;
    cout << "\n=== Baca Nilai dari File ===\n";
    while (file >> nilai) {
        cout << nilai << " ";
        total += nilai;
        if (nilai > max) max = nilai;
        count++;
    }
    float rata = (float)total / count;
    cout << "\nTotal: " << total << ", Rata-rata: " << rata << ", Tertinggi: " << max << endl;
    file.close();
}

int main() {
    inputNilaiUjian();
    minMaxArray();
    sortArray();
    array2D();
    simpanNamaKeFile();
    bacaNamaDariFile();
    simpanNilaiKeFile();
    bacaNilaiDariFile();

    return 0;
}