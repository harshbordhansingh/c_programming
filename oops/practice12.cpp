#include <iostream>

using namespace std;

class AddDistance
{
public:
    int inches1, feet1, inches2, feet2;
    int take()
    {
        cout << "Enter the feet's: " << endl;
        cin >> feet1;
        cout << "Enter the inches: " << endl;
        cin >> inches1;

        cout << "Enter the feet's to add: " << endl;
        cin >> feet2;
        cout << "Enter the inches to add: " << endl;
        cin >> inches2;

        return 0;
    }
    int calculate()
    {
        int inch, feet;
        inch = inches1 + inches2;
        feet = feet1 + feet2;
        while (inch >= 12)
        {
            feet += 1;
            inch = inch - 12;
        }
        cout << "The height of the man is: "<< feet << " feets and " << inch << " inches." << endl;
        return 0;
    }
};

int main()
{
    AddDistance t;
    t.take();
    t.calculate();
    return 0;
}