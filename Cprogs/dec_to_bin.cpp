#include <iostream>
#include <algorithm>
#include <string>

void convertdectobin(int &num)
{
   int k;
   std::string bin = "";
   //lets assume int occupies 32 bits or 4 bytes
   for(int i=31 ; i>=0;i--)
   {
       k = num >> i;
       if(k & 1)
       {
           //std::cout << "1";
	   bin+="1";
       }
       else
       {
           //std::cout << "0";
	   bin+="0";
       }
   }
   std::cout << bin  << std::endl;
}


int main()
{
int num = 6;
convertdectobin(num);
return 0;

}
