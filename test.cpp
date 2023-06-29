#include "gtest/gtest.h"
#include "item.h"
#include <string>

using namespace std;

// Constructor suite
TEST(itemTests, itemConstructor)
{
    Item testA;
    EXPECT_NO_THROW(testA.Item());
    EXPECT_ANY_THROW(testA.Item(1));
}

// displayItem suite
TEST (itemTests, displayItemTest)
{
    Item testB;
    testB.Item();
    ASSERT_NO_THROW(testB.displayItem());
    EXPECT_THAT(testB.displayItem(), StartsWith("Item 0: N/A"));
}

// setState suite
TEST (itemTests, setStateTest)
{
    Item testC;
    testC.Item();
    EXPECT_NO_THROW(testC.setState(5, true));
    EXPECT_TRUE(testC.ifItemExist(5));
    EXPECT_FALSE(testC.ifItemExist(6));
}

// showAvaItem suite
TEST (itemTests, showAvaItemTest)
{
    Item testD;
    testD.Item();
    testD.setState(4, true);
    EXPECT_THAT(testD.displayItem(), StartsWith("Item 4: in bag"));
}

// ifItemExist suite
TEST (itemTests, ifItemExist)
{
    Item testF;
    testF.Item();
    testF.setState(3, true);
    testF.setState(6, true);
    EXPECT_TRUE(testF.ifItemExist(3));
    EXPECT_TRUE(testF.ifItemExist(6));
    EXPECT_TRUE(testF.ifItemExist(9));
}