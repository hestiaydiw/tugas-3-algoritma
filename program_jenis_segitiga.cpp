#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    char ulang;
    
    cout << "|===================================================|\n";
    cout << "|Nama      : Hesti Widya Ningsih                    |\n";
    cout << "|NIM       : 2211600958                             |\n";
    cout << "|Matrikulasi Algoritma Magister Informatika         |\n";
    cout << "|Program untuk mencetak jenis segitiga              |\n";
    cout << "|dari tiga angka sisi yang di input                 |\n";
    cout << "|===================================================|\n";

    do {
        cout << "Masukkan sisi A :";
        cin >> a;
        cout << "Masukkan sisi B :";
        cin >> b;
        cout << "Masukkan sisi C :";
        cin >> c;
        if(a==b && b==c){
            std::cout << "Segitiga Sama Sisi" << std::endl;   
        }
        else if(a==b || b==c || c==a){
            std::cout << "Segitiga Sama Kaki" << std::endl;
        }
        else{
            std::cout << "Segitiga Sembarang" << std::endl;
        }
        
        cout << "Lanjut (y/t)? ";
        cin >> ulang;
        cout << endl;
        
    }
        while (ulang!= 't');
        cout << "Terimakasih...";
        return 0;
}