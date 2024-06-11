#include <iostream>
#define MAX 100
class stack
{
    private :
    int a[MAX];
    int top;
    public :

    stack()
    {
        top = -1;
    }

    void push(int num)
    {
        ++top;
        a[top] = num;
    }

    int pop()
    {
        int element;
        if(top == -1)
        {
            std::cout << "stack is already empty" << std::endl;
	    element = -1;
	}
	else
        {
            element = a[top];
            a[top] = '\0';
            --top;    
	}
        return element;
    }

    int peek()
    {
        if(top == -1)
        {
            std::cout << "stack is already empty" << std::endl;
            return -1;
        }
         return a[top];
    }

    void print()
    {
        for(auto it = top; it >= 0; --it)
        {
	    std::cout << a[it] << " " << std::endl;
	}
    }

    void getTop()
    {
       std::cout << "top value is " << top << std::endl;
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(32);
    s.push(9);
    s.push(10);

    s.print();
    
    std::cout << "pop element is " << s.pop() << std::endl;
    s.getTop();

    s.print();
    std::cout << "pop element is " << s.pop() << std::endl;
    s.getTop();
    std::cout << "pop element is " << s.pop() << std::endl;
    s.getTop();
    std::cout << "pop element is " << s.pop() << std::endl;
    s.getTop();
    std::cout << "pop element is " << s.pop() << std::endl;
    s.getTop();
    std::cout << "pop element is " << s.pop() << std::endl;
    s.getTop();
    std::cout << s.pop() << std::endl;
    s.getTop();

    return 0;
}
