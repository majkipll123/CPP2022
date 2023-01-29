//wstep do programowania objektowego i struktury grupowanie danych i struktur
#include <iostream>
//sranieeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
//#define funkcja(a,b) (a>b ? a:b)
//int main(void)

//{
//std::cout<<funkcja('14.2',1242)<<std::endl;
//return 0;
//}
//clasa struct zamienic na class
class wektor
{
// i dodac tutaj public:
public:
    int x;
    int y;

    void wypisz()
    {
    std::cout<<"( giga sraka "<<x<<", "<<y<<" elo elooooo)"<<std::endl;
    }
};

wektor dodaj(wektor a, wektor b)
{
wektor temp;
temp.x=a.x+b.x;
temp.y=a.y+b.y;
return temp;
}
void zeruj(wektor &d)
{
d.x=0;
d.y=0;
}

int main()
{
wektor a,b;
a.x=0;
a.y=-5;
b.x=b.y=3;
a.wypisz();
b.wypisz();
wektor c = dodaj(a,b);
zeruj(c);
c.wypisz();
//std::cout<<a.x<<" "<<a.y<<std::endl;
//std::cout<<b.x<<" "<<b.y<<std::endl;
return 0;}
