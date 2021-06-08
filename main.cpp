#include <iostream>
#include <gtest/gtest.h>


void PickColor(int ncolor) {
    if (ncolor < 10 || ncolor > 25) {
        std::cout << "yêu cầu input ∈ [10, 25] \n";
    } else {
        if (ncolor == 10) {
            std::cout << "LightGreen\n";
        } else if (ncolor == 15) {
            std::cout << "LightRed\n";
        }else if (ncolor == 20) {
            std::cout << "Yellow\n";
        } else if (ncolor == 25) {
            std::cout << "White\n";
        } else {
            std::cout << "không có màu tương ứng với giá trị này!\n";
        }
    }
}

void RunPickColor() {
    int ncolor;
    std::cin >> ncolor;
    PickColor(ncolor);
}

TEST(TESTCASE, TestWithoutCondition) {
    testing::internal::CaptureStdout();
    PickColor(1);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("yêu cầu input ∈ [10, 25] \n", output);
}

TEST(TESTCASE, TestInvalidCondition) {
    testing::internal::CaptureStdout();
    PickColor(12);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("không có màu tương ứng với giá trị này!\n", output);
}

TEST(TESTCASE, TestWith10) {
    testing::internal::CaptureStdout();
    PickColor(10);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("LightGreen\n", output);
}

TEST(TESTCASE, TestWith15) {
    testing::internal::CaptureStdout();
    PickColor(15);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("LightRed\n", output);
}

TEST(TESTCASE, TestWith20) {
    testing::internal::CaptureStdout();
    PickColor(20);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("Yellow\n", output);
}

TEST(TESTCASE, TestWith25) {
    testing::internal::CaptureStdout();
    PickColor(25);
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ("White\n", output);
}


int main(int ac, char* av[])
{
    testing::InitGoogleTest(&ac, av);
    return RUN_ALL_TESTS();
}

