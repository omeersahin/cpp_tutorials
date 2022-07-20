#include <iostream>
#include <cmath>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  cout << "abs(-25) = " << abs(-25) << endl;
  cout << "max(22, 26) = " << max(22, 26) << endl;
  cout << "min(22, 26) = " << min(22, 26) << endl;
  cout << "pow(4,5) = " << pow(4,5) << endl;
  cout << "sqrt(25) = " << sqrt(25) << endl;
  cout << "cbrt(625) = " << cbrt(625) << endl; 
  cout << "exp(1) = " << exp(1) << endl; // e ^ x
  cout << "exp2(1) = " << exp2(1) << endl;   // 2 ^ x
  cout << "log(e^6) = " << log(exp(6)) << endl;
  cout << "log2(8) = " << log2(8) << endl;
  cout << "fmax(9.6, 6.6) = " << fmax(9.6, 6.6) << endl;
  cout << "fmin(9.6, 6.6) = " << fmin(9.6, 6.6) << endl;
  cout << "ceil(25.45) = " << ceil(25.45) << endl;
  cout << "floor(25.45) = " << floor(25.45) << endl;
  cout << "round(25.45) = " << round(25.45) << endl;
  cout << "hypot(6,8) = " << hypot(6,8) << endl; // sqrt(a^2 + b^2)

  return 0;
}