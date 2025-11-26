#include <iostream>
using namespace std;
class Math
{
private:
    int a, b;

public:
    void setValues(int x, int y)
    {
        a = x;
        b = y;
    }
    int add()
    {
        return a + b;
    }
    int subtract()
    {
        return a - b;
    }
    int multiply()
    {
        return a * b;
    }
};
int main()
{
    Math obj;
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    obj.setValues(x, y);

    cout << "Addition: " << obj.add() << endl;
    cout << "Substration: " << obj.subtract() << endl;
    cout << "Multiplication: " << obj.multiply() << endl;
    return 0;
}
