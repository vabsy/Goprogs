#include <iostream>
#include <stdlib.h>



class base
{
    public :
        base()
	{
	    std::cout << "Base class constrcutor" << std::endl;
	}

	virtual ~base()
	{
	    std::cout << "Base class destructor" << std::endl;
	}

	virtual void print()
	{
            std::cout << "print from const" << std::endl;
	}
};

class derived : public base
{
    public :
        derived()
        {
            std::cout << "derived class constrcutor" << std::endl;
        }

        ~derived()
        {
            std::cout << "derived class destructor" << std::endl;
        }

	void print()
	{
	    std::cout << "print from derived" << std::endl;
	}
};


int main()
{
base *bp = new derived();

bp ->print();
delete(bp);

}
