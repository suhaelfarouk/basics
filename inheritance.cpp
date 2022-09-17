#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef {
    public:
        void makesPasta() {
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    Chef chef1;
    ItalianChef chef2;

    chef1.makeSpecialDish();
    chef2.makeSpecialDish();
    chef2.makesPasta();
    chef2.makeSalad();
    
    return 0;
}