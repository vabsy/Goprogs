#include <iostream>
#include <stdlib.h>
#include <algorithm>

int main()
{
int a[] = {10,20,5,20,7,80,96,6};
int n = sizeof(a)/sizeof(int);
std::sort(a, a + n);
// 5 6 7 10 20 20 80 96

int start = 0;
int end = n;
int mid = n/2;

bool flag = true;
int search = 50;
while(flag)
{
    mid = (start + end)/2;
    if(search == a[mid])
    {
        std::cout << "found" << std::endl;
        break;
    }
    else if(search > a[mid])
    {
        start = mid + 1;
    }
    else if(search < a[mid])
    {
        end = mid - 1;
    }

    std::cout << "***********************************" << std::endl;
    std::cout << start <<std::endl;
    std::cout << mid <<std::endl;
    std::cout << end <<std::endl;
    std::cout << "***********************************" << std::endl;


    /*if(mid == start || mid == end)
    {
        std::cout << "not found" <<std::endl;
	break;
    }*/
}



for(auto &it : a)
{
   // std::cout << it << std::endl;
 
}
}
