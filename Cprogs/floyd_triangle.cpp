#include <iostream>


int main()
{
    int rows = 4;
    int n =1;
    for(int i =0; i < rows;++i)
    {
        for(int j = 0; j< i+1;j++)
        {
            std::cout << n << " ";
            ++n;
        }
	std::cout << std::endl;
    }
}

