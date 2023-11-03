#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks1, marks2, marks3;
    float totalMarks;
    float percentage;
    char grade;

public:
    void input() {
        cout << "Enter Student Name: ";
        cin >> name;
       
        cout << "Enter PRN : ";
        cin >> rollNumber;
       
        cout << "Enter Marks for English out of 100 : ";
        cin >> marks1;
       
        cout << "Enter Marks for Maths out of 100 : ";
        cin >> marks2;
        cout << "Enter Marks for Science out of 100 : ";
        cin >> marks3;
    }

    void calculate() {
        totalMarks = marks1 + marks2 + marks3;
       
        percentage = (totalMarks / 300) * 100;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else
            grade = 'D';
    }

    void displayDetails() {
        cout << "\n.....................Student Details...................:" << endl;
        cout << "Name : " << name << endl;
        cout << "PRN : " << rollNumber << endl;
        cout << "Marks in English : " << marks1 << endl;
        cout << "Marks in Maths : " << marks2 << endl;
        cout << "Marks in Science : " << marks3 << endl;
        cout << "Total Marks : " << totalMarks << endl;
        cout << "Percentage : " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.calculate();  
    s.displayDetails();

    return 0;
}

