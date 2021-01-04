#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
    char tab[] = "abcdefghijklmnopqrstuvwxyz";
    int tab1[4] = {1,2,1,2};
    double tab2[6] = {1.23, 2.34, 3.45, 4.56, 5.67, 6.78};
    std::cout << "array of char representing alphabet before call to iter : " << tab << std::endl;
    iter(tab, 26, show);
    std::cout << "\narray  of int before call to iter : ";
    for (size_t i = 0; i < 4; i++)
        std::cout << tab1[i];
    std::cout << "\n";
    iter(tab1, 4, show);
    std::cout << "\narray  of double before call to iter : ";
    for (size_t i = 0; i < 6; i++)
        std::cout << tab2[i] << " ";
    std::cout << "\n";
    iter(tab2, 6, show);

}
