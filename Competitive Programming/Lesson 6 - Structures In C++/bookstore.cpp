#include <iostream>
#include <vector>

using namespace std;



int main()
{
    struct Book {
        string title;
        string author;
        int publicationYear;
        double price;
      };

    vector <Book> books;
    Book book;

    cout << "This program will create your own bookstore by taking in information and display the books and their total cost." << endl;
    cout << endl;
    cout << "What is the title of your first book: ";

    while (getline(cin, book.title)) {
        cout << "Who is the author of the book: ";
        getline(cin, book.author);

        cout << "When was the book published: ";
        cin >> book.publicationYear;

        cout << "What is the price of the book: ";
        cin >> book.price;

        books.push_back(book);
        cout << endl;

        cin.ignore();

        cout << "Enter the title of the next book, or press CTRL+Z to end this loop and display your books: ";
    }

    cout << endl << endl;

    for (int i = 0; i < books.size(); i++) {
        cout << "Book " << i + 1 << ": " << endl;

        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Price: " << books[i].price << endl;
        cout << "Publication: " << books[i].publicationYear << endl;

        cout << endl << endl;
    }
}
