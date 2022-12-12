#include <iostream>
using namespace std;
int t,i,j,k, wynik;


void funkcja()
{
    cout<<"hello world"<<endl;
}
void wypisz(float x)
{
    cout<<x<<endl;
}
void abcd(int x, int y)
{
 cout<<x+y<<endl;
}
int abcy(int x, float y, float z)
{
int iloczyn=x*y*z;
    return iloczyn;
}
int tablica(int x[], int y)
{
    int iloczyn=1;
    for (int i=0; i<y; i++)
    {
        iloczyn*=x[i];
    }
    cout<<iloczyn<<endl;
    return iloczyn;
}
int main(){
    k=j;
    int x[5]={1,2,3,4,5};
    int a[j];
    wynik=1;
    funkcja();
    wypisz(5);
    abcd(5,4);
    abcy(1,2,53.4331);
    tablica(x,5);


return 0;}
