#include "Serializer.hpp"

int     main()
{
    Data data;
    Data *ptr = &data;
    ptr->value = 42;
    std::cout << "Indirizzo di memoria di ptr: " << ptr << std::endl;
    std::cout << "Numero: " << ptr->value << std::endl;
    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << "\n\nSerializzazione\nValore: " << raw << std::endl;
    Data *ptrDeserialized = Serializer::deserialize(raw);
    std::cout << "\n\nDeserializzazione\nValore ptr: " << ptrDeserialized << std::endl;
    std::cout << "Numero: " << ptrDeserialized->value << std::endl;
    if (ptr == ptrDeserialized)
        std::cout << "\n\nI due puntatori puntano allo stesso indirizzo di memoria." << std::endl;
    else
        std::cout << "\n\nI due puntatori NON puntano allo stesso indirizzo di memoria." << std::endl;
}