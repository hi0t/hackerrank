#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
9 5
2 3 4 2 3 6 8 4 5
)";

const string output = R"(
2
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
