#include <stdio.h>

int main() {
    float celsius = 25,  fahrenheit = (celsius * 1.8) + 32, kelvin = celsius + 273.15;
    printf("Tabela de Temperaturas\nCelsius: %.2f °C\nFahrenheit: %.2f °F\nKelvin: %.2f K\n", celsius, fahrenheit, kelvin);
    return 0;
}