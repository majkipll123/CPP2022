#include <Windows.h>
#include <unistd.h>
#include <conio.h> //console input output
#include <iostream>
using namespace std;
bool koniecgry;
const int width = 20;
const int height = 20;
int x, y, ox, oy, punkty;
enum eDirection {STOP = 0, LEFT , RIGHT, UP, DOWN}dir;

void setup()
{
    koniecgry=false;
    //dir=STOP;
    x=width/2;
    y=height/2;
    ox=rand()%width;
    oy=rand()%height;
    punkty=0;
}
void rysuj()
{
    system("cls");//system("clear");
    cout<<"witaj w prostym snake!"<<endl;
    for (int i=0; i<width+1; i++)
        cout << "=";
    cout<<endl;

    for (int i=0; i<height; i++)
{
    for (int j=0; j<height;j++)
        {
            if (j==0)
                cout<<"|";
            if (i == y&& j==x )
                cout<<"%";
            else if (i==oy && j== ox)
                cout<<"$";
            else
                cout<<" ";
            if (j==width-1)
                cout<<"|";
        }
        cout<<endl;
}
    for (int i=0; i<width+1; i++)
        cout << "=";
    cout <<endl;
    cout<<"Twoj aktualny wynik to: "<<punkty<<endl;
}
void input()
{
    if(_kbhit()) //zwraca 1 jezeli klawisz jest wcisniety a zwraca 0 jezeli nic nie klikasz taki bool
    {
        switch(_getch())
        {
    case 'a':
        dir = LEFT;
        break;
    case 'd':
        dir = RIGHT;
        break;
    case 'w':
        dir=UP;
        break;
    case 's':
        dir=DOWN;
        break;
    case 'x':
        koniecgry=true;
        break;
        }
    }

}
void logika()
{
    switch (dir)
    {
    case UP:
        y--;
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    if (x>width || x<0 ||y >height||y<0)
        koniecgry=true;
    if (x==ox && y==oy)
    {
        punkty+=10;
        ox=rand()%width;
        oy=rand()%height;
    }
}
int main()

{
    setup();
    while(!koniecgry)
    {
        rysuj();
        input();
        logika();
        sleep(1);
    }

    return 0;
}
