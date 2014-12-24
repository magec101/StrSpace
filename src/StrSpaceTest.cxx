/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_StrSpaceTest_init = false;
#include "/var/www/html/codeit/workspace/StrSpace/src/StrSpaceTest.h"

static StrSpaceTest suite_StrSpaceTest;

static CxxTest::List Tests_StrSpaceTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StrSpaceTest( "/var/www/html/codeit/workspace/StrSpace/src/StrSpaceTest.h", 5, "StrSpaceTest", suite_StrSpaceTest, Tests_StrSpaceTest );

static class TestDescription_suite_StrSpaceTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StrSpaceTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_StrSpaceTest, suiteDescription_StrSpaceTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_StrSpaceTest.test_Unit_Test_1(); }
} testDescription_suite_StrSpaceTest_test_Unit_Test_1;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
