#include "pch.h"
#include "CppUnitTest.h"
#include "..\glab8.1rec\filename.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestChange)
        {
            const char* inputStr = "no one knows";
            char dest[100];
            dest[0] = '\0';
            char* t = dest;
            char* result = Change(inputStr, dest, t, 0);
            Assert::AreEqual("** one k**ws", result);
        }
    };
}
