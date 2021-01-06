#include "pch.h"
#include "CppUnitTest.h"
#include "../1/1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(Name)
	{
	public:
		
		TEST_METHOD(A)
		{
			string name = "Vladimir";
			Assert::AreEqual("My name is " + name, MyNameIs(name));
		}

		TEST_METHOD(B)
		{
			string name = "Petya";
			Assert::AreEqual("My name is " + name, MyNameIs(name));
		}
		TEST_METHOD(C)
		{
			string name = "33";
			Assert::AreEqual("My name is " + name, MyNameIs(name));
		}
	};

	TEST_CLASS(Hypotenuse)
	{
	public:

		TEST_METHOD(A)
		{
			float a = 3, b = 4;
			float answer = 5;
			Assert::AreEqual(answer, hypotenuse(a, b));
		}

		TEST_METHOD(B)
		{
			float a = 8, b = 6;
			float answer = 10;
			Assert::AreEqual(answer, hypotenuse(a, b));
		}
		TEST_METHOD(C)
		{
			float a = 10, b = 14;
			float answer;
			answer = sqrt(a * a + b * b);
			answer = round(answer * 100.0) / 100.0;
			Assert::AreEqual(answer, hypotenuse(a, b));
		}

		TEST_METHOD(D)
		{
			float a = 5, b = 5;
			float answer = 0;
			answer = sqrt(a * a + b * b);
			answer = round(answer * 100.0) / 100.0;
			Assert::AreEqual(answer, hypotenuse(a, b));
		}
	};
}
