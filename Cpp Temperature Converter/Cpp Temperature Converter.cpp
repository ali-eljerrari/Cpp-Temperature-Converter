#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius);

int main()
{
    // To be implememnted later

    double degrees;

    cout << "Insert a degree in Celsius: " << endl;

    cin >> degrees;

    cout << degrees << " Celsius equals " << celsiusToFahrenheit(degrees) << " Fahrenhiet" << endl;


    cout << endl<<"Process Ended, Press Enter to close the console" << endl;
    system("pause>0");
}


// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
