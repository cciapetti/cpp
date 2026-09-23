#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

//Qui è importante avere la reference perchè senno lo swap dei valori si esaurirebbe nello scope della funzione.
template <typename T> void swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <typename T> T max (T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

template <typename T> T min(T x, T y)
{
    if (x < y)
        return x;
    else
        return y;
}

#endif