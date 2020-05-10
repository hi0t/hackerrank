#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
aabbcd
)";

const string output = R"(
NO
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
