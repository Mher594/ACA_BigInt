#include <BigInt/BigInt.h>
#include <gtest/gtest.h>

TEST(BigIntTest, TestIntegerOne_One)
{
    const auto expected = 1;
    const auto actual = BigInt(1);
    ASSERT_EQ(expected, actual);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

