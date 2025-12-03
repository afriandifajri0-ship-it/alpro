#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int N = 1000;
const double AMBANG_GEMPA = 6.5;
const double BATAS_TENANG = 2.0;

int main() {
    double data[N];

    // Input data (simulasi random)
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        data[i] = (rand() % 100) / 10.0;  // 0.0 - 9.9
    }

    // Hitung max, min
    double maxVal = data[0], minVal = data[0];
    for(int i = 1; i < N; i++){
        if(data[i] > maxVal) maxVal = data[i];
        if(data[i] < minVal) minVal = data[i];
    }

    // Median
    double sortedData[N];
    copy(data, data + N, sortedData);
    sort(sortedData, sortedData + N);
    double median = (sortedData[N/2 - 1] + sortedData[N/2]) / 2.0;

    // Standard deviasi
    double sum = 0.0;
    for(int i = 0; i < N; i++) sum += data[i];
    double mean = sum / N;

    double var = 0.0;
    for(int i = 0; i < N; i++){
        var += pow(data[i] - mean, 2);
    }
    double stdDev = sqrt(var / N);

    // Deteksi gempa
    bool gempaTerdeteksi = false;
    int indexGempa = -1;

    for(int i = 0; i < N-2; i++){
        if(data[i] > AMBANG_GEMPA &&
           data[i+1] > AMBANG_GEMPA &&
           data[i+2] > AMBANG_GEMPA){
            gempaTerdeteksi = true;
            indexGempa = i;
            break;
        }
    }

    // Deteksi aftershock
    bool afterShock = false;
    if(gempaTerdeteksi){
        for(int i = indexGempa + 3; i <= indexGempa + 200 && i < N; i++){
            if(data[i] > AMBANG_GEMPA){
                afterShock = true;
                break;
            }
        }
    }

    // Deteksi periode tenang
    bool periodeTenang = false;
    for(int i = 0; i < N - 49; i++){
        bool tenang = true;
        for(int j = i; j < i + 50; j++){
            if(data[j] >= BATAS_TENANG){
                tenang = false;
                break;
            }
        }
        if(tenang){
            periodeTenang = true;
            break;
        }
    }

    // OUTPUT
    cout << "=== HASIL ANALISIS SISTEM GEMPA ===" << endl;
    cout << "Nilai Maksimum       : " << maxVal << endl;
    cout << "Nilai Minimum        : " << minVal << endl;
    cout << "Median               : " << median << endl;
    cout << "Standar Deviasi      : " << stdDev << endl;

    if (gempaTerdeteksi) {
        cout << "Gempa terdeteksi pada indeks : " << indexGempa << endl;
        cout << "Aftershock           : " << (afterShock ? "YA" : "TIDAK") << endl;
    } else {
        cout << "Tidak ditemukan pola gempa" << endl;
    }

    cout << "Periode Tenang       : " 
         << (periodeTenang ? "ADA" : "TIDAK ADA") << endl;

    return 0;
}
