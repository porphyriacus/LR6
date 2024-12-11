#include <iostream>
#include <gtest/gtest.h>
#include "header.h"

TEST(solve, no_elements)
{
    const char *s = "  ";
    double cost = 1.0;
    double res = solve(s, cost);

    EXPECT_EQ(res, 0.0);
}

TEST(solve, one_elements_free)
{
    const char *s = " jdgfwe   ";
    double cost = 0.0;
    double res = solve(s, cost);

    EXPECT_EQ(res, 0.0);
}

TEST(solve, one_elements)
{
    const char *s = "refjkrwkjb  ";
    double cost = 1.0;
    double res = solve(s, cost);

    EXPECT_EQ(res, 1.0);
}

TEST(solve, five_elements)
{
    const char *s = " webjf wkjef jweflwh wekfh ejfhlw";
    double cost = 1.0;
    double res = solve(s, cost);

    EXPECT_EQ(res, 5.0);
}

TEST(solve, ttr_elements_double_cost)
{
    const char *s = " gyfeuurf ygehfg ehgrkgf";
    double cost = 0.02;
    double res = solve(s, cost);

    EXPECT_EQ(res, 0.06);
}

TEST(solve, russian_elements_four)
{
    const char *s = " крыппырвыпр цааг гшпу римроыуа";
    double cost = 1.0;
    double res = solve(s, cost);

    EXPECT_EQ(res, 4.0);
}

TEST(solve, relem_nine)
{
    const char *s = " ыва ыа ыа ыа ыа ыа ыа ыа ыа";
    double cost = 1.0;
    double res = solve(s, cost);

    EXPECT_EQ(res, 9.0);
}

TEST(solve, free_teleg_r)
{
    const char *s = " уллоа ушарщ ";
    double cost = 0.0;
    double res = solve(s, cost);

    EXPECT_EQ(res, 0.0);
}

TEST(solve, r_elements_double_cost)
{
    const char *s = " пв мм рмо ропр  пп п";
    double cost = 0.02;
    double res = solve(s, cost);

    EXPECT_EQ(res, 0.12);
}

TEST(solve, rek_double)
{
    const char *s = " gvjhseg ehjg словр";
    double cost = 0.01;
    double res = solve(s, cost);

    EXPECT_EQ(res, 0.03);
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}