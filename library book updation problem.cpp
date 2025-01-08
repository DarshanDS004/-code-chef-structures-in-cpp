#include <iostream>
using namespace std;

struct Book {
    string name;
    int totalCount;
};

int main() {
    int T;
    cin >> T;

    Book books[T];
    int numBooks = 0; // Number of unique books in the array

    for (int i = 0; i < T; i++) {
        string bookName;
        cin >> bookName;

        int bookIndex = -1; // Index of the book in the array, -1 if not found
        for (int j = 0; j < numBooks; j++) {
            if (bookName == books[j].name) {
                bookIndex = j;
                break;
            }
        }

        if (bookIndex == -1) {
            books[numBooks].name = bookName;
            int numOrders, totalQuantity = 0;
            cin >> numOrders;
            int quantity;
            cin >> quantity;
            totalQuantity += quantity;
            books[numBooks].totalCount = totalQuantity;
            numBooks++;
        } 
        else {
            int id,quantity;
            cin>>id>>quantity;
            books[bookIndex].totalCount+=quantity;
            // Update the else condition to solve this problem
            
        }
    }

    // Output book names and counts
    for (int i = 0; i < numBooks; i++) {
        cout << books[i].name << " " << books[i].totalCount << "\n";
    }

    return 0;
}
