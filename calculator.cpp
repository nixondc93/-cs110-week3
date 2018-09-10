#include <iostream>
#include <math.h>
using namespace std;

int captureNum1()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
};

int captureNum2()
{
    int num;
    cout << "Enter second number: ";
    cin >> num;
    return num;
};

int showMenu()
{
    int option;

    cout << "Options:" << endl;
    cout << "\tAddition Enter 1" << endl;
    cout << "\tSubtraction Enter 2" << endl;
    cout << "\tMultiplication Enter 3" << endl;
    cout << "\tDivision Enter 4" << endl;
    cout << "\tSquare Root Enter 5" << endl;
    cout << "\tCube Root Enter 6" << endl;
    cout << "\tPower Enter 7" << endl;
    cout << "\tTo Exit Enter 0" << endl;
    cout << "\tEnter your option: ";
    cin >> option;

    return option;
}

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

int division(int num1, int num2)
{
    return num1 / num2;
}

float squareRoot(int num)
{
    return sqrt(num);
}

float cubeRoot(int num)
{
    return cbrt(num);
}

int power(int num1, int num2)
{
    return pow(num1, num2);
}

void calculator()
{
    bool end = false;
    do
    {
        int num1, num2, result;

        switch (showMenu())
        {
        case 1:
            result = addition(captureNum2(), captureNum1());
            cout << "Your result is " << result << endl;
            break;
        case 2:
            result = subtraction(captureNum2(), captureNum1());
            cout << "Your result is " << result << endl;
            break;
        case 3:
            result = multiplication(captureNum2(), captureNum1());
            cout << "Your result is " << result << endl;
            break;
        case 4:
            num1 = captureNum1();
            num2 = captureNum2();
            if (num2 == 0)
            {
                cout << "Cannot divide by 0" << endl;
            }
            else
            {
                cout << "Your result is " << division(num1, num2) << endl;
            }
            break;
        case 5:
            result = squareRoot(captureNum1());
            cout << "Your result is " << result << endl;
            break;
        case 6:
            result = cubeRoot(captureNum1());
            cout << "Your result is " << result << endl;
            break;
        case 7:
            result = power(captureNum2(), captureNum1());
            cout << "Your result is " << result << endl;
            break;
        case 0:
            end = true;
            break;
        default:
            cout << "Invalid Entry" << endl
                 << endl;
        }
    } while (!end);
}

int main()
{
    calculator();
    return 0;
}
