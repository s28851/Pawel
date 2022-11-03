#include<iostream>
using namespace std;

int main()
{
    int a; // numer miesi¹ca
    int b; // numer roku
    bool c; // przestepny
    int d; //reszta dzielenia przez 4 

    cout << "Podaj numer miesiaca w roku: ";
    cin >> a;
    if (a > 12 || a < 1) { cout << "Podales nieprawidlowy numer miesiaca spoza zakresu od 1 do 12 !!!!!" << endl << endl; return 0; }

    cout << "Podaj rok: ";
    cin >> b;
    if (b < 1) { cout << "Podales nieprawidlowy rok!! Mniejszy lub rowny zero!!   " << endl << endl; return 0; }

    d = b % 4;
    if (d == 0) { c = true; }
    else { c = false; }

    switch (a)
    {
    case 1:
        cout << "Miesiac to: styczen. Ma 31 dni." << endl;
        break;
    case 2:
        cout << "Miesiac to: luty. ";
        if (c) { cout << "Mamy rok przestepny i luty ma 29 dni."; }
        else { cout << "Mamy rok nieprzestepny i luty ma 28 dni."; }
        cout << endl;
        break;
    case 3:
        cout << "Miesiac to: marzec. Ma 31 dni." << endl;
        break;
    case 4:
        cout << "Miesiac to: kwiecien. Ma 30 dni." << endl;;
        break;
    case 5:
        cout << "Miesiac to: maj. Ma 31 dni." << endl;
        break;
    case 6:
        cout << "Miesiac to: czerwiec. Ma 30 dni." << endl;;
        break;
    case 7:
        cout << "Miesiac to: lipiec. Ma 31 dni." << endl;
        break;
    case 8:
        cout << "Miesiac to: sierpien. Ma 31 dni." << endl;
        break;
    case 9:
        cout << "Miesiac to: wrzesien. Ma 30 dni." << endl;
        break;
    case 10:
        cout << "Miesiac to: pazdziernik. Ma 31 dni." << endl;
        break;
    case 11:
        cout << "Miesiac to: listopad. Ma 30 dni." << endl;
        break;
    case 12:
        cout << "Miesiac to: grudzien. Ma 31 dni." << endl;
        break;
    }
    if (a < 4 || a>9) { cout << "Miesiac jest pochmurny :(" << endl; }
    else { cout << "Miesiac jest sloneczny :) " << endl; }




    return 0;
}