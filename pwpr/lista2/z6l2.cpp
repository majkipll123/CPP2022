#include <iostream>
using namespace std;
int main(){
for (int i=0; i<=16;i++)
{
   cout<<endl;
   for (int x=40; x<=47; x++)
   {
       cout<<"\x1b["<<x<<"m \x1b[0m"<<"\x1b["<<x<<"m \x1b[0m"<<"*";
   }
}


return 0;
}
