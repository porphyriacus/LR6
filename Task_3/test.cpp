#include <iostream>
#include <gtest/gtest.h>
#include "header.h"
// void solve(char*** s, const int row, const int col, int start)

TEST(solve, no_reverse)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "gsfgf sgjhgf \0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "gsfgf sgjhgf \0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, no_reverse_rus)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "ывалрлы\0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "ывалрлы\0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, one_word_reverse_rus)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "ырвпа\0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "апвры\0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, one_word_reverse_eng)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "sjhfk\0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "kfhjs\0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, reverse_sentense_eng)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "sjhfk shdfksh slkldfh\0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "kfhjs shdfksh hfdlkls\0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, reverse_sentense_english)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "kshdgf assfjg     gfasgf  \0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "kshdgf gjfssa     fgsafg  \0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, reverse_sentense_rus)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "ормалыр ыарлы ыв аы\0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "ормалыр ылраы вы ыа\0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, reverse_sentense_russia)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "оварлрф ыафу а        ывадыфпа    ывпа  \0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "фрлраво ыафу а        апфыдавы    ывпа  \0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, reverse_sentense_r_with_engl)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "kjashfd dfjasg ыпуадып пыв gfjasgf\0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "kjashfd dfjasg пыдаупы пыв fgsajfg\0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

TEST(solve, reverse_russia_with_engl)
{
    int row = 1, col = 1;
    char ***s = new char **[row];
    for (int i = 0; i < row; ++i)
    {
        s[i] = new char *[col];
        for (int j = 0; j < col; ++j)
        {
            s[i][j] = new char[80];
            strcpy(s[i][j], "sgdfgaskfg  рыпвдопф ыпва gsdg sg   пывоапы  \0");
        }
    }

    solve(s, 0, 0, 0);

    EXPECT_STREQ(s[0][0], "sgdfgaskfg  фподвпыр ыпва gsdg gs   ыпаовып  \0");

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            delete[] s[i][j];
            s[i][j] = nullptr;
        }
        delete[] s[i];
        s[i] = nullptr;
    }
    delete[] s;
    s = nullptr;
}

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Russian");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}