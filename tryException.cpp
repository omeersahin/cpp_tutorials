#include <iostream>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  double num1 = 5, num2 = 0;

  try
  {

    if(num2 == 0) throw "Division by Zero Error";
    else printf("%0.1f/ %0.1f= %.1f",num1,num2,(num1/num2));
  }
  catch(const char* exp)
  {
    cout << "Error : " << exp << endl;
  }
  return 0;
}