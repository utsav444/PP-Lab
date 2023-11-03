#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ShoppingItem {
public:
    int itemCode;
    string itemName;
    double itemPrice;

    ShoppingItem(int code, const string& name, double price)
        : itemCode(code), itemName(name), itemPrice(price) {}
};

class ShoppingList {
private:
    vector<ShoppingItem> items;

public:
    void addItem(int code, const string& name, double price) {
        items.push_back(ShoppingItem(code, name, price));
        cout << "Item added to the shopping list." << endl;
    }

    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->itemCode == code) {
                items.erase(it);
                cout << "Item deleted from the shopping list." << endl;
                return;
            }
        }
        cout << "Your item is not found in the shopping list.." << endl;
    }

    double calculateTotal() {
        double total = 0.0;
        for (const auto& item : items) {
            total += item.itemPrice;
        }
        return total;
    }

    void printShoppingList() {
        if (items.empty()) {
            cout << "Your shopping list is EMPTY." << endl;
            return;
        }

        cout << "SHOPPING LIST:" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Code\tName\tPrice" << endl;
        cout << "-----------------------------------" << endl;
        for (const auto& item : items) {
            cout << item.itemCode << "\t" << item.itemName << "\t" << item.itemPrice << endl;
        }
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    ShoppingList shoppingList;
    int choice = 0;

    while (choice != 5) {
        cout << "Welcome to US supermarket. Please select from the following :" << endl;
        cout << "Please select 1 to ADD Item" << endl;
        cout << "Please select 2 to DELETE Item" << endl;
        cout << "Please select 3 to Calculate TOTAL" << endl;
        cout << "Please select 4 to PRINT the Shopping List" << endl;
        cout << "Please select 5 to EXIT the program." << endl;
        cout << "Please enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int code;
                string name;
                double price;
                cout << "Please enter the CODE of the item : ";
                cin >> code;
                cout << "Please enter the NAME of the item : ";
                cin.ignore();
                getline(cin, name);
                cout << "Please enter the PRICE of the item : ";
                cin >> price;
                shoppingList.addItem(code, name, price);
                break;
            }
            case 2: {
                int code;
                cout << "Enter the item code to DELETE : ";
                cin >> code;
                shoppingList.deleteItem(code);
                break;
            }
            case 3: {
                double total = shoppingList.calculateTotal();
                cout << "The TOTAL value of the cart is : $" << total << endl;
                break;
            }
            case 4:
                shoppingList.printShoppingList();
                break;
            case 5:
                cout << "Thank you for visiting.. " << endl;
                break;
            default:
                cout << "Your choice is invalid. Please try again." << endl;
        }
    }

    return 0;
}
