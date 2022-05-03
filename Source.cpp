#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
  
    // Задача 1
     float R1, R2, R3;
     cout<<"Введите первое сопротивление R1\n";
     cin >>R1;
     cout<<"Введите первое сопротивление R2\n";
     cin >>R2;
     cout<<"Введите первое сопротивление R3\n";
     cin >>R3;
     cout<<"Эквивалентное сопротивление R0 = "<<R1*R2*R3/(R1*R2+R2*R3+R1*R3)<<"Ом\n\n";
 
    // Задача 2
     float l;
     cout << "Введите длину окружности в см: \n";
     cin >>l;
     cout<<"Площадь круга составляет "<<l*l/(4*3.14)<<"кв.см.\n\n";
 
    //Задача 3
    float V, t, a;
    cout << "Введите скорость в км/ч:\n";
    cin >> V;
    cout << "Введите время в ч:\n";
    cin >> t;
    cout << "Введите ускорение км/ч^2:\n";
    cin >> a;
    cout << "Расстояние пройденное при равноускоренном движении " << V * t + ((a * t*t) / 2) << "км.\n\n";
}