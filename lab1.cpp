#include <iostream>
#include "vector.hpp"

struct KV
{
    int key;
    char value[64];

};

int main()
{
    vector::Vector<int> elems;
    elems.push_back(1);
    return 0;
}