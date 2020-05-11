#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
7
100 100 50 40 40 20 10
4
5 25 50 120
)";

const string output = R"(
6
4
2
1
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
