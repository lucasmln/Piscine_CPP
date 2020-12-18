#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <iostream>

/*
int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return 0;
}
*/

int main()
{
    std::cout << "Subject test :" << std::endl << std::endl;

    ISpaceMarine *bob = new TacticalMarine();
    ISpaceMarine *jim = new AssaultTerminator();
    
    Squad *vlc = new Squad();
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    ISquad *vlc2 = new Squad(*vlc);
    delete vlc;

    std::cout << "My test :" << std::endl << std::endl;

    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;
    std::cout << vlc2->push(new TacticalMarine()) << std::endl;
    std::cout << vlc2->push(new AssaultTerminator()) << std::endl;


    for (int i = 0; i < vlc2->getCount(); ++i)
    {
        ISpaceMarine *cur = vlc2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete vlc2;
    return 0;
}
