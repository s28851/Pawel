#include<iostream>
using namespace std;

int main()
{
    // A pobranie liczb a i b
    int a;
    int b;
    int menu;
    do 
    {
        cout << "Podaj dwie liczby od 1 do 20" << endl
             << "Podaj liczbe a: ";
        cin >> a;
        cout << "Podaj liczbe b: ";
        cin >> b;
        if (a<1||a>20||b<1||b>20){cout<<"Podales liczby spoza zakresu. Sprobuj jeszcze raz !!!" <<endl;};
    } while (a<1||a>20||b<1||b>20);
    cout << endl;
    

    for(int g=1;g>0;g++)    // Uruchomienie menu
    {
    cout <<"Podales liczby a="<<a<<" b="<<b<<" Dokonaj wyboru co wydrukowac:"<<endl
    <<" 1 - wiersz gwiazdek o dlugosci a"<<endl
    <<" 2 - kolumne gwiazdek o wysokosci b"<<endl
    <<" 3 - wypelniony prostokat o bokach a na b"<<endl
    <<" 4 - obramowanie prostokatu o bokach a na b"<<endl
    <<" 5 - trojkat prostokatny o przyprostokatnych dlugosci a i kacie prostym w lewym dolnym rogu"<<endl
    <<" 6 - trojkat prostokatny o przyprostokatnych dlugosci a i kacie prostym w prawym gornym rogu"<<endl
    <<" 0 - zakończ program"<<endl;
    

        menu=0;
        cin >> menu;
        switch (menu)
        {
        
        case 1: // B wiersz  gwiazdek o długości a
            cout << "Wiersz gwiazdek o dlugosci a" <<endl;
            for (int i=1;i<=a;i++)
            {
                cout << "*";
            }
            cout << endl << endl;
            break;
        
        case 2: // C kolumna gwiazdek o dlugosci B
            cout << "Kolumna gwiazdek o dlugosci a" <<endl;
            for (int i=1;i<=b;i++)
            {
                cout << "*" <<endl;
            }
            cout << endl << endl;
            break;
        
        case 3: // D wypełniony prostokat o wymiarach a na b
            cout << "Wypelniony prostokat o wymiarach a na b" << endl;
            for (int i=1;i<=b;i++)
            {
                for(int j=1;j<=a;j++)
                {
                    cout << "*";
                }
                cout <<endl;
            }
            cout << endl << endl;
            break;
        
        case 4: // E Obramowanie prostokatu o wymiarach a na B
            cout << "Obramowanie prostokatu o wymiarach a na b" << endl;
            for (int i=1;i<=b;i++)
            {
                for(int j=1;j<=a;j++)
                {
                    if (j==1||j==a||i==1||i==b)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
                cout <<endl;
            }
            cout << endl << endl;
            break;
            
        case 5: // F Trojkat prostokatny o przyprostokatnych dlugosci a, kat prosty w lewym dolnym rogu
            cout << "Trojkat o przyprostokatnych dlugosci a, kat prosty w lewym dolnym rogu" <<endl;
            for (int i=1;i<=a;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    cout << "*";
                }
                cout <<endl;
            }
            cout << endl << endl;
            break;
            
        case 6: // F Trojkat prostokatny o przyprostokatnych dlugosci a, kat prosty w prawym gornym rogu
            cout << "Trojkat o przyprostokatnych dlugosci a, kat prosty w prawym gornym rogu" <<endl;
            for (int i=1;i<=a;i++)
            {
                for(int j=1;j<=a;j++)
                {
                    if (j<i) {cout<<" ";}
                    else {cout << "*";}
                }
                cout <<endl;
            }
            cout << endl << endl;
            break;
    
        case 0:
            cout <<"Wybrales zakonczenie programu." <<endl <<"MD :)";
            return 0;
    
        default:
            cout <<"!!! Podales liczbe spoza zakresu !!!" <<endl;
            
        }
    }
    cout <<endl<<endl <<"MD :)";
    return 0;
}
