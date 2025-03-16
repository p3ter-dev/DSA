#include <iostream>

using namespace std;
class Calculator {
public:
    virtual int compute(int a, int b) {
        return a + b;
    }
};

class AdvancedCalculator : public Calculator {
public:
    int compute(int a, int b) override {
        return a * b;
    }

    int compute(int a, int b, int c) {
        return a * b * c;
    }
};