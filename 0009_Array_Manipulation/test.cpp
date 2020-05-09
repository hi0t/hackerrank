#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
5 3
1 2 100
2 5 100
3 4 100
)";

const string output = R"(
200
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
