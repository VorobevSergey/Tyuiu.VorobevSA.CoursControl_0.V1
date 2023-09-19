#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.CoursControl_0.V1/Tyuiu.VorobevSA.CoursControl_0.V1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSACoursControl0V1Test2
{
	TEST_CLASS(TyuiuVorobevSACoursControl0V1Test2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V3* service2 = new Service2();
			float x = 7.5;
			float y = 9;
			float z = 5;
			float d;

			d = service2->Proizved(x, y, z);
		}
	};
}
