#ifndef ITEM_H
#define ITEM_H

class Item
{
    private:
        bool itemScene[10];

    public:
        Item(); // Constructor
        void displayItem(); // display the state of all items
        void showAvaliableItem(int sceneNum); // show the avaliable item for current stage
        void setState(int sceneNum, bool set); // set the avaliability of specific item
        bool ifItemExist (int itemNum); // allow other funtion to retrieve the status of a certain function 
};

#endif