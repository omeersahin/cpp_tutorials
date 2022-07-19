#include <iostream>
#include <cmath>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  cout << "Unsingned Short Int Limits are  " << numeric_limits<unsigned short int>::min() << " - " << numeric_limits<unsigned short int>::max() << endl;

  cout << "Short Int Limits are            " << numeric_limits<short int>::min() << " - " << numeric_limits<short int>::max() << endl;

  cout << "Int Limits are                  " << numeric_limits<int>::min() << " - " << numeric_limits<int>::max() << endl;

  cout << "Long Limits are                 " << numeric_limits<long>::min() << " - " << numeric_limits<long>::max() << endl;

  cout << "Float Limits are                " << numeric_limits<float>::min() << " - " << numeric_limits<float>::max() << endl;

  cout << "Double Limits are               " << numeric_limits<double>::min() << " - " << numeric_limits<double>::max() << endl;
    
  cout << "Long Double Limits are          " << numeric_limits<long double>::min() << " - " << numeric_limits<long double>::max() << endl;

  return 0;
}