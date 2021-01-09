#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest812
{
	TEST_CLASS(UnitTest812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[100] = "abcvabc";
			int k = Count(str, 1);
			Assert::AreEqual(k, 2);
		}
	};
}
