#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T> class Array
{
    private:
        T               *arr;
        unsigned int    num_size;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &old);
        Array &operator = (const Array &old);
        T &operator [] (unsigned int i);
        unsigned int size(void) const;
        ~Array();


    class exceptionIndexOutOfBound : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

# include "Array.tpp"
#endif