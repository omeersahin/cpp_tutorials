#include <iostream>
using namespace std; 

//define variables

#define PI 3.14159


//Global variables
int intGlobal = 0;

//Constant variables
//const double PI = 3.14;
const double e  = 2.72;

//Variable Types
bool isStudent = true;
char studentClass = 'B';
float studentGrade = 87.256;
string str1 = "ThisisString";

auto autoBool = true; //creates bool type variable
auto autoInt  = 8;//creates integer type variable
auto autoString = "Hello"; //creates string type variable

int main(int argc,char** argv)
{
    
      // Decimals
  float floatSum = 1.11111111 +
                    1.11111111;
    printf("floatSum = %.7f\n", floatSum);
  double doubleSum = 1.1111111111111111 +
                    1.1111111111111111;
    printf("doubleSum = %.16f\n", doubleSum);

  //Size of Variables

  cout << sizeof(isStudent) << endl;

  cout << sizeof(PI) << endl;

  cout << sizeof(studentGrade) << endl;

  //Printf

  printf(" Printf Data Types\n %c\n %d\n %5d\n %.3f\n %s\n --------------\n",
        'A',10,5,3.14,"Hello");

  return 0;
}