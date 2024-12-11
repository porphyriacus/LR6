#include <iostream>
#include <gtest/gtest.h>
#include "header.h"

TEST(solve, no_elements)
{
    const char *s = " ";
    int res = solve(s);

    EXPECT_EQ(res, 0);
}

TEST(solve, no_grups)
{
    const char *s = "11 0 1100";
    int res = solve(s);

    EXPECT_EQ(res, 0);
}

TEST(solve, one_grups)
{
    const char *s = "1111 01 11001";
    int res = solve(s);

    EXPECT_EQ(res, 1);
}

TEST(solve, two_grups)
{
    const char *s = "   11 0 11001 11101 ";
    int res = solve(s);

    EXPECT_EQ(res, 2);
}

TEST(solve, thr_grups)
{
    const char *s = "10101 0 11001 11111 11 1   0010";
    int res = solve(s);

    EXPECT_EQ(res, 3);
}

TEST(solve, one_grup_with_one_fiveEl)
{
    const char *s = "11010";
    int res = solve(s);

    EXPECT_EQ(res, 1);
}

TEST(solve, one_grups5_manyGrups_more5)
{
    const char *s = "11010101 010101010 0101010 11111 10111101 1001111 0 1100";
    int res = solve(s);

    EXPECT_EQ(res, 1);
}
TEST(solve, one_grups5_manyGrups_mo5)
{
    const char *s = "1101011101 010101010 0101010 11111 10111101 1001111 0 1100";
    int res = solve(s);

    EXPECT_EQ(res, 1);
}
TEST(solve, one_grups5_manyGrups_mor5)
{
    const char *s = "1101111110101 010101010 0101010 11111 10111101 1001111 0 1100";
    int res = solve(s);

    EXPECT_EQ(res, 1);
}

TEST(solve, one_grups5_manyGrups_less5)
{
    const char *s = "11  1 01 1 10 11 1001  00011 0 00 10 1100";
    int res = solve(s);

    EXPECT_EQ(res, 1);
}

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}