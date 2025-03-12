#include <iostream>
#include <string>

using namespace std;

// Answer for question_1

void question_1() {
    int arr[15] = {0};
    arr[0] = 10;
    arr[14] = 150;

    cout << "question_1 Output:\n";
    cout << arr[0] << endl;
    cout << arr[14] << endl;
}

// Answer for question_2

class Student {
private:
    string name;
    int ID;
    int grade;
    
public:
    void setName(string n) {
        name = n;
    }
    
    void setID(int id) {
        ID = id;
    }
    
    void setGrade(int g) {
        grade = g;
    }
    
    string getName() {
        return name;
    }
    
    int getID() const {
        return ID;
    }
    
    int getGrade() const {
        return grade;
    }
    
    void printInfo() {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

void question_2() {
    Student student;
    string name;
    int ID, grade;
    
    cout << "\nEnter name: ";
    // cin.ignore();
    getline(cin, name);
    student.setName(name);
    
    cout << "Enter ID: ";
    cin >> ID;
    student.setID(ID);
    
    cout << "Enter grade: ";
    cin >> grade;
    student.setGrade(grade);
    
    cout << "\nStudent Info:\n";
    student.printInfo();
}

int main() {
    question_1();
    question_2();
    return 0;
}