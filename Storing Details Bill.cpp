#include <iostream>
#include <string>

struct Product {
    int productNumber;
    std::string productName;
    double productPrice;
};

// Function to calculate the total amount required to order a given number of products
double calculateTotalAmount(const Product& product, int quantity) {
    return product.productPrice * quantity;
}

int main() {
    using namespace std;

    // Input the product information
    int productNumber;
    string productName;
    double productPrice;

    cout << "Enter the product number: ";
    cin >> productNumber;

    cout << "Enter the product name: ";
    cin >> productName;

    cout << "Enter the product price: ";
    cin >> productPrice;

    // Input the quantity of products to order
    int quantity;
    cout << "Enter the quantity of products to order: ";
    cin >> quantity;

    // Calculate the total amount required
    Product myProduct;
    myProduct.productNumber = productNumber;
    myProduct.productName = productName;
    myProduct.productPrice = productPrice;

    double totalAmount = calculateTotalAmount(myProduct, quantity);

    // Display the result
    cout << "Total amount required to order " << quantity << " " << productName << "s: $" << totalAmount << endl;

    return 0;
}
