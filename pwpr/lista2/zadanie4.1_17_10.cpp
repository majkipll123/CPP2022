
//od -5 do 5
#include <iostream>
using namespace std;
int wynik, skladowa1, skladowa2;
int i;
int main()
{
    skladowa2=-5;
    skladowa1=-5;
 for(skladowa1=-5; skladowa1<=5; skladowa1++)
 {
   cout<<endl;
     for(skladowa2=-5;skladowa2<=5; skladowa2++)
     {
         wynik=skladowa1*skladowa2;
         cout<<wynik<<"\t";
     }
 }

    return 0;
}
