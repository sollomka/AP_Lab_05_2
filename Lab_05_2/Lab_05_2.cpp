#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_05_2/AP_Lab_05_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab052
{
	TEST_CLASS(Lab052)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(2,1,3);
			Assert::AreEqual(t, 4.00000);
		}
	};
}
