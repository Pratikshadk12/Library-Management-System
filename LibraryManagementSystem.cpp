#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Structure to store book details
struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

// Function to display the menu
void displayMenu() {
    cout << "\n====== Library Management System ======\n";
    cout << "1. Add Book\n";
    cout << "2. Display All Books\n";
    cout << "3. Search Book by ID\n";
    cout << "4. Issue Book\n";
    cout << "5. Return Book\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

// Function to add a book
void addBook(vector<Book> &library) {  //library is a reference to a std::vector container that holds elements of type Book and uses the default allocator (std::allocator<Book>).
    // This reference allows access to and modification of a collection of Book objects.
    Book newBook;
    cout << "Enter Book ID: ";
    cin >> newBook.id;// Read book ID from user
    cin.ignore(); // Clear newline from input buffer
    cout << "Enter Book Title: ";
    getline(cin, newBook.title);  // Read book title from user
    // getline is used to read a line of text, including spaces, until a newline character is encountered.
    // This is useful for reading strings that may contain spaces, such as book titles or names
    cout << "Enter Author Name: ";
    getline(cin, newBook.author);
    newBook.isIssued = false;

    library.push_back(newBook);  //The std::vector<Book, std::allocator<Book>>::push_back function is an inline member function that appends a copy of the specified Book object (_Val) to the end of the std::vector.
    // It increases the size of the vector by one and may reallocate its storage if the current capacity is insufficient.
    cout << "Book added successfully!\n";
}

// Function to display all books
void displayBooks(const vector<Book> &library) {
    if (library.empty()) {
        cout << "No books in the library.\n";
        return;
    }
    cout << "\n--- List of Books ---\n";
    for (const auto &book : library) {
        cout << "ID: " << book.id
             << " | Title: " << book.title
             << " | Author: " << book.author
             << " | Status: " << (book.isIssued ? "Issued" : "Available") << "\n";
    }
}

// Function to search for a book by ID
void searchBook(const vector<Book> &library) {
    int searchId;
    cout << "Enter Book ID to search: ";
    cin >> searchId;

    for (const auto &book : library) {
        if (book.id == searchId) {
            cout << "Book found!\n";
            cout << "Title: " << book.title << "\n";
            cout << "Author: " << book.author << "\n";
            cout << "Status: " << (book.isIssued ? "Issued" : "Available") << "\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

// Function to issue a book
void issueBook(vector<Book> &library) {
    int issueId;
    cout << "Enter Book ID to issue: ";
    cin >> issueId;

    for (auto &book : library) {
        if (book.id == issueId) {
            if (!book.isIssued) {
                book.isIssued = true;
                cout << "Book issued successfully!\n";
            } else {
                cout << "Book is already issued.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

// Function to return a book
void returnBook(vector<Book> &library) {
    int returnId;
    cout << "Enter Book ID to return: ";
    cin >> returnId;

    for (auto &book : library) 
    {
        if (book.id == returnId) // Check if the book ID matches
        {
            if (book.isIssued) // Check if the book is currently issued
            {
                book.isIssued = false;// Mark the book as not issued
                cout << "Book returned successfully!\n";
            } 
            else // If the book is not issued
            {
                cout << "Book was not issued.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

// Main function
int main() {
    vector<Book> library;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: addBook(library); break;
            case 2: displayBooks(library); break;
            case 3: searchBook(library); break;
            case 4: issueBook(library); break;
            case 5: returnBook(library); break;
            case 6: cout << "Exiting the program. Goodbye!\n"; return 0;
            default: cout << "Invalid choice. Please try again.\n";
        }
    }
}
