#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.CoursControl_0.V1.Lib/Tyuiu.VorobevSA.CoursControl_0.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSACoursControl0V1Test1
{
	TEST_CLASS(TyuiuVorobevSACoursControl0V1Test1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* service1 = new Service1();
			int q = 9999;
			char a;
			a = service1->Control(q);
		}
	};
}
