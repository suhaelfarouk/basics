#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        int gpa;

        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonours() {
            if (gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main(){

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Arts", 3.6);

    if (student1.hasHonours())
    {
        cout << student1.name << " has honours" << endl;
    } else {
        cout << student1.name << " does not have honours" << endl;
    }
    
    return 0;
}