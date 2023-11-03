#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    friend Complex add(const Complex& c1, const Complex& c2);

    void display() const {
        std::cout << real << " + " << imag << "i";
    }
};

Complex add(const Complex& c1, const Complex& c2) {
    double realSum = c1.real + c2.real;
    double imagSum = c1.imag + c2.imag;
    return Complex(realSum, imagSum);
}

int main() {
    using namespace std;

    double real1, imag1, real2, imag2;

    cout << "Enter REAL and IMAGINARY part of the 1st complex no. : ";
    cin >> real1 >> imag1;

    cout << "Enter REAL and IMAGINARY part of the 2nd complex no. : ";
    cin >> real2 >> imag2;

    Complex complex1(real1, imag1);
    Complex complex2(real2, imag2);

    Complex result = add(complex1, complex2);

    cout << "  Sum of the complex numbers: ";
    result.display();
    cout << endl;

    return 0;
}

