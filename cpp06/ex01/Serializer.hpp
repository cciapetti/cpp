#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <cerrno>
# include <climits>
# include <cstdlib>
# include <stdint.h>
# include "Data.hpp"


//La serializzazione è il processo di traduzione di un oggetto o di una struttura dati (che si trovano nella memoria RAM del computer) 
//in un flusso di byte (una sequenza di numeri grezzi).
class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &old);
        Serializer &operator = (const Serializer &old);
        ~Serializer();
    public:
        //uintptr_t è un tipo di dato intero senza segno definito nello standard C++.
        //La sua caratteristica fondamentale è che ha la garanzia di essere grande abbastanza da contenere un puntatore a qualsiasi oggetto, 
        //senza perdita di dati.
        //uintptr_t è l'unico tipo intero garantito dallo standard per essere sempre della dimensione esatta del puntatore del sistema su cui stai compilando 
        //(4 byte su sistemi a 32-bit, 8 byte su sistemi a 64-bit).
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif

