#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
4 8 2
4 5 7
6 1 6
)";

const string output = R"(
4
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
