#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
6
-1
0
0
1
1
2
6
1
2
2
1
1
1
)";

const string output = R"(
0
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
