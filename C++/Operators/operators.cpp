/*
Today is all about Operators
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Comparational
6. Logical
7. Ternary operator
*/
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    // expression-1
    cout << "4 + 5 * 6 - 1 = " << 4 + 5 * 6 - 1 << endl;

    // expression-2
    cout << "25 / 6: " << 25 / 6 << endl;

    // expression-3
    int n1, n2;

    cout << "Enter number 1 ";
    cin >> n1;
    cout << endl;

    cout << "Enter number 2: ";
    cin >> n2;

    cout << "n1(" << n1 << ") > " << "n2(" << n2 << ") = " << (n1 > n2) << endl;

    return 0;
}