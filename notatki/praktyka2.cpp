#include <iostream>
#include <unistd.h>
using namespace std;
int x;
void klatka(int i)
{
    cout<<"\x1b[2J"<<endl;

    switch(i)
    {
        case 0;
        cout<<"siala";
        break;
        case 1;
        case 2;
    }
    if(i==0)
        {
        cout<<"siala";
        }
    if(i==1)
        {
        cout<<"baba";
        }
    if(i==2)
        {
        cout<<"mak";
        }
        cout<<endl;
}
void czekaj()
{
    usleep(1000000);
}
int main()
{
    //for(;;)
    //{
    klatka(0);
    czekaj();
    klatka(1);
    czekaj();
    klatka(2);
    czekaj();
    //}
    return 0;
}

