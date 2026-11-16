
#include <iostream>
using namespace std;

int main()
{
    // Variables and data types
    string name;
    int age;
    float num1, num2;
    const float PI = 3.14;

    // Taking input from user
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Arithmetic operators
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float division = num1 / num2;

    // Relational and logical operators
    bool isAdult = age >= 18;
    bool isPositive = (num1 > 0 && num2 > 0);

    // Displaying output
    cout << "\n----- RESULTS -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;

    if (num2 != 0)
        cout << "Division: " << division << endl;
    else
        cout << "Division: Not possible (zero)" << endl;

    cout << "Value of PI: " << PI << endl;
    cout << "Is adult? " << isAdult << endl;
    cout << "Are both numbers positive? " << isPositive << endl;

    return 0;
}
