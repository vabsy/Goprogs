// Online C compiler to run C program online
#include <iostream>

void diamondPattern(int &&n) {

    for(int i = 0; i < n;i++)
    {
        for(int j = i+1; j < n ; j++)
        {
            std::cout << " " ;
        }
        for(int k = 0; k < i+1 ; k++)
        {
            std::cout << "* " ;
        }
        std::cout << std::endl;
        
    }
    
    for(int i = n; i > 0;i--)
    {
        for(int j = i; j < n ; j++)
        {
            std::cout << " " ;
        }
        for(int k = i; k > 0 ; k--)
        {
            std::cout << "* " ;
        }
        std::cout << std::endl;
        
    }
}


int main()
{	
	diamondPattern(5);
	return 0 ;
}
