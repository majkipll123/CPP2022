#include <iostream>
using namespace std;
int main()
{

    for(int i=0; i<10; i++)
    {
        cout<< "\x1b["<<i<<"m"<<"Nie bede mowic brzytkich wyrazow"<<endl;
    }

    return 0;
}
