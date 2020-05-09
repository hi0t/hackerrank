#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
2
8
5 1 2 3 7 8 6 4
8
1 2 5 3 7 8 6 4
)";

const string output = R"(
Too chaotic
7
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
