// Tyuiu.VorobevSA.CoursControl_0.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
#include <string>
using namespace std;

// TODO: This is an example of a library function
class Service1 : public ISprint0Task8V0
{

    virtual int Control(int a) override
    {
        return (a / 100) * (a / 10 % 10) * (a % 10);

    };
};

class Service2 : public ISprint0Task8V3
{

    virtual int Proizved(float a, float b, float c) override
    {
        return 5 + (2 * a - b) / (3 + c * c);

    };
};