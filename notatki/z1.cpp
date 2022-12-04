#include <iostream>
using namespace std;

int main()
{
    cout<<"\x1b[42m h \x1b[45m ello \x1b[0m world!";
        cout<<"\x1b[5;5H"<< "*" << endl;
    cout<<"\x1b[4;4H"<< "*" << endl;
    cout<<"\x1b[5;6H"<< "*" << endl;
    cout<<"\x1b[10;7H"<< "*" << endl;



//x1b - x oznacza tryb szesnastkowy 1b to po prostu liczba
// cwiczenie zamiana binarnego na 10 i na 8 ??? 033=x1b

    return 0;
}
