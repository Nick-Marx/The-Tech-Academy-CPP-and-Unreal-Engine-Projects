#include <iostream>
using namespace std;

class Shape{
    public:
        string Color;

        int GetArea(int x, int y){
            return x * y;
        }
};

class Rectangle: public Shape{
    public:
        int Height, Width;
};

class Triangle: public Shape{
    public:
        int Height, Base;
};

class Circle: public Shape{
    public:
        int Radius;
};

int main(){
    return 0; 
}