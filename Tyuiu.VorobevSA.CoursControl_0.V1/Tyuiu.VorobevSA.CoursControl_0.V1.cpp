// Tyuiu.VorobevSA.Sprint0.Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.CoursControl_0.V1.Lib/Tyuiu.VorobevSA.CoursControl_0.V1.Lib.cpp"
#include <math.h>
#include <string>

using namespace std;
int main()
    {
        setlocale(LC_ALL, "RUSSIAN");
        cout << "Vorobev\a\t" << "Sergey\t" << "Aleksandrovich\n";
        ISprint0Task8V0* service1 = new Service1();
        cout << "Task8.V1.1\n";
        int a;
        cout <<"Введите 3-х значтное число:" << "\n";
        cin >> a;
        cout << "Ответ=" << service1->Control(a);
  
        cout << "\n" << endl;

        ISprint0Task8V3* service2 = new Service2();
        cout << "Task8.V1.2\n";
        int x, y, z;
        cout << "Введите x=";
        cin >> x;
        cout << "Введите y=";
        cin >> y;
        cout << "Введите z=";
        cin >> z;
        cout << endl;
        cout << "Ответ=" << service2->Proizved(x, y, z);
        cout << endl;
        cout << endl;
        
};