#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int choice;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Display Files\n";
        cout << "2. Search for a File\n";
        cout << "3. Sort Files\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                displayFiles();
                break;
            case 2:
                searchFile();
                break;
            case 3:
                sortFiles();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}