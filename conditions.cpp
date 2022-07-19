#include <iostream>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  if(true) cout << "Do True Condition" << endl;
  else cout << "Do False Condition" << endl;


  bool ifStatement = (100 <= 50) ? true : false;
  cout.setf(ios::boolalpha);
  cout << ifStatement  << endl;
  return 0;
}