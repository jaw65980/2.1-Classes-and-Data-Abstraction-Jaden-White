
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
        cout << "type decrement " << endl;
        cin >> command;
        if (command == "decrement")
        {
            decrement(usernumber);
        }
        if (command == "increment")
        {
            increment(usernumber);
        }
    }

private:
    void decrement(int usernumber)
    {
        usernumber = usernumber--;
        if (usernumber < 0)
        {
            cout << "This number is invalid" << endl;
            usernumber = 0;
            counterinput(usernumber);
        }
        else
        {
            cout << usernumber << endl;
            counterinput(usernumber);
        }
    }

    void increment(int usernumber)
    {
        usernumber = usernumber++;
        cout << usernumber << endl;
        counterinput(usernumber);
    }

    void reset(int usernumber)
    {
        usernumber = 0;
        counterinput(usernumber);
    }
};

int main()
{
    counterType yournumber;
    yournumber.counterinput(usernumber);
}

