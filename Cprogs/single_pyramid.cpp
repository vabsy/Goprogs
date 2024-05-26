#include <iostream>



int main()
{

        int n = 5;
        for(int i = 0;i < n ;++i)
        {
            for(int j= i; j < n -1; j++)
            {
                std::cout << " " ;
            }

	    for(int k=0; k < (i*2) + 1 ; k++)
            {
	        std::cout << "*";
	    }
	    std::cout << std::endl;
        }
}
