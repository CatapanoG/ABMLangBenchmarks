#include "Model.h"

#include <iostream>
using namespace std;

double power(double base, int exponent) // definition
{
    double result = 1; // result multiply base 3 times
    for(int i = 0; i < exponent; i++) // you need this for the code to run 3 times
    {
        result = result * base;
    }
    return result;    
}    

void printList(list<int> _list)
{
    for (list<int>::iterator it=_list.begin(); it != _list.end(); ++it)
    {
        std::cout << *it + ' ';
    }
}

int main ()
{
    int base, exponent;
    std::cout << "what is the base?: ";
    std::cin >> base;
    std::cout << "what is the exponent?: ";
    std::cin >> exponent;
    double myPower = power(base, exponent);
    std::cout << myPower << endl;


    Model model;
    model.init();

    model.printItemsRegister();

    for (int i = 0; i < 1000; i++)
    {
        model.step();
    }

    model.printItemsRegister();
    
}