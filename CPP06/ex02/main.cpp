#include "identifier.hpp"

int main()
{
    std::cout << "From pointer :" << std::endl << "\t";
    identify_from_pointer(new A);
    std::cout << "\t";
    identify_from_pointer(new B);
    std::cout << "\t";
    identify_from_pointer(new B);
    std::cout << "\t";
    identify_from_pointer(new C);

    std::cout << "\nFrom reference :" << std::endl;
    A a;
    B b;
    C c;

    std::cout << "\t";
    identify_from_reference(a);
    std::cout << "\t";
    identify_from_reference(a);
    std::cout << "\t";
    identify_from_reference(b);
    std::cout << "\t";
    identify_from_reference(c);

}