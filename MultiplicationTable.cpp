#include <iostream>
using namespace std;

void greeting();
int introduction();
void multiplication(int num2);

int main(int argc, char* argv[])
{
    // greeting the user
    greeting();

    // perform the multiplication
    int number = introduction();
    multiplication(number);

    // repeat the program until the user ends it with 'n'
    cout << "Do you wish to multiply with another number?(y/n)" << endl;
    char input;
    cin >> input;
    while (input == 'y' || input == 'Y')
    {
        int newNumber = introduction();
        multiplication(newNumber);

        cout << "Do you wish to multiply with another number? (y/n)" << endl;
        cin >> input; 
    }

    cout << "Thank you for using the Multiplication Table program!" << endl;
    
    return 0;
}

void greeting()
{
    cout << "====================" << endl;
    cout << "Multiplication Table" << endl;
    cout << "====================" << endl;

}
int introduction()
{
    int num1;
    cout << "Please enter your desired number!" << endl;
    cout << "Number: ";
    cin >> num1;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Wrong input! Please enter your desired number!" << endl;
        cin >> num1;
    }
    return num1;
}
void multiplication(int num2)
{
    int range;
    cout << "Please choose your multiplication range: ";
    cin >> range;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Wrong input! Please enter your desired multiplication range!" << endl;
        cin >> range;
    }

    for (int i = 1; i <= range; i++)
    {
        cout << num2 << " x " << i << " = " << num2 * i << endl;
    }
}