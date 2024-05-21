#include <cmath>
#include <iostream>

void get_second_diff(const int &number)
{
    std::cout << number << std::endl;
    std::cout << log2(number & -number) + 1 << std::endl;
}


int main()
{
int a = 1;
int b = 7;

get_second_diff(a ^ b);

}
