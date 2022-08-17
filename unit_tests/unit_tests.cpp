#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittests
{
	TEST_CLASS(unittests)
	{
	public:
		
		TEST_METHOD(concatString)
		{
			AddStrings myObj;
			string value = myObj.concatString("Hello", "World");
			string testval = "HelloWorld";
			Assert::AreEqual(testval, value);
		}
	};
}
