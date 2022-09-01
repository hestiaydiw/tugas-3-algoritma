#include <iostream>
using namespace std;

int main()
{
    cout << "|===================================================|\n";
    cout << "|Nama      : Hesti Widya Ningsih                    |\n";
    cout << "|NIM       : 2211600958                             |\n";
    cout << "|Matrikulasi Algoritma Magister Informatika         |\n";
    cout << "|Program untuk mencetak nilai tengah                |\n";
    cout << "|dari tiga angka yang di input                      |\n";
    cout << "|===================================================|\n";
    
    int n1, n2, n3;
    char ulang;
    
    do{
        cout << "Input 3 bilangan : ";
        cin >> n1 >> n2 >> n3;
        cout << "Angka 1: " << n1 << "\n";
        cout << "Angka 2: " << n2 << "\n";
        cout << "Angka 3: " << n3 << "\n";
    
        //cek apakah n1 nilai tengah atau bukan
        if(n2<n1 && n1<n3 || n3<n1 && n1<n2){
            cout << "Nilai tengah : " << n1 << "\n";
        }
    
        //cek apakah n2 nilai tengah atau bukan
        if(n1<n2 && n2<n3 || n3<n2 && n2<n1){
            cout << "Nilai tengah :" << n2 << "\n";
        }
    
        //cek apakah n3 nilai tengah atau bukan
        // if(n1>n3 && n3>n2 || n2>n3 && n3>n1){
        if(n3<n1 && n2<n3 || n3<n2 && n1<n3){
            cout << "Nilai tengah :" << n3 << "\n";
        }
        
        //cek apakah angka ada yang sama atau tidak
        if(n1==n2 || n2==n3 || n3==n1){
            cout <<"Nilai tengah : -" "\n" "Angka tidak boleh sama" "\n";
        }
        
        cout << "Lanjut (y/t)? ";
        cin >> ulang;
        cout << endl;
    }
    
        while (ulang!= 't');
        cout << "Terimakasih...";
        return 0;
}