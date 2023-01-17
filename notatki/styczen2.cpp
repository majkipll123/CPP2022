#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int W=800;
const int H=600;
int R[W][H]={0},G[W][H]={0},B[W][H]={0};
void putpixel(int x, int y)
{
    if (x>=0 && y>>0 && x<W && y<H)
    {
    R[x][y]=255;
    G[x][y]=255;
    B[x][y]=255;
}}
void putpixeladd(int x, int y, int a)
{
    if(x>=0 && y>>0 && x<W && y<H)
    {
        R[x][y]+=a;
        G[x][y]+=a;
        B[x][y]+=a;

    }

}
//biblioteka graphics engine
void linia(int x1, int y1, int x2, int y2)
{
    //interpolacja liniowa
    int px,py;
    float t=0;
    float dt=1.0/float(W);
for (t=0;t<1;t+=dt)
{
    py=t*y1+(1-t)*y2;
    px=t*x1+(1-t)*x2;
    putpixeladd(px,py,1);
}
}
void saveppm(string nazwa, int _w, int _h)
{
    ofstream file;
    file.open(nazwa.c_str());
    file << "P3"<<endl;
    file << _w << " " << _h << endl;
    file << "255" << endl;
    for(int i=0;i<_h;i++)
    {
        for(int j=0;j<_w;j++)
        {   if(R[j][i]>255) R[j][i]=255;
            if(G[j][i]>255) G[j][i]=255;
            if(B[j][i]>255) B[j][i]=255;
            file << R[j][i] << " " << G[j][i] << " " << B[j][i] << " ";
        }
        file << endl;
    }
    file.close();
}

int main()
{
//rysowanie linii
for (int i=0;i<100000;i++)
{
    int x= W*(rand()/float(RAND_MAX));
    int y= H*(rand()/float(RAND_MAX));
    int x2= W*(rand()/float(RAND_MAX));
    int y2= H*(rand()/float(RAND_MAX));
    linia(x,y,x2,y2);
}

//zapis do pliku
saveppm("plik.ppm",W,H);
return 0;
}
