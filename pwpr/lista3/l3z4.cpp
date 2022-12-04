#include <iostream>
#include <math.h>
#include <climits>
#include <stdlib.h>
using namespace std;
int wybor;
float x,y;
int main()
{
    cout<<"------------------------------------------------"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"---------WITAJ W KALKULATORZE KAROLA------------"<<endl;
    cout<<"-----opcje :------------------------------------"<<endl;
    cout<<"-----1.dodawanie--------------------------------"<<endl;
    cout<<"-----2.odejmowanie------------------------------"<<endl;
    cout<<"-----3.mnozenie---------------------------------"<<endl;
    cout<<"-----4.dzielenie--------------------------------"<<endl;
    cout<<"-----5.potegowanie------------------------------"<<endl;
    cout<<"-----6.pierwiastkowanie-------------------------"<<endl;
    cout<<"-----7.wyjdz------------------------------------"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"-Podaj liczbe, ktora prowadzi do wybranej opcji-"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"adnotacja do opcji nr 5-------------------------"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"potega n-tego stopnia 1 liczby gdzie 2 liczba=n-"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"adnotacja do opcji nr 6-------------------------"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"pierwiastek 2 stopnia --------------------------"<<endl;
    cout<<"(brana jest pod uwage tylko 1 podawana liczba)--"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cin>>wybor;


    cout<<"Teraz podaj liczby"<<endl;
    cout<<"Podaj 1: "<<endl;
    cin>>x;
    cout<<"Podaj 2: "<<endl;
    cin>>y;

    switch(wybor)
    {
        case 1:
        {
            cout<<"Wynik dodawania to: "<<x+y;
        }
        break;
         case 2:
        {
            cout<<"Wynik odejmowania to: "<<x-y;
        }
        break;
         case 3:
        {
            cout<<"Wynik mnozenia to: "<<x*y;
        }
        break;
         case 4:
        {
            if (y=0) cout<<"Nie mozna dzielic przez zero!!!!!!!";
            else     cout<<"Wynik dzielenia to: "<<x/y;
        }
        break;
         case 5:
        {
            cout<<"Wynik potegowania to: "<<pow(x,y);
        }
        break;
         case 6:
        {
            cout<<"Wynik pierwiastkowania to: "<<sqrt(x);
        }
        break;
         default:
             {
            cout<<"nie ma takiej opcji w menu.";
             }
    }

     return 0;
    }













