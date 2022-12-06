#include <iostream>
using namespace std;

float BMI(float a, int b)
{
    float bmi;
    cout<<a<<endl;
    cout<<b<<endl;
    bmi=b/(a*a);
    return bmi;
}
void BMIprint(float BMI)
{
    float bmi;
    cout<<"twoje bmi to "<<bmi<<endl;
}
float readHeight()
{
    float abc;
    cout<<"podaj swoj wsrost w metrach "<<endl;
    cin>>abc;
    return abc;
}
int readMass()
{
    int wg;
    cout<<"podaj swoja wage w kg "<<endl;
    cin>>wg;
    return wg;
}
int main()
{

    BMIprint( BMI( readHeight(), readMass() ) );
    return 0;
}
