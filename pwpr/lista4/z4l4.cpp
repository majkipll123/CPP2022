
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int liczba, zgadnij,proby=0,jeszcze=0, y=5;
int main()
{
    cout<<"\x1b[7m------------------------------------------------\x1b[0m"<<endl;
    cout<<"\x1b[7m-------------\x1b[6m gra 1do100\x1b[0m\x1b[7m------------------------\x1b[0m"<<endl;
    cout<<"\x1b[7m-------------\x1b[6m jak zgadniesz to wygrywasz\x1b[0m\x1b[7m--------\x1b[0m"<<endl;
    cout<<"\x1b[7m------------------------------------------------\x1b[0m"<<endl;
    cout<<"\x1b[7m zasady:----------------------------------------\x1b[0m"<<endl;
    cout<<"\x1b[7m 1)nie oszukuj----------------------------------\x1b[0m"<<endl;
    cout<<"\x1b[7m 2)wygraj---------------------------------------\x1b[0m"<<endl;
    cout<<"\x1b[7m 3)baw sie dobrze-------------------------------\x1b[0m"<<endl;

    srand(time(NULL));

while(jeszcze!=1)
{
    zgadnij=0;
    liczba = rand()%y+1;
    proby=0;
    while(zgadnij!=liczba)

    {

        proby++;
        cout<<"zgadnij jaka liczba";
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
cout<<"czy chcesz zagrac jeszcze raz?(1 nie, kazda inna tak)";
cin>>jeszcze;
if (jeszcze!=1){
cout<<"czy chcesz zwiekszysc zakres liczb? (podaj od 0 do 100000000000000000000)";
cin>>y;}
        }
    system("pause");
return 0;}
