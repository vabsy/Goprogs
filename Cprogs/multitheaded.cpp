#include <condition_variable>
#include <iostream>
#include <mutex>
#include <stdlib.h>
#include <thread>

std::mutex mu;
std::condition_variable cv;
int init_value=1;


void printeven()
{
    for(;init_value < 100;)
    {
        std::unique_lock <std::mutex> locker(mu);
        cv.wait(locker,[](){ return (init_value%2 == 0);});
        std::cout << "Thread even printing number is " << init_value << std::endl;
        ++init_value;
        locker.unlock();
        cv.notify_all();
    }
}

void printodd()
{
    for(;init_value < 100;)
    {
        std::unique_lock <std::mutex> locker(mu);
        cv.wait(locker,[](){ return (init_value%2 != 0);});
	std::cout << "Thread odd printing number is " << init_value << std::endl;
	++init_value;
	locker.unlock();
	cv.notify_all();
    }

}


int main()
{
	std::thread t1([&](){printeven();});
	std::thread t2([&](){printodd();});
        t1.join();
	t2.join();
	return 0;
}
