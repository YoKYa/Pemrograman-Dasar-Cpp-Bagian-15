#include <iostream>

using namespace std;

int main(){
    system("cls");
    
    int Angka;
    cout << "Masukkan Sebuah Angka : ";
    cin >> Angka;
    int Angka1 = Angka, Angka2 = Angka, Angka3 = Angka, Angka4 = Angka; // Deklarasi

    // Increment
    // Pre Increment
    cout << "1. Pre Increment" << endl;
    cout << "Angka Awal                  : " << Angka1 << endl;
    cout << "Angka Yang Di Pre Increment : " << ++Angka1 << endl;
    cout << "Angka Akhir                 : " << Angka1 << endl << endl;
    // Post Increment
    cout << "2. Post Increment" << endl;
    cout << "Angka Awal                  : " << Angka2 << endl;
    cout << "Angka Yang Di Post Increment: " << Angka2++ << endl;
    cout << "Angka Akhir                 : " << Angka2 << endl << endl;
    
    
    // Decrement
    // Pre Decrement
    cout << "1. Pre Decrement" << endl;
    cout << "Angka Awal                  : " << Angka3 << endl;
    cout << "Angka Yang Di Pre Decrement : " << --Angka3 << endl;
    cout << "Angka Akhir                 : " << Angka3 << endl << endl;
    // Post Decrement
    cout << "2. Post Decrement" << endl;
    cout << "Angka Awal                  : " << Angka4 << endl;
    cout << "Angka Yang Di Post Decrement: " << Angka4-- << endl;
    cout << "Angka Akhir                 : " << Angka4 << endl << endl;
    
    cin.get();
    return 0;
}