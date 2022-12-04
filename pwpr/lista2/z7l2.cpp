#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
float x, y, b, d, a, z;
int main()
{
    ofstream zapis("wynik.dat");
//M_PI
x=0;
       for (b=0;b<=360;b++)
        {
        y=cos((b*M_PI)/180);
        zapis<<b<<" "<<y<<endl;
        z=pow(cos((b*M_PI)/180),2.0);
        zapis<<b<<" "<<z<<endl;
        x=x+0.1;
        }

    zapis.close();
    return 0;
}

