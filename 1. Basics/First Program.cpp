#include <iostream> // io -> input/output, stream -> a continuous flow
// LIBRARY (Standard Libray)

using namespace std;  //

int students, books, booksToGive, booksLeft; //

int main()
{
    cout << "How many students are in the classroom: ";
    cin >> students;

    cout << "How many books do you have: ";
    cin >> books;

    booksToGive = books/(students - 1);
    cout << "Books for each students: " << booksToGive << endl;

    booksLeft = books - booksToGive*(students-1);
    cout << "It left " << booksLeft << " books for the Teacher";

    return 0;
}