#include <iostream>
using namespace std;
int x;
int main(void)

{
    for(int j=0; j<20; j++)
    {
        for( int i=20; i>0;i--)
        {
        int r = (i/10.)*255;
        int g = (i/10.)*25;
        int b = (i/10.)*125;
        cout<<"\x1b[48;2;"<<g<<";" <<r<<";"<<b<<"m \x1b[0m";
        cout<<"\x1b[48;2;"<<r<<";" <<g<<";"<<b<<"m \x1b[0m";
        }
        for( int i=0; i<20;i++)
        {
        int r = (i/10.)*255;
        int g = (i/10.)*25;
        int b = (i/10.)*125;
        cout<<"\x1b[48;2;"<<g<<";" <<r<<";"<<b<<"m \x1b[0m";
        cout<<"\x1b[48;2;"<<r<<";" <<g<<";"<<b<<"m \x1b[0m";
        }




        //cout<<"\x1b[48;2;255;"<<g<<";"<<";126m                   \x1b[0m"<< endl;
        // cout<<"\x1b[48;2;25;123;"<<b<<"m                   \x1b[0m"<< endl;

    cout<<endl;
    }
    return 0;
}
