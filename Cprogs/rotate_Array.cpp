#include <vector>
#include <iostream>



void rotateArray(std::vector<int>& vec, int &pos)
{
   auto front= 0;
   for(auto i = 0; i < pos ; ++i)
   {
        front = vec.front();
	vec.push_back(front);
	vec.erase(vec.begin());
   }
}

void printVec(const std::vector<int>& vec)
{
    for(const auto& it : vec)
    {
        std::cout << it << " " ;
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec;
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(20);
    vec.push_back(10);
    vec.push_back(45);
    vec.push_back(64);
    vec.push_back(100);
    vec.push_back(32);
    vec.push_back(45);
    vec.push_back(89);

    int pos;
    std::cout << "Number of positions to be rotated by ?" << std::endl;
    std::cin >> pos;

    printVec(vec);

    rotateArray(vec, pos);

    printVec(vec);
    return 0;
}
