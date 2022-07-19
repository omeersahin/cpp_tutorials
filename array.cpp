#include <iostream>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
    
  int array1[5] = {1};
  int array2[5] = {2,3,4};
  int array3[] = {1};
  int array4[] = {2,3,4};

  cout << "Array1(0) : " << array1[0] << " and Array1(4):" << array1[4] << endl; 

  cout << "Array2(0) : " << array2[0] << " and Array2(4):" << array2[4] << endl; 

  cout << "Array3(0) : " << array3[0] << " and Array3(4):" << array3[4] << endl; 

  cout << "Array4(0) : " << array4[0] << " and Array4(4):" << array4[4] << endl; 


  array3[2] = 22;

  cout << "Array3(2) : " << array3[2] << endl;

  int arrayX[2][2][2] = {{{1,1},{2,2}},{{3,3},{4,4}}};
  cout << arrayX[0] << endl;
  cout << arrayX[0][0] << endl;
  cout << arrayX[0][0][0] << endl;
  return 0;
}