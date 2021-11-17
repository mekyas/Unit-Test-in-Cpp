#include "../factorial.hpp"
#include <gtest/gtest.h>

struct FactorialTests: ::testing::Test{
    int* x;
    virtual void SetUp() override {
        x = new int(0);
    }

    int getX(){
        return *x;
    }

    void setX(int y){
        *x = y;
    }
    virtual void TearDown() override {
        delete x;
    }
};

TEST_F(FactorialTests, HandlesZeroInput){
    EXPECT_EQ(Factorial(getX()), 1);
}

TEST_F(FactorialTests, HandlesPositiveInput){
    int test_case[4] = {1, 2, 3, 10};
    int test_result[] = {1, 2, 6, 3628800};

    for (size_t i = 0; i < 4; i++)
    {
        setX(test_case[i]);
        EXPECT_EQ( Factorial(getX()), test_result[i]);
    }
}