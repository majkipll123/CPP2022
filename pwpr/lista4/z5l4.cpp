#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    float b[10000];
    cout<<"podaj ile liczb ciagu wszechwsiwata fibonacziego i ciekawego ciagu chcesz zobaczyc "<<endl;
    cin>>n;
    b[0]=0;
    b[1]=1;
    ofstream zapis ("fib.dat");
    {
        zapis<<"0"<<" "<<"1"<<endl;
    //cout<<b[0]<<endl<<"1"<<endl;
    for (int i=2; i<n+1;i++)
    {
        b[i]=b[i-1]+b[i-2];
        zapis<<b[i-1]<<" "<<i<<endl;

    }
    zapis.close();
    }
      cout<<"a nowy ciekawy ciag to"<<endl<<"0"<<endl<<"1"<<endl;
    cout<<b[0]<<endl<<"1"<<endl;
    for (int i=2; i<n+1;i++)
    {
        b[i]=(b[i]+b[i-2]+100)/10;
        cout<<b[i-1]<<endl;
    }

    return 0;
}
