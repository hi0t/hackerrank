#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
25
)";

const string output = R"(
15511210043330985984000000
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
