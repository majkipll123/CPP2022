#include <iostream>
using namespace std;
int zmienna=5;




cout<<zmienna;
void zeruj2(int *adres)
{
(*adres)=0
}
int main()
{
    zeruj2(&zmienna);

    return 0;
}
