#pragma once

#include <cstddef>

using namespace std;

class MyHashFunction
{
private:
    /* data */
public:
    MyHashFunction(/* args */);
    ~MyHashFunction();

    size_t operator() (const void* val) const;
};