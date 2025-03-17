#include <iostream>
#include <string>

using namespace std;

class Shape{
public:
    virtual double getArea() {};
};

class Circle : public Shape{
private:
    double radius;
public:
    double getArea(){
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape{
private:
    double width;
    double height;
public:
    double getArea(){
        return width * height;
    }
};