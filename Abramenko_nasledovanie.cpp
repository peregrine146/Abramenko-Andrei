#include <iostream>
#include "Lorry.h"
 
using namespace std;
 
void DisplayCarInfo(Car * cars[], int length, char * infoSeparator);
void DisplayCarInfo(Car * car, char * infoSeparator);
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
 
    const int arrayLength = 2;
    Car * cars[arrayLength]  = { new Car("Ford", 330u, 8u), new Lorry("Scania", 750u, 12u, 30000u) } ;
    DisplayCarInfo(cars, arrayLength, "\r\n");
 
    for (int i = 0; i < arrayLength; i++)
        delete cars[i];
 
    system("pause");
    return EXIT_SUCCESS;
}
 
void DisplayCarInfo(Car * cars[], int length, char * infoSeparator)
{
    for (int i = 0; i < length; i++)
    {
        DisplayCarInfo(cars[i], infoSeparator);
    }
}
 
void DisplayCarInfo(Car * car, char * infoSeparator)
{
    cout << "Торговая марка: " << car->GetTradeMark() << " " << "Мощность: " << car->GetEnginePower() << infoSeparator << endl;
}