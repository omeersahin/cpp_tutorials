#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <exception>
#include <new>
#include <stdexcept>
#include <algorithm>
#include <bitset>
#include <map>
#include <list>
#include <set>
#include <fstream>
#include <tuple>
#include <vector>
#include <functional>
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>
#include <deque>
#include <list>
#include <forward_list>

#include <thread>
#include <chrono>
#include <mutex>
#include "classes.cpp"


//Macros

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius,2))

//Templates
//Template Functions
template <typename T>
void Times2(T val){
   cout << val << " * 2 = " << val *2 << endl;
}
template <typename T2>
T2 Add(T2 val, T2 val2){
   return val+val2;
}

template <typename T3>
T3 Max(T3 val, T3 val2){
    return (val < val2) ? val2 : val;
}
//Template Classes

template <typename T, typename U>
class Person{
public:
    T height;
    U weight;
    static int numOfPeople;
    Person(T h, U w){
        height = h, weight = w;
        numOfPeople++;
    }
    void GetData(){
        cout << "Height : " <<
            height <<
            " and Weight : " <<
            weight << endl;
    }
};

// You have to initialize static class members
template<typename T, typename U> int Person<T, U>::numOfPeople;

///////////////////////////////////////////////////////////////////////////////

using namespace std;

//Global variables
int intGlobal = 0;
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

//Typedefs

typedef vector<int32_t> intVec;


//Function Declaration
int funcAddition();
void numberGuess();
void stringOperators();
void arrayUsage();
void limits();
void variableUsage();
void loopUsage();
void conditionUsage();
void cmathFunctions();
void withoutPointerandReturn(int number);
int withoutPointer(int number);
void withPointer(int* pNumber);
void pointerUsage();
void tryexceptionUsage();
void objectUsage();
void structUsage();
void classOperatorUsage();
vector<int> GenerateRandVect(int numOfNums,int min, int max);
void lambdaExpUsage();
void iostreamsUsage();
void functionStoreUsage();
void templateUsage();
void dequeUsage();
void iteratorUsage();
void mallocUsage();
void smartPointerUsage(); // vektörle alan açıp reallocate yapıyor kendisi

void forwardListUsage();

//define directives
#define multiply( f1, f2 ) ( f1 * f2 )
#define WIDTH       80
#define LENGTH      ( WIDTH + 10 )

struct Shape{
   double length,width;
   Shape(double l=1,double w= 1){
      length = l;
      width = w;
   }
   double Area(){

      return length *width;
   }
private:
      int id;
};
struct Circle : Shape{
   Circle(double width){
      this-> width = width;
   }
   double Area(){
      return 3.14*pow((width/2),2);
   }

};


// function will returns integer         //    number of arguments pass inside of it                    array of pointers string
int main                               (                 int argc,                                 char** argv)
{
    //std::cout -> namespace kullanırsak sürekli std yazmaya gerek kalmıyor
    //   Stream insertion operator                                         end line
    cout          <<                      "Hello World!"           <<       endl;
      /*
      *
      * Multiple Comment Line
      * Output will be:
      * "Hello World!"
      * 
      * 
      * 
      */ 


//variableUsage();

//cout << funcAddition() << endl; //Addition

//arrayUsage();

//conditionUsage();

//loopUsage();

//numberGuess(); // numberGuess Game

//stringOperators();

//cmathFunctions();

//pointerUsage();

//tryexceptionUsage();

//objectUsage();

//structUsage();

//classOperatorUsage();

//lambdaExpUsage();

//iostreamsUsage();

//functionStoreUsage();

//cout << AREA_CIRCLE(2) << endl;

//templateUsage();

//dequeUsage();

//iteratorUsage();

//mallocUsage();

//smartPointerUsage();

//forwardListUsage();

}
















void objectUsage()
{
   
   
   Room room1;
   // assign values to data members
   room1.length = 42.5;
   room1.breadth = 30.8;
   room1.height = 19.2;

   // calculate and display the area and volume of the room
   cout << "Area of Room =  " << room1.calculateArea() << endl;
   cout << "Volume of Room =  " << room1.calculateVolume() << endl;

};

