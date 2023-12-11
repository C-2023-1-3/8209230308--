#include<iostream>
#include"mytemperature.h"
#include<iomanip>
using namespace std;
int main()
{
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
    for (double c = 40.0,f2=120.0; c >= 31.0||f2>=30.0; c--,f2-=10) {
        double f = celsius_to_fah(c);
        cout << fixed << setprecision(1)<<c << "\t" << f << "\t\t|\t";
        double c2 = fahrenheit_to_cels(f2);
        cout << fixed<<setprecision(1)<<f2<< "\t\t" <<fixed<<setprecision(2)<<c2<< endl;
    }

    return 0;
}