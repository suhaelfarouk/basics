#include <iostream>
using namespace std;

int main()
{
    string phrase = "Giraffe Academy";

    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    
    phrase[0] = 'B';
    cout << phrase[0] << endl;
    cout << phrase << endl;

    cout << phrase.find("Academy", 0) << endl;

    string phraseSub;
    phraseSub = phrase.substr(8,3);
    cout << phraseSub << endl;

    return 0;
}