#include <cmath>
#include <iostream>

bool find_if_armstrong(int &number)
{
    int temp = number;
    int sum = 0;
    int rem = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        sum+= (rem * rem * rem);
        temp = temp/10;
    }
 
    if(sum == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int number = 154;
    if(find_if_armstrong(number))
    {
        std::cout << "it is" << std::endl;
    }
    else
    {
       std::cout << "it is not" << std::endl;
    }
}


