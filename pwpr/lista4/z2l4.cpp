#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;
int x,b;
int main()
{

    cout<<"z ilu losowych liczb od 0 do 1 chcesz policzyc srednia? "<<endl;

   // cin>>x;

    float suma,a;
    cin>>x;
    srand(time(NULL));
    suma=0;
    ofstream zapis("wynik.dat");
    {
    for (int i=0;i<x;i++)
    {
    cout<<" To twoja "<<i+1<<" liczba losowa ";
    a=rand()/float(RAND_MAX);
    cout<<a<<endl;
    suma=suma+a;
    b++;
    zapis<<a<<" "<<i<<endl;
    }
    cout<<"A srednia z nich wynosi: "<<suma/b<<endl;
    }



return 0;}



