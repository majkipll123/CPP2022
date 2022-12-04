#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 for (float x=0; x<2*M_PI; x=x+0.01)
 {
     float y = sin(x);
     int i = 30*x/2*M_PI;
     int j = 8*(y+1)/2.0;

     cout << "\x1b[" <<j <<";"<< i<< "H"<<"*"<<endl;
 }


    return 0;
}


