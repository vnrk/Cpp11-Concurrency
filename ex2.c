#include <iostream>
#include <thread>

int main()
{
   //using lambda
   std::thread th([]()
   {
      std::cout << "Hi from thread!\n";
   });
   std::cout << "Hi from main!\n";
   //wait for the thread function to finish
   th.join();
   return 0;
}
