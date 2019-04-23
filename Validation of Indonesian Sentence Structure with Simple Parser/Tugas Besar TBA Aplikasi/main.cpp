#include <iostream>
#include "header.h"


using namespace std;

int main()
{
    system ("color 70");
    string result[10];
    int c = 0;
    int i = 0;
    int j;
    string kata;
    cout << "Pilih lah kata yang tersedia untuk melihat pola S-P-O-K" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "------                       List Kata                       ------" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "| Subjek\t | Predikat\t | Objek\t | Keterangan\t  |" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "| Saya\t\t | Main\t\t | Bola\t\t | Sekarang\t\  |" << endl;
    cout << "| Aku\t\t | Makan\t | Nasi\t\t | Kemarin\t  |" << endl;
    cout << "| Dia\t\t | Mandi\t | Air\t\t | Malam ini\t  |" << endl;
    cout << "| Krisna\t | Nonton\t | TV\t\t | Pagi ini\t  |" << endl;
    cout << "| Naufal\t | Minum\t | Susu\t\t | Nanti\t  |" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Input Kalimat = ";
    getline(cin, kata);
    cout <<"Input=";
    cout <<" "+kata << endl;
    while (i != kata.length()){
        if(cekSubjek(kata,i)){

            result[c] = "Subjek";
        }
        else if (cekPredikat(kata,i)){

            result[c] = "Predikat";
        }
        else if (cekObject(kata, i)){

            result[c] = "Objek";
        }
        else if (cekKeterangan(kata, i)){
            result[c] = "Keterangan";
        }
        else{
            result[c] = "error";
            Spasi(kata, i);
        }
        c++;
    }
    int b = 0;
    cout << "Pola = ";
    while (b != c){
        if (b == c-1) {
            cout << result[b] << " ";
        } else {
            cout << result[b] << " - ";
        }
        b++;
    }

    b = 0;
    cout << "\n";
    if (  (result[b] == "Subjek" && result[b+1] == "Predikat" && result[b+2] == "Objek" && result[b+3] == "Keterangan") ||
            (result[b] == "Subjek" && result[b+1] == "Predikat" && result[b+2] == "Objek") ||
              (result[b] == "Subjek" && result[b+1] == "Predikat" && result[b+2] == "Keterangan") ||
                (result[b] == "Subjek" && result[b+1] == "Predikat") ) {
        cout << " Kalimat Valid";
    } else{
        cout << " Namun, Pola tidak Valid";
    }


    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "============end of program============";
    getline(cin, kata);
};
