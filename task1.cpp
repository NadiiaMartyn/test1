#include <iostream>
using namespace std;

int main()
{
    int num;
    std::cin >> num;

    if (num < 1)
        return 0;

    for (int i = 0; i <= num; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    system("pause");

    return 0;
}