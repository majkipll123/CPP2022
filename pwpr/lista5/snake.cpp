#include <chrono>
#include <thread>//dwie biblioteki do dluzszego sleepa

//#include <Windows.h> //zakomentuj na linux
#include <unistd.h> //<stdio.h>
#include <conio.h> //console input output
#include <iostream>
using namespace std;
bool koniecgry;
const int width = 33;
const int height = 33;
int x, y, ox, oy, punkty;
int tailX[100], tailY[100];
int No;
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
    system("clear");//system("cls");
    cout<<"witaj w prostym snake Karola!"<<endl;
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
                cout<<"\x1b[102;90m%\x1b[0m";
            else if (i==oy && j== ox)
                cout<<"\x1B[101m$\x1b[0m";
//\x1b[106m cyan
//\x1b[102m green
//\x1B[101m red
//\x1b[0m reset
            else
            {
                bool print=false;
                for (int k=0; k<No; k++)
                {

                   if (tailX[k]==j && tailY[k] ==i)
                        {
                        cout<<"\x1b[102;90mo\x1b[0m";
                        print= true;
                        }

                }
                if (!print)
                    cout<<"\x1b[107m \x1b[0m";
            }
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
        switch(getch())
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
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0]=x;
    tailY[0]=y;
    for (int i =1; i< No; i++)
    {
        prev2X= tailX[i];
        prev2Y=tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;

    }
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
    if (x>width || x<0 ||y >height||y<0) //sprawdza czy nie uderzyles w sciane
        koniecgry=true;
    for (int i=0; i<No; i++) // sprawdza czy nie uderzyles w siebie
    if(tailX[i]==x&&tailY[i]==y)
    koniecgry=true;

    if (x==ox && y==oy)
    {

        punkty+=10;
        ox=rand()%width;
        oy=rand()%height;
        No++;
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
        chrono::milliseconds timespan(90);
        this_thread::sleep_for(timespan);
    }

    return 0;
}
