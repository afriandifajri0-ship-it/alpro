#include <iostream>
using namespace std;

int main(){
    int tanggal;
    string catatan;
    string jawaban;
    
//sengaja dibuat kosong agar di terminal terlihat rapi//
    cout<<""<<endl;

//kalender
    cout<<"Bulan Oktober"<<endl;
    cout<<"Tanggal"<<endl;
    cout<<"1   2   3   4   5   6   7   8   9   10"<<endl;
    cout<<"11  12  13  14  15  16  17  18  19  20"<<endl;
    cout<<"21  22  23  24  25  26  27  28  29  30"<<endl<<endl;
    cout<<"Tanggal Berapa kah yang anda ingin kasi catatan "<<endl;
    cin>>tanggal;
    cin.ignore();

    cout<<"Masukan Catatan "<<endl;
    getline (cin, catatan);

    cout<<"Apakah anda mau buka catatan?  (iya/tidak)"<<endl;
    getline(cin, jawaban);

// percabangan//
     if (jawaban == "iya"){
        cout<<"Catatan yang anda beri pada tanggal "<< tanggal <<" adalah "<< catatan ;
    }
     else if (jawaban == "tidak")
     {
       cout<<"okeee";
     } else {
        cout<<"Kode tidak valid";
     }
     
    return 0;

}
