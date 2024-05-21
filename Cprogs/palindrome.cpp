#include <iostream>
#include <stdlib.h>


bool Ispalindrome(int& number)
{
    int temp = number;
    int reverse = 0;
    int bit = 0;
    while(temp > 0)
    {
        bit = temp % 10;
        reverse = (reverse * 10) + bit;
        temp/=10;
    }

    if(reverse == number)
    {
        return true;
    }
return false;
}


int main()
{
    int number = 4321;
    if(Ispalindrome(number))
    {
       std::cout << "it is palindrome" << std::endl;
    }
    else
    {
       std::cout << "it is not palindrome" << std::endl;
    }
}
