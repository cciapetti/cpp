#include "Zombie.hpp"

int main( void )
{
    Zombie *zombie;
    int     N = 5;
    zombie = zombieHorde(N, "Foo");
    for (int i = 0; i < N; i++)
    {
        std::cout << zombie[i].getName() << std::endl;
    }
    delete[] zombie;
}
