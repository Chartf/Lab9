#include <iostream>
using namespace std;
int main()
{
    int olds;
    int high;
    int bounty;

    cout << "Enter your age: ";
    cin >> olds;
    if (olds <= 25)
    {
        cout << "Enter your height: ";
        cin >> high;
        if (high < 100)
        {
            cout << "Your character = Chopper";
        }
        else if (high < 180 && high >= 100)
        {
            cout << "Your character = Usopp";
        }
        else
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 1100000000)
            {
                cout << "Your character = Zoro";
            }
            else
            {
                cout << "Your character = Sanji";
            }
        }
    }

    else if (olds <= 60 && olds > 25)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty > 500000000)
        {
            cout << "Your character = Jinbe";
        }
        else
        {
            cout << "Your character = Franky";
        }
    }

    else if (olds > 60)
    {
        cout << "Your character = Brook";
    }
}