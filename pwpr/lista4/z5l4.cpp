#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    int b[10000];
    cout<<"podaj ile liczb ciagu wszechwsiwata fibonacziego chcesz zobaczyc "<<endl;
    cin>>n;
    b[0]=0;
    b[1]=1;
    ofstream zapis ("fib.dat");
    {
        zapis<<"0"<<" "<<"1"<<endl;
    cout<<b[0]<<endl<<"1"<<endl;
    for (int i=2; i<n;i++)
    {
        b[i]=b[i-1]+b[i-2];
        zapis<<b[i-1]<<" "<<i<<endl;

    }
    zapis.close();
    }

    return 0;
}
