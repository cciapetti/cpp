#include "iter.hpp"

template <typename C> C plusOne(C &num)
{
    num++;
    return (num);
}

void toUppper(char &c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

int main()
{
    int array[4] = {1, 3, 5, 7};
    float array2[4] = {1.1, 3.3, 5.5, 7.7};
    ::iter(array, 4, plusOne<int>);
    std::cout << "array[0]: " << array[0] << std::endl;
    std::cout << "array[1]: " << array[1] << std::endl;
    std::cout << "array[2]: " << array[2] << std::endl;
    std::cout << "array[3]: " << array[3] << std::endl;
    ::iter(array2, 4, plusOne<float>);
    std::cout << "array2[0]: " << array2[0] << std::endl;
    std::cout << "array2[1]: " << array2[1] << std::endl;
    std::cout << "array2[2]: " << array2[2] << std::endl;
    std::cout << "array2[3]: " << array2[3] << std::endl;
    std::string str = "che bello PROGrammare a lavoro";
    ::iter(str, str.length(), toUppper);
    std::cout << str << std::endl;
}