#include <cmath>
#include <iostream>

void bin_to_dec(int &binary)
{

int temp = binary;
int bit;
int decimal=0;
int power = 0;
while(temp > 0)
{
   bit = temp % 10;
   temp = temp/10;
   decimal+= bit * pow(2,power);
   power++;
}
  std::cout << decimal << std::endl;
}



int main()
{
int input = 10001;

bin_to_dec(input);

}
