#include <iostream>
#include <stdlib.h>


int main()
{
int a[] = {2,3,3,4,12,5,4,3};
int size = sizeof(a)/sizeof(int);
//cout << size;
bool flag = true;
size_t mid = size/2;
int sumr = 0;
int suml = 0;
while(flag)
{
for(int i = 0;i<mid;i++)
{
    suml+=a[i];
}

for(int i = mid+1;i<size;i++)
{
    sumr+=a[i];
}

if(suml > sumr)
{
    mid-=1;
}
else if(suml < sumr)
{
    mid+=1;
}
else
{
    flag = false;
    std::cout << mid <<std::endl;
}
 
}
}
