//od -5 do 5
#include <iostream>
using namespace std;
int wynik, skladowa1, skladowa2;
int i;
int main()
{
skladowa1=-5;
skladowa2=-5;
    for(i=0;i<=10; i++)
    {
    wynik=skladowa1*skladowa2;
    cout<<wynik<<" ";
    skladowa1++;
    }
     for(i=0;i<=10; i++)
    {
    skladowa1=-5;
    wynik=skladowa1*skladowa2;
    cout<<wynik<<endl;
    skladowa2++;
    }


    return 0;
}
