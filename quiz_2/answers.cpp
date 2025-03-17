//answer for question 1

#include <iostream>

using namespace std;

int** createMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i + j;
        }
    }
    return matrix;
}
void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

//answer for the question 2

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