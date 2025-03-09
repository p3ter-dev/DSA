#include <iostream>
#include <string>

using namespace std;

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

int main() {
    Student student;
    string name;
    int ID, grade;

    cout << "Enter name: ";
    getline(cin, name);
    student.setName(name);

    cout << "Enter ID: ";
    cin >> ID;
    student.setID(ID);

    cout << "Enter grade: ";
    cin >> grade;
    student.setGrade(grade);

    cout << "Student Info.: \n";
    cout << "Name: " << student.getName() << endl;
    cout << "ID: " << student.getID() << endl;
    cout << "Grade: " << student.getGrade() << endl;

    return 0;
}