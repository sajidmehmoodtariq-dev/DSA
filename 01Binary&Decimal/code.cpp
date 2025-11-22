#include <iostream>

using namespace std;

int decToBin(int input)
{
    int power = 1, rem = 0, result = 0;
    while (input > 0)
    {
        rem = input % 2;
        input /= 2;
        result = result + (rem * power);
        power *= 10;
    }
    return result;
}

int binToDec(int input)
{
    int result = 0, rem = 0, pow = 1;
    while (input > 0)
    {
        rem = input % 10;
        input /= 10;
        result = result + (rem * pow);
        pow *= 2;
    }
    return result;
}

void choice()
{
    char n;
    int input;
    while (n!='3')
    {
        cout << "Enter 1 for decimal to binary conversion.\n";
        cout << "Enter 2 for binary to decimal conversion\n";
        cout << "Enter 3 to exit\n";
        cout << "Enter Your Choice: "; 
        cin >> n;
        if (n == '1')
        {
            cout << "Enter the number in base 10: ";
            cin >> input;
            cout << decToBin(input) << endl;
        }
        else if (n == '2')
        {
            cout << "Enter the number in base 2: ";
            cin >> input;
            cout << binToDec(input) << endl;
        }
        else if(n == '3')
            cout << "Exiting the program ....";
        else
            cout << "Wrong Input!!!";
    }
}

int main()
{
    choice();
    return 0;
}