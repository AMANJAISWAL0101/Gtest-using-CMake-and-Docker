#include <gtest/gtest.h>
using namespace std;
#include"main.cpp"
extern int controllermain();
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(6,6), 12);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    controllermain();
    return RUN_ALL_TESTS();
}
