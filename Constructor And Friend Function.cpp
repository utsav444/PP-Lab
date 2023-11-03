#include <iostream>

using namespace std;

class Complex {
private:
    int Real;
    int Imaginary;

public:
    Complex() {
        Real = 0;
        Imaginary = 0;
    }

    Complex(int r, int i) {
        Real = r;
        Imaginary = i;
    }

    void display() {
        cout << Real << " + "<< Imaginary << "i" << endl;
    }

    //Declared the friend fn
    friend Complex add(Complex& a, Complex& b);
};


Complex add(Complex& a, Complex& b) {
    Complex result;
    result.Real = a.Real + b.Real;
    result.Imaginary = a.Imaginary + b.Imaginary;
    return result;
}

int main() {
    int R1, R2, I1, I2;
    cout << "Real and Imaginary of the FIRST NUMBER: " << endl;
    cin >> R1 >> I1;

    cout << "Real and Imaginary of the SECOND NUMBER: " << endl;
    cin >> R2 >> I2;

    Complex complex1(R1, I1);
    Complex complex2(R2, I2);

    Complex result = add(complex1, complex2);

    cout << "Sum of the complex numbers is: ";
    result.display();

    return 0;
}

