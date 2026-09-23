//Il template e quindi il file .tpp non viene compilato subito perchè il template
//non è ancora una classe concreta. Viene compilato quando per esempio si specifica un tipo
//come Array<int> array; e a quel punto è compilato perchè è diventato una classe concreta.
//quindi non viene compilato come file autonomo il file .tpp ma viene compilato quando nel file main.cpp viene concretamente definito Array<int>

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

//Quando definisco un metodo della classe fuori dalla classe sono fuori dallo scope della classe,
//quindi deve essere ridichiarato il template - altrimenti mi darebbe undefined.
template <typename T> Array<T>::Array()
{
    arr = NULL;
    this->num_size = 0;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    this->arr = new T[n];
    this->num_size = n;
}

//Dentro una funzione membro di Array<T> posso accedere a tutti i memrbi privati di qualunque oggetto Array<T>, non solo di this.
template <typename T> Array<T>::Array(const Array<T> & old)
{
    this->num_size = old.num_size;
    this->arr = new T[this->num_size];
    size_t i = -1;
    while (++i < this->num_size)
        this->arr[i] = old.arr[i];
}

//Operatore di assegnazione viene chiamato quando entrambi gli oggetti esistono già.
template <typename T> Array<T> &Array<T>::operator = (const Array<T> &old)
{
    if (this == &old)
        return (*this);
    delete[](this->arr);
    this->arr = new T[old.size()];
    unsigned int i = 0;
    while (i < old.size())
    {
        this->arr[i] = old.arr[i];
        i++;
    }
    this->num_size = old.size();
    return (*this);
}

template <typename T> T &Array<T>::operator [] (unsigned int i)
{
    if (i < this->size())
        return (arr[i]);
    else
        throw exceptionIndexOutOfBound();
}


template <typename T> unsigned int Array<T>::size(void) const
{
    return (this->num_size);
}

template <typename T> Array<T>::~Array()
{
    if (arr)
        delete[](arr);
}

template <typename T> const char* Array<T>::exceptionIndexOutOfBound::what() const throw()
{
    return ("Index out of border!");
}

#endif