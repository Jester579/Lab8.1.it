#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1.it/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test)
		{
			char s[] = "Hello,-world,-!";
			char expected[] = "Hello*world*!";
			char* result = Change(s);

			Assert::AreEqual(expected, result);
		}
	};
}
