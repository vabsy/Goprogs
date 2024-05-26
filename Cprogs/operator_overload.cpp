#include <iostream>
#include <string>

class Complex
{
    private:
           int real;
	   int img;
    public:
           Complex(int r = 0, int i = 0)
	   {
	       real = r;
	       img = i;
	   }

	   friend Complex operator+(Complex  complex1, Complex complex2);
	  
	  void print()
          {
	      std::cout << real << " + " << img << "i" << std::endl;
	  
	  } 
};

Complex operator+(Complex  complex1, Complex complex2)
{
       Complex res;
       res.real = complex1.real + complex2.real;
       res.img = complex1.img + complex2.img;
       return res;
}

int main()
{
Complex c1(4,5);
Complex c2(3,4);

Complex c3 = c1 + c2;
c3.print();
return 0;
}
