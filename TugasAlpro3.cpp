#include <iostream>
using namespace std;

// Menghitung nilai tugas (30%)
float hitungTugas(float nilaiTugas) {
    return nilaiTugas * 0.30;
}

// Menghitung nilai UTS (30%)
float hitungUTS(float nilaiUTS) {
    return nilaiUTS * 0.30;
}

// Menghitung nilai UAS (40%)
float hitungUAS(float nilaiUAS) {
    return nilaiUAS * 0.40;
}

// Menghitung nilai akhir
float hitungAkhir(float tugas, float uts, float uas) {
    return tugas + uts + uas;
}

// Menentukan kategori nilai
string kategori(float nilaiAkhir) {
    if (nilaiAkhir >= 85) return "A (Sangat Baik)";
    else if (nilaiAkhir >= 75) return "B (Baik)";
    else if (nilaiAkhir >= 65) return "C (Cukup)";
    else if (nilaiAkhir >= 50) return "D (Kurang)";
    else return "E (Sangat Kurang)";
}

int main() {
    float nilaiTugas, nilaiUTS, nilaiUAS;

    // Input nilai
    cout << "Masukkan nilai Tugas : ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai UTS   : ";
    cin >> nilaiUTS;
    cout << "Masukkan nilai UAS   : ";
    cin >> nilaiUAS;

    // Hitung komponen nilai
    float nilaiTugas30 = hitungTugas(nilaiTugas);
    float nilaiUTS30   = hitungUTS(nilaiUTS);
    float nilaiUAS40   = hitungUAS(nilaiUAS);

    // Hitung nilai akhir
    float nilaiAkhir = hitungAkhir(nilaiTugas30, nilaiUTS30, nilaiUAS40);

    // Output hasil
    cout << "\n===== HASIL PERHITUNGAN =====\n";
    cout << "Nilai Tugas (30%) : " << nilaiTugas30 << endl;
    cout << "Nilai UTS (30%)   : " << nilaiUTS30 << endl;
    cout << "Nilai UAS (40%)   : " << nilaiUAS40 << endl;
    cout << "Nilai Akhir       : " << nilaiAkhir << endl;
    cout << "Kategori Nilai    : " << kategori(nilaiAkhir) << endl;

    return 0;
}
