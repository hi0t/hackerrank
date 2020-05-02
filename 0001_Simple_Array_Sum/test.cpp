#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
6
1 2 3 4 10 11
)";

const string output = R"(
31
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
