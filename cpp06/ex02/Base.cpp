#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){};

// All'interno della funzione generate è importante che sia allocata dinamicamente la classe anche se è vuota perchè 
// se non fosse allocata dinamicamente nello'heap, ma fosse allocata nello stack, verrebbe distrutta alla fine della funzione generate().

Base * generate(void)
{
    srand(time(0));
    int random = rand() % 3;
    if (random == 0)
        return (new A());
    else if (random == 1)
        return (new B());
    else
        return(new C());
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    if (a != NULL)
        std::cout << "A" << std::endl;
    else if (b != NULL)
        std::cout << "B" << std::endl;
    else if (c != NULL)
        std::cout << "C" << std::endl;
}

//Se il cast non va a buon fine, il putatore può diventare NULL, la referenza no.
//Per questo viene introdotto il try e catch dell'eccezione.
void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {}
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {}
}