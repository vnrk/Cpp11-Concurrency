#include <stdio.h>
#include <thread>

//simple thread function
void threadFunc()
{
   std::cout << "Hi from thread!\n";
}

int main()
{
   std::thread th(&threadFunc);
   std::cout << "Hi from main!\n";
   //wait for the thread function to finish
   th.join();
   return 0;
}
