#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename Addr, typename Func> void iter (Addr &address, const int size, Func function)
{
    int  i = -1;
    while (++i < size)
        function(address[i]);
}

#endif