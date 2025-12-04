#include<iostream>
using namespace std;

int main(){
    string nama;
    string status;

    cout<<"Masukan nama Mahasiswa : ";
    getline (cin, nama);
    
    cout<<"Masukan status kehadiran (Hadir/Izin/sakit/alpa): "<<endl;
    cin>> status;

    cout<<"\n --- Data absensi --- "<<endl;
    cout<<"Nama Mahasiswa : "<< nama <<endl;
    cout<<"Status Kehadiran : "<< status <<endl;
    
    if (status == "Hadir" && status == "Hadir") {
        cout<<"Keterngan : Mahasiswa mengikuti perkuliahan";

    } else if(status == "Izin" && status == "Izin") {
        cout<<"Keterangan : Mahasiswa tidak mengikuti perkuliahan";
    
    } else if(status == "sakit" && status == "sakit") {
        cout<<"Keterangan : Mahasiswa tidak mengikuti perkuliahan";
    
    } else if(status == "alpa" && status == "alpa") {
        cout<<"Keterangan : Mahasiswa tidak mengikuti perkuliahan";
    
    } else {
        cout<<"Keterangan status tidak valid"<<endl;
    }

    
}