#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    int N = 10;
    const Animal* animals[N];
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    //Print del loro sound
    for (int i = 0; i < N; i++)
        animals[i]->makeSound();

    //Print del loro tipo
    for (int i = 0; i < N; i++)
        std::cout << animals[i]->getType() << std::endl;

    //delete animals
    for (int i = 0; i < N; i++)
        delete animals[i];
    return 0;
}

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;
//     return 0;
// }

// int main()
// {
//     Dog fuffi;
//     fuffi.set_ideas("ciao");
//     std::cout << "Fuffi idea: " << fuffi.get_ideas() << std::endl;
//     Dog argo;
//     argo = fuffi;
//     std::cout << "Fuffi idea: " << fuffi.get_ideas() << std::endl;
//     fuffi.set_ideas("Casa");
//     std::cout << "Argo idea: " << argo.get_ideas() << std::endl;
//     std::cout << "Fuffi idea: " << fuffi.get_ideas() << std::endl;
//     std::cout << "Argo idea: " << argo.get_ideas() << std::endl;
// }
