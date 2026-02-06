#include "Zombie.hpp"

int main( void )
{
    Zombie zombie("foo");
    Zombie *foo;
    foo = newZombie("Foo");
    foo->announce();
    randomChump("Faa");
    delete foo;
    return (0);
}