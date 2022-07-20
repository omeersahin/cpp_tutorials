#include <sstream> 
#include <string>

using namespace std;

class Cube {

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

class Rectangle{
    public:
        double length,width,depth;
        string rectString;
        Rectangle(){
            length = 1,width = 1, depth=1;
        }
        Rectangle(double l, double w,double b){
            length = l,width = w, depth = b;
        }
        Rectangle& operator ++ (){
            length++;
            width++;
            depth++;
            return *this;
        }
        operator const char*(){
            ostringstream rectStream;
            rectStream << "Box : " << length << "," << width << "," << depth << endl;
            rectString = rectStream.str();
            return rectString.c_str();
        }
        Rectangle operator +(const Rectangle& rect2){
            Rectangle rectSum;
            rectSum.length = length + rect2.length;
            rectSum.width = width + rect2.width;
            rectSum.depth = depth + rect2.depth;
            return rectSum;
        }
        bool operator == (const Rectangle& rect2){
            return ((length==rect2.length) && (width==rect2.width) && (depth==rect2.depth));
        }

};