//
//  main.cpp
//
/* Create a Temperature class that internally stores a temperature in degrees Kelvin.  However, create functions named setTempKelvin, setTempFahrenheit, and setTempCelsius that takes an input temperature in the specified temperature scale, converts the temperature to Kelvin, and stores that temperature in the class member variable.  Also create functions that return the stored temperature in degrees Kelvin, Fahrenheit, or Celsius.  Write a main function to test your class.  Use the equations below to convert between the three temperature scales.
Kelvin = Celsius + 273.15
Celsius = (5/9) X (Fahrenheit - 32) */


#include <iostream>
using namespace std;

class Temperature {
private:
    double Kelvin;
    
public:
    
        Temperature(double k = 0) {
            Kelvin = k;
        }

    void setTempKelvin(double k) {
        Kelvin = k;
    }
    
    double getTempKelvin(){
        return Kelvin;
    }
    
    void setTempCelsius(double c) {
        Kelvin = c + 273.15;
    }
    
    double getTempCelsius() {
        return Kelvin - 273.15;
    }
    
    void setTempFahrenheit(double f) {
        Kelvin = (f - 32) * 5/9 + 273.15;
    }

    double getTempFahrenheit() {
        return (Kelvin - 273.15) * 9/5 + 32;
    }
};

int main() {
    Temperature t;

    t.setTempFahrenheit(300);
    cout << "Temperature in Kelvin: " << t.getTempKelvin() << " K\n";
    cout << "Temperature in Celsius: " << t.getTempCelsius() << " C\n";
    cout << "Temperature in Fahrenheit: " << t.getTempFahrenheit() << " F\n";

    t.setTempCelsius(0);
    cout << "Temperature in Kelvin: " << t.getTempKelvin() << " K\n";
    cout << "Temperature in Celsius: " << t.getTempCelsius() << " C\n";
    cout << "Temperature in Fahrenheit: " << t.getTempFahrenheit() << " F\n";

    t.setTempKelvin(230.32);
    cout << "Temperature in Kelvin: " << t.getTempKelvin() << " K\n";
    cout << "Temperature in Celsius: " << t.getTempCelsius() << " C\n";
    cout << "Temperature in Fahrenheit: " << t.getTempFahrenheit() << " F\n";

    return 0;
}

