#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
  
    // ������ 1
     float R1, R2, R3;
     cout<<"������� ������ ������������� R1\n";
     cin >>R1;
     cout<<"������� ������ ������������� R2\n";
     cin >>R2;
     cout<<"������� ������ ������������� R3\n";
     cin >>R3;
     cout<<"������������� ������������� R0 = "<<R1*R2*R3/(R1*R2+R2*R3+R1*R3)<<"��\n\n";
 
    // ������ 2
     float l;
     cout << "������� ����� ���������� � ��: \n";
     cin >>l;
     cout<<"������� ����� ���������� "<<l*l/(4*3.14)<<"��.��.\n\n";
 
    //������ 3
    float V, t, a;
    cout << "������� �������� � ��/�:\n";
    cin >> V;
    cout << "������� ����� � �:\n";
    cin >> t;
    cout << "������� ��������� ��/�^2:\n";
    cin >> a;
    cout << "���������� ���������� ��� ��������������� �������� " << V * t + ((a * t*t) / 2) << "��.\n\n";
}