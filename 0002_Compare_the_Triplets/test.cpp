#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
5 6 7
3 6 10
)";

const string output = R"(
1 1
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
