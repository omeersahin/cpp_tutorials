#include <iostream>
using namespace std; //std::cout -> cout

int withoutPointer(int number);
void withPointer(int* pNumber);
void withoutPointerandReturn(int number);
// function will returns integer         //    number of arguments pass inside of it              array of pointers string
int main(int argc,char** argv)
{
    
  int number = 2;
  int* pNumber = &number;

  cout << "Number is " << number << " and The Number Adress is " << &number << endl;
  cout << "pNumber adress is " << pNumber << " pNumber value is " << *pNumber << endl;

  cout << "Number is before withoutPointerandReturn function : " << number << endl;
  withoutPointerandReturn(number);
  cout << "Number is after withoutPointerandReturn function : " << number << endl;
  cout << "Number is before withoutPointer function : " << number << endl;
  number = withoutPointer(number);
  cout << "Number is after withoutPointer function : " << number << endl;
  cout << "Number is before pointerUsage function : " << number << endl;
  withPointer(&number);
  cout << "Number is after pointerUsage function : " << number << endl;

  int Array1[4] = {1,2,3,4};
  int* pArray = Array1;
  cout << "1st Array Elements is " << *pArray << "and its adress is " << pArray << endl;
  pArray++;
  cout << "2nd Array Elements is " << *pArray << "and its adress is " << pArray << endl;
  return 0;
}

int withoutPointer(int number)
{
   number = 12;
   cout << "Number inside function : " << number << endl;
   return number;
}

void withPointer(int* pNumber)
{

   *pNumber = 22;
   cout << "Number inside function : " << *pNumber << endl;

}

void withoutPointerandReturn(int number)
{
   number = 10;
   cout << "Number inside function : " << number << endl;
}