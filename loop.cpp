#include <iostream>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
int array[] = {1,2,3,4,5,6};

   bool answer=false;

   cout << "Do-While Loop" << endl;
   do{
      //Do ones
      cout << "Is this a C++ Tutorial? (y/n)" << endl;
      char getAns;
      cin >> getAns;
      bool answer = (getAns = 'y') ? true : false;

   }while(answer);//if false, continue


   cout << "While Loop" << endl;
   int number = 0;
   while(number != 10)
   {
      cout << "Loop will continue until you write 10" << endl;
      cin >> number;
   }

   cout << "For Loop" << endl;
   cout << "Count to = " << endl;
   int count = 0;
   cin >> count;
   for(int i= 0; i <= count; i++) cout << i << endl;

   cout << "For Loop to get Array Elements" << endl;
   for(auto index:array) cout << index << endl;
  return 0;
}