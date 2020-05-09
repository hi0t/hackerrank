#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
2
abba
abcd
)";

const string output = R"(
4
0
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
