#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <cmath>
# include <ctime>

//l'attributo virtual non si usa solo per i distruttori ma viene applicato a qualsiasi metodo membro di una classe per il quale si vuole abilitare il polimorfismo dinamico.
// Il distruttore deve essere virtuale, se la classe è polimorfa, per garantire che il distruttore della classe derivata venga chiamato correttamente quando si elimina un oggetto attraverso un puntatore alla classe base. 
// Se il distruttore non è virtuale, solo il distruttore della classe base verrà chiamato, il che può portare a perdite di memoria o comportamenti imprevisti se la classe derivata ha risorse allocate dinamicamente.
// Metodi che non possono esser vitrual: costruttori e funzioni static.

class A;
class B;
class C;

class Base
{
    public:
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif