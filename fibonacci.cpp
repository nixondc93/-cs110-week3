#include <iostream>
using namespace std;

void fibonacci(int input)
{
    int arr[] = {0, 1};
    if (input <= 0)
    {
        cout << "Enter an integer above zero" << endl;
        return;
    }
    else if (input == 1)
    {
        cout << arr[0] << endl;
        return;
    }
    else
    {
        int index = 0;

        cout << arr[0] << endl;
        cout << arr[1] << endl;

        while (index < (input - 2))
        {
            int next = arr[0] + arr[1];
            arr[0] = arr[1];
            arr[1] = next;
            index++;
            cout << arr[1] << endl;
        }
    }
}

int main()
{
    int input;

    cout << "Enter count for Fibonacci Sequence: ";
    cin >> input;
    fibonacci(input);

    return 0;
}
