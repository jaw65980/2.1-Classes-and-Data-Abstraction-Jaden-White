
#include <iostream>
#include <iomanip>
using namespace std;
int usernumber = 10;

class counterType
{
public:
    void counterinput(int usernumber)
    {
        string command;
        cout << "Enter a command below: " << endl << "Type decrement to decrease the number by one (number must be a positive integer)." << endl << "Type increment to increase the number by one." << endl;
        cout << "Type reset to reset the number back to zero." << endl << "Type set to set a new number." << endl;
        cin >> command;
        if (command == "decrement")
        {
            decrement(usernumber);
        }
        if (command == "increment")
        {
            increment(usernumber);
        }
        if (command == "reset")
        {
            reset(usernumber);
        }
        if (command == "set")
        {
            cout << endl;
            set(usernumber);
        }
        cout << endl;
        counterinput(usernumber);
    }

private:
    void decrement(int usernumber)
    {
        usernumber = usernumber--;
        if (usernumber < 0)
        {
            cout << endl << endl << "This number is invalid" << endl;
            usernumber = 0;
            counterinput(usernumber);
        }
        else
        {
            cout << endl << "Your new number is " << usernumber << endl;
            counterinput(usernumber);
        }
    }

    void increment(int usernumber)
    {
        usernumber = usernumber++;
        cout << endl << "Your new number is " << usernumber << endl;
        counterinput(usernumber);
    }

    void reset(int usernumber)
    {
        usernumber = 0;
        cout << endl << "Your new number is " << usernumber << endl;
        counterinput(usernumber);
    }

    void set(int usernumber)
    {
        cin >> usernumber;
        cout << endl << "Your new number is " << usernumber << endl;
        counterinput(usernumber);
    }
};

int main()
{
    counterType yournumber;
    yournumber.counterinput(usernumber);
}

