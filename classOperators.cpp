#include <iostream>
#include <cmath>
#include "classes.cpp"

using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  Rectangle Rect(5,6,7);
  ++Rect;
  cout << Rect << endl;
  Rectangle Rect2(2,3,4);
  cout << "Rect +  Rect2 = " << (Rect + Rect2) << endl;
  cout << "Rect == Rect2 = " << (Rect == Rect2) << endl;

  return 0;
}