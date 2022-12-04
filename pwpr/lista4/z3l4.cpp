#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int liczba, zgadnij,proby=0;
int main()
{
    cout<<"------------------------------------------------"<<endl;
    cout<<"-------------gra 1do100-------------------------"<<endl;
    cout<<"-------------jak zgadniesz to wygrywasz---------"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"zasady:-----------------------------------------"<<endl;
    cout<<"1)nie oszukuj-----------------------------------"<<endl;
    cout<<"2)wygraj----------------------------------------"<<endl;
    cout<<"3)baw sie dobrze--------------------------------"<<endl;

    srand(time(NULL));
    liczba = rand()%100+1;

    while(zgadnij!=liczba)

    {

        proby++;
        cout<<"zgadnij jaka (to twoja "<< proby<< " proba)";
    cin>>zgadnij;

        if(zgadnij==liczba)
        {
            cout<<"wygrales w "<<proby<<" probie"<<endl;

        }
        if(zgadnij>liczba)
        {
            cout<<"za duzo"<<endl;
        }
        else if (zgadnij<liczba)
        {
            cout<<"za malo"<<endl;
        }

    }

    system("pause");
return 0;}
