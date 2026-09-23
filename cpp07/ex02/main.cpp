#include "Array.hpp"
#include <iostream>
#include <cassert>

// Construction by copy and assignment operator. In both cases, modifying either the
// original array or its copy after copying musn’t affect the other array.


// int main()
// {
//     Array<int> array1(3);
//     Array<int> array2(3);
//     std::cout << "Size array1: " << array1.size() << std::endl;
//     std::cout << "Size array2: " << array2.size() << std::endl;
//     array1[0] = 3;
//     array1[1] = 3;
//     array1[2] = 3;
//     array2[0] = -1;
//     array2[1] = -1;
//     array2[2] = -1;
//     array1 = array2;
//     std::cout << "Prima di modificare il valore di array1" << std::endl;
//     std::cout << "array1[0]: " << array1[0] << std::endl;
//     std::cout << "array2[0]: " << array2[0] << std::endl;
//     array1[0] = 100;
//     array2[0] = 200;
//     std::cout << "Dopo aver modificato il valore di array1 e array2" << std::endl;
//     std::cout << "array1[0]: " << array1[0] << std::endl;
//     std::cout << "array2[0]: " << array2[0] << std::endl;
//     Array<char> array3(4);
//     array3[0] = 'a';
//     array3[1] = 'b';
//     array3[2] = 'c';
//     array3[3] = 'd';
//     std::cout << "array3[0]: " << array3[0] << std::endl;
//     std::cout << "array3[1]: " << array3[1] << std::endl;
//     std::cout << "array3[2]: " << array3[2] << std::endl;
//     std::cout << "array3[3]: " << array3[3] << std::endl;
//     Array<std::string> array4(3);
//     array4[0] = "Hello";
//     array4[1] = "World";
//     array4[2] = "!";
//     std::cout << "array4[0]: " << array4[0] << std::endl;
//     std::cout << "array4[1]: " << array4[1] << std::endl;
//     std::cout << "array4[2]: " << array4[2] << std::endl;
// }


//Exception
int main()
{
    Array<int> array1(3);
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;
    try
    {
        std::cout << "array1[0]: " << array1[0] << std::endl;
        std::cout << "array1[1]: " << array1[1] << std::endl;
        std::cout << "array1[2]: " << array1[2] << std::endl;
        std::cout << "array1[3]: " << array1[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;;
    }
}
