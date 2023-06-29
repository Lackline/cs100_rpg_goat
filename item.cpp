#include "item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item()
{
    // no items are held in the first place, therefore set as false
    for (int i = 0; i < 10; i++)
    {
        itemScene[i] = false;
    }
}

void Item::displayItem()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Item " << i << ": " << (itemScene[i] ? "in bag" : "N/A") << endl;
    }
}

void Item::showAvaliableItem(int sceneNum)
{
    cout << "Item " << sceneNum << ": " << (itemScene[sceneNum] ? "in bag" : "N/A") << endl;
}

void Item::setState(int sceneNum, bool set)
{
    itemScene[sceneNum] = set;
}

bool Item::ifItemExist(int itemNum)
{
    if (itemScene[itemNum] = true)
    {
        return true;
    }
    return false;
}