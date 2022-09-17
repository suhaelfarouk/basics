#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book() {
            title = "noTitle";
            author = "noAuthor";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkein", 700);
    
    cout << book1.title << endl;
    cout << book2.title << endl;

    Book book3;
    cout << book3.title << endl;

    return 0;
}
