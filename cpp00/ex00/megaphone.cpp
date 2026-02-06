#include <iostream>
#include <string>

//Per disabilitare la history expansion "set -H"
//per riabilitarla set +H (./megaphone ++!xe)

int main(int ac, char **av)
{
    int i = 0;
    int j;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        while (++i < ac)
        {
            j = -1;
            while (av[i][++j] != '\0')
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] = std::toupper(av[i][j]);
                std::cout << av[i][j];
            }
        }
        std::cout << std::endl;
    }
}
