#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    const int H=700;
    const int W=300;
    for (int j=0; j<=H;j++)
        {
        for( int i=0; i<W;i++)
            {
            int r = (i/float(W))*255;
            int g = (j/float(H))*155;
            int b = (i/float(W))*55;
            cout<<"\x1b[48;2;"<<g<<";" <<r<<";"<<b<<"m \x1b[0m";
            }
        cout<<endl;
        }

    return 0;
}