void structUsage()
{
   Shape shape(10,10);
   cout << "Square Area: "<< shape.Area() << endl;
   Circle circle(10);
   cout << "Cirlce Area: "<< circle.Area() << endl;
}

void classOperatorUsage()
{
   Box box(10,10,10);
   ++box;
   cout << box << endl;
   Box box2(5,5,5);
   cout << "Box1 +  Box2 = " << (box + box2) << endl;
   cout << "Box1 == Box2 = " << (box == box2) << endl;
}

vector<int> GenerateRandVect(int numOfNums,int min, int max)
{
    vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while(i < numOfNums){
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}

void lambdaExpUsage()
{
   vector<int> vecVals = GenerateRandVect(10, 1, 50);


   sort(vecVals.begin(), vecVals.end(),[](int x, int y){ return x < y; });

   for(auto val: vecVals)
      cout << val << ",";

   cout << endl;

   vector<int> evenVecVals;

   
   copy_if(vecVals.begin(), vecVals.end(),back_inserter(evenVecVals),[](int x){ return (x % 2) == 0; });

   for(auto val: evenVecVals)
        cout << val << ",";
   cout << endl;

   int sum = 0;

   for_each(vecVals.begin(), vecVals.end(),
            [&] (int x) {sum += x; });
   cout << "SUM : " << sum << endl;
}

void iostreamsUsage()
{

   ofstream writeToFile;
   ifstream readFromFile;

   string txtToWrite ="";
   string txtFromFile ="";
   
   writeToFile.open("test.txt",ios_base::out | ios_base::trunc);
   if(writeToFile.is_open()){
      writeToFile << "Beginning of File\n";
      cout << "Enter data to write : ";
      getline(cin,txtToWrite);
      writeToFile<< txtToWrite;
      writeToFile.close();
   };
   

  readFromFile.open("test.txt",ios_base::in);
  if(readFromFile.is_open()){
      while(readFromFile.good()){
         getline(readFromFile,txtFromFile);
         cout << txtFromFile << endl;
      }
      readFromFile.close();
  }
}

double MultBy2(double num){ return num * 2;}

double MultBy3(double num){ return num * 3;}

double DoMath(function<double(double)> func, double num)
{
    return func(num);
}

void functionStoreUsage()
{
   auto times2 = MultBy2;
   cout << "5 * 2 = " << times2(5) << endl;

   cout << "6 * 2 = " << DoMath(times2,6) << endl;

   vector<function<double(double)>> funcs(2);
   funcs[0] = MultBy2;
   funcs[1] = MultBy3;
   cout << "2 * 10 = " << funcs[0](10) << endl;
   
}

void templateUsage()
{
   Times2(5);
   Times2(5.3);

   cout << Add(2,3) << endl;
   cout << Add(2.4,3.4) << endl;

   cout << "Max 4 or 8 = " <<
      Max(4, 8) << endl;
   cout << "Max A or B = " <<
      Max('A', 'B') << endl;
   cout << "Max Dog or Cat = " <<
      Max("Dog", "Cat") << endl;

   Person<double, int> mikeTyson (5.83, 216);
   mikeTyson.GetData();

   // You access static values using the object
   // and not the class
   cout << "Number of people : " <<
         mikeTyson.numOfPeople << endl;
}

void dequeUsage()
{
   deque<int> nums = {1,2,3,4};
   nums.push_front(0);
   nums.push_back(5);
   for(int x: nums)
      cout << x << endl;

   // You can access index values, but they are costly
   // because values aren't stored contiguously, but
   // instead use multiple arrays
   cout << nums[0] << endl;
}

void iteratorUsage()
{
   // Iterators are used to point at container
   // memory locations
   vector<int> nums2 = {1,2,3,4};

   // Define an iterator as the same type
   vector<int>::iterator itr;

   // Refer to the vectors begin and end while
   // incrementing the iterator
   for(itr = nums2.begin();
         itr < nums2.end();
         itr++){

      // Get value at the pointer
      cout << *itr << endl;
   }

   // You can also increment a set number of spaces
   // Create an iterator and point it at the beginning
   // of the vector
   vector<int>::iterator itr2 = nums2.begin();

   // Advance 2 spaces
   advance(itr2, 2);
   cout << *itr2 << endl;

   // Next works like advance, but it returns an
   // iterator
   auto itr3 = next(itr2, 1);
   cout << *itr3 << endl;

   // Previous moves a set number of indexes and
   // returns an iterator
   auto itr4 = prev(itr2, 1);
   cout << *itr4 << endl;

   // You can also insert at a defined index
   vector<int> nums3 = {1,4,5,6};
   vector<int> nums4 = {2,3};
   auto itr5 = nums3.begin();
   advance(itr5, 1);
   copy(nums4.begin(), nums4.end(),
         inserter(nums3, itr5));

   for(int &i: nums3)
      cout << i << endl;

    
}

void mallocUsage()
{
   // If you need to define how much space to set aside
   // you could call malloc() and tell it how much
   // space to set aside and it returns the address to
   // that memory address

   int amtToStore;
   cout << "How many numbers do you want to store : ";
   cin >> amtToStore;

   // Create an int pointer and set aside enough space
   int * pNums;

   // Cast the pointer and define how much space to set aside
   pNums = (int *) malloc(amtToStore * sizeof(int));

   // Check if memory was allocated
   if(pNums != NULL){
      int i = 0;

      // Store values
      while(i < amtToStore){
         cout << "Enter a Number : ";
         cin >> pNums[i];
         i++;
      }
   }

   cout << "You entered these numbers\n";
   for(int i = 0; i < amtToStore; i++){
      cout << pNums[i] << endl;
   }

   // Delete the pointer
   delete pNums;
}

void smartPointerUsage()
{
   
   // Smart Pointer Solution
   int amtToStore;
   cout << "How many numbers do you want to store : ";
   cin >> amtToStore;

   // This memory will be automatically reallocated
   unique_ptr<int[]> pNums(new int[amtToStore]);

   // unique_ptr can only have one owner
   // so this throws an error
   // unique_ptr<int[]> pNums2 = pNums;
   // I'll cover how to do this with shared_ptr
   // in a later tutorial

   if(pNums != NULL){
      int i = 0;

      // Store values
      while(i < amtToStore){
         cout << "Enter a Number : ";
         cin >> pNums[i];
         i++;
      }
   }

   cout << "You entered these numbers\n";
   for(int i = 0; i < amtToStore; i++){
      cout << pNums[i] << endl;
   }

   
}


bool isEven(const int& val)
{
    return (val % 2) == 0;
}

void forwardListUsage(){
   
   forward_list<int> fl1;
 
    // Assign values
    fl1.assign({1,2,3,4});
 
    // Push and pop front
    fl1.push_front(0);
    fl1.pop_front();
 
    // Get 1st
    cout << "Front : " << fl1.front();
 
    // Get iterator for 1st element
    forward_list<int>::iterator it4 = fl1.begin();
 
    // Insert after 1st element
    it4 = fl1.insert_after(it4, 5);
 
    // Delete just entered 5
    it4 = fl1.erase_after(fl1.begin());
 
    // Place in 1st position
    fl1.emplace_front(6);
 
    // Remove a value
    fl1.remove(6);
 
    // Remove if a condition is true
    fl1.remove_if (isEven);
 
    forward_list<int> fl2;
    fl2.assign({9,8,7,6,6});
 
    // Remove duplicates
    fl2.unique();
 
    // Sort
    fl2.sort();
 
    // Reverse
    fl2.reverse();
 
    // Merge lists
    fl1.merge(fl2);
 
    // Clear
    fl1.clear();
 
    for(int i : fl1)
        cout << i << endl;
 
    cout << endl;
 
    for(int i : fl2)
        cout << i << endl;
}



