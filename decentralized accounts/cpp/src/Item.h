#pragma once

using namespace std;

class Item
{
private:
    /* data */
public:
    Item(/* args */);
    ~Item();

    bool operator==(const Item& i) const;
};

