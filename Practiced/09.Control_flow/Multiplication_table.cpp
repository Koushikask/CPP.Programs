#include <iostream>
using namespace std;

int main()
{
    for (size_t num1{1}; num1 <= 10; ++num1)
    {
        for (size_t num2{1}; num2 <= 10; ++num2)
        {
            cout << num1 << " * " << num2 << "\t = " << (num1 * num2) << endl;
        }
        cout << "\n";
    }
    return 0;
}