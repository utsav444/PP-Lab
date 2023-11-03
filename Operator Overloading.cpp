#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass() : value(0) {}
    MyClass(int initialValue) : value(initialValue) {}

    int getValue() {
        return value;
    }

    MyClass operator++() {
        ++value;
        return *this;
    }

    MyClass operator++(int) {
        MyClass temp(value);
        value++;
        return temp;
    }

    MyClass operator+(const MyClass& other) {
        return MyClass(value + other.value);
    }

    bool operator<(const MyClass& other) {
        return value < other.value;
    }
};

int main() {
    
    MyClass obj1(5);
    MyClass obj2(4);
    MyClass sum;
    int choice = 0;
	
	cout << "Value of Object 1 is 5";
	cout << "Value of Object 2 is 4"; 
	
    while (choice != 5) {
        cout << "1. Prefix increment operator (++) on obj1" << endl;
        cout << "2. Postfix increment operator (obj2++)" << endl;
        cout << "3. Binary addition operator (obj1 + obj2)" << endl;
        cout << "4. Binary less than operator (obj1 < obj2)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ++obj1;
                cout << "After prefix increment, obj1 = " << obj1.getValue() << endl;
                break;
            case 2:
                obj2++;
                cout << "After postfix increment, obj2 = " << obj2.getValue() << endl;
                break;
            case 3:
                sum = obj1 + obj2;
                cout << "obj1 + obj2 = " << sum.getValue() << endl;
                break;
            case 4:
                if (obj1 < obj2) {
                    cout << "obj1 is less than obj2" << endl;
                } else {
                    cout << "obj1 is not less than obj2" << endl;
                }
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

