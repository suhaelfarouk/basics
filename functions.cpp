#include <iostream>
using namespace std;

// Function declaration
void sayHi(string name, int age);

int main()
{
    // Function Call
    sayHi("Mike", 60);
    sayHi("Tom", 45);
    sayHi("Steve", 19);

    return 0;
}

// Function definition
void sayHi(string name, int age)
{
    cout << "Hello " << name << ", you are " << age << endl;
}