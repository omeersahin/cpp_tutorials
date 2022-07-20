#include <iostream>
#include <cmath>
using namespace std; //std::cout -> cout  

//define directives
#define summation( f1, f2 ) ( f1 + f2 )
#define x       20
#define y      ( x + 10 )

int main(int argc,char** argv)
{
    
  cout << "2 + 4 =  " << summation(2,4) << endl;

  cout << "x =  " << x << endl;

  cout << "y =  " << y << endl;

  return 0;
}