#include "utest.h"
#include "util.h"
#define main mainFn
#include "main.cpp"

const string input = R"(
11
709552565
473251358
803612259
579542802
183012194
689345248
151290765
123232501
994391793
25107191
862726097
440987423
)";

const string output = R"(
5
)";

TEST(Solution)
{
    string fact;
    Util::check(main, input, fact);
    EXPECT_EQ(Util::trim(output), Util::trim(fact));
}
