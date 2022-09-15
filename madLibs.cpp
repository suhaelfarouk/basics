#include <iostream>
using namespace std;

int main()
{
    string color, pluralNoun, name;

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter a name: ";
    getline(cin, name);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << name << endl;

    return 0;
}