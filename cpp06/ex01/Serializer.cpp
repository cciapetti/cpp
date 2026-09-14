#include "Serializer.hpp"

Serializer::Serializer(){};

Serializer::Serializer(const Serializer &old)
{
    *this = old;
}

Serializer &Serializer::operator = (const Serializer &old)
{
    if (this != &old)
        *this = old;
    return(*this);
}

uintptr_t   Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

Serializer::~Serializer(){};
