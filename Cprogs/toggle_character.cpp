#include <iostream>
#include <stdlib.h>
#include <string>

int main()
{
	std::string str = "RajuRastogi";
	for(int i = 0; str[i] != '\0'; ++i)
	{
            if(islower(str[i]))
	    {
                str[i] = toupper(str[i]);
	    }
	    else
	    {
	        str[i] = tolower(str[i]);
	    }
	}
        std::cout << str << std::endl;
}
