#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;
int x,b;
float srednia,suma,a;
void zapisz(float b)
{
    ofstream zapis;
    srand(time(NULL));
    float suma=0;
    for (int i=0; i<b; i++)
    {
        a= rand()/float(RAND_MAX);
        suma=suma+a;

    }
    srednia =suma/b;
    zapis.open("wynik.dat",std::ios_base::app);
    zapis<<b<<" "<<srednia<<endl;
    zapis.close();


}
int main()
{
        remove("wynik.dat");
        zapisz(10);
        zapisz(15);
        zapisz(20);
        zapisz(200);
        zapisz(5000);
    //cout<<a<<" "<<i<<endl;

return 0;}



