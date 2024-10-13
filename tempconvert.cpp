#include <iostream>
using namespace std;

// Converts Celsius to Fahrenheit
float celsiusToFahrenheit(float c) {
  return (9 * c) / 5 + 32;
}

int main() {
  float c;
  cout << "Enter temperature in Celsius\n"; // inputting the temperature
  cin >> c;
  float f = celsiusToFahrenheit(c); // converting Celsius to Fahrenheit
  cout << "Temperature in Fahrenheit: " << f; // printing the calculated temperature
  return 0;
}