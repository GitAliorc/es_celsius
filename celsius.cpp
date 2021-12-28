#include<iostream>

using namespace std;
// Celsius --> Kelvin and Farehenait
int main(){

    double tC,tK,tF;
    cout << "Inserire la temperatura in Celsius" << endl << ">>> ";
    cin >> tC;

    tK = tC + 273.15;
    tF = (9/5) * tC + 32;

    if(tK < -273.15 )
        cout << "Hai inserito una temperatura irrealistica!";
    else
        cout << "Lista conversioni: " << endl
        << "Celsius: " << tC << endl
        << "Fahrenheit: " << tF << endl
        << "Kelvin: " << tK;

    return 0;
}