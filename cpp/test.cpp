#include "Model.h"

#include <chrono>
#include <iostream>
using namespace std; 

void printList(list<int> _list)
{
    for (list<int>::iterator it=_list.begin(); it != _list.end(); ++it)
    {
        std::cout << *it + ' ';
    }
}

int main ()
{
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    
    Model model;
    model.init();

    model.printItemsRegister();

    for (int i = 0; i < 1000; i++)
    {
        model.step();
    }

    model.printItemsRegister();

    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    //std::cout << "\nTime difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
    //std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::seconds> (end - begin).count() << "[s]" << std::endl;

}