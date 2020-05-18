#include "MyHashFunction.h"

#include <cstddef>

using namespace std;

size_t MyHashFunction::operator()(const void* val) const
{
    return (size_t)val;
}


MyHashFunction::MyHashFunction(/* args */)
{
}

MyHashFunction::~MyHashFunction()
{
}
