#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_6.1\Array.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array a(4);
			a.assign(4);
			Assert::AreEqual((int)a[1], 4);
		}
	};
}
