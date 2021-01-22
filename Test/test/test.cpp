//
// Created by wm200618 on 2021/1/22.
//
#include <iostream>
#include <gtest/gtest.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int upStairs(int num) {
    if (num == 1) return 1;
    if (num == 2) return 2;

    int res = 0;
    int prePre = 1;
    int pre = 2;
    for (int i = 3; i <= num; i++) {
        res = prePre + pre;
        prePre = pre;
        pre = res;
    }
    return  res;
}

TEST(TestCase, test1) {
    ASSERT_EQ(12, add(4, 8)) << "写点中文怎么:1";
}

TEST(TestCase, test2) {
    EXPECT_EQ(5, add(2, 3));
}

TEST(TestCase, test3) {
    EXPECT_EQ(3, add(1, 2));
}

TEST(Fibonachi,test1) {
    EXPECT_EQ(5,upStairs(4));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
