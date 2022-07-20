#include <iostream>
#include <cmath>
#include "classes.cpp"
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  Cube cube1;
  // assign values to data members
  cube1.length = 42.5;
  cube1.breadth = 30.8;
  cube1.height = 19.2;

  // calculate and display the area and volume of the room
  cout << "Area of Room =  " << cube1.calculateArea() << endl;
  cout << "Volume of Room =  " << cube1.calculateVolume() << endl;

  return 0;
}