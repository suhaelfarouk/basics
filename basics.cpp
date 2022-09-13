//basic program

#include <iostream>
using namespace std;

int main()
{
    string characterName = "John";
    int characterAge;
    characterAge = 35;

    cout << "There was once a man named" << characterName << endl;
    cout << "He was" << characterAge << " years old" << endl;

    characterName = "Mike";

    cout << "He liked the name " << characterName << endl;
    cout << "but didn't like being " << characterAge << endl;
    
    return 0;
}