#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№9.2.2/AP_Lab№9.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:
        TEST_METHOD(TestIsEven)
        {
            Assert::IsTrue(IS_EVEN(2));
            Assert::IsFalse(IS_EVEN(3));
            Assert::IsTrue(IS_EVEN(0));
            Assert::IsFalse(IS_EVEN(-3));
            Assert::IsTrue(IS_EVEN(-4));
        }

        TEST_METHOD(TestIsPositive)
        {
            Assert::IsTrue(IS_POSITIVE(2));
            Assert::IsTrue(IS_POSITIVE(3));
            Assert::IsFalse(IS_POSITIVE(0));
            Assert::IsFalse(IS_POSITIVE(-3));
            Assert::IsFalse(IS_POSITIVE(-4));
        }
    };
}