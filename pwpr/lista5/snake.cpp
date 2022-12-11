#include <iostream>
using namespace std;
bool koniecgry;
const int width = 20;
const int height = 40;
int x, y, ox, oy, punkty;
enum ekierunek {STOP = 0, LEFT , RIGH, UP, DOWN}
ekierunek dir; 
void setup()
{
    koniecgry=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    ox=rand()%width;
    oy=rand()%height;
    punkty=0;
}
void rysuj()
{
    system("cls");//system("clear");
    for (int i=0; i<width; i++)
        cout << "[]";
    cout<<endl;

    for (int i=0; i<height; i++)
{
    for (int j=0; j<height;j++)
        {
            if (j==0)
                cout<<"[]"
            else 
                cout<<" ";
            if (j==width-1)
                cout<<"[]"
        }
}
    for (int i=0; i<width; i++)
        cout << "[]";
    cout <<endl;
}
void input()
{

}
void logika()
{

}
int main()

{
    setup();
    while(!koniecgry)
    {
        resuj();
        input();
        logika();
        //usleep(10);
    }

    return 0;
}