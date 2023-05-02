#include <iostream>
#include <cctype>
#include <string>
#include "stringmanip.h"

using namespace std;

int main() {
    const int cap = 100;
    stringmanip strmanip(cap);
    int choice;
    char retry;
    
    char inp[100];
    char inp1[100];
    do {
        cout << "What do you want to do? " << endl;
        cout << "1. Find the length of a string" << endl;
        cout << "2. Compare two strings" << endl;
        cout << "3. Concatenate two strings" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter a string: " << endl;
            cin.getline(inp, 99);

            cout << "The length of the string is: " << strmanip.length(inp) << endl;

            break;

        case 2:
            cout << "Enter the first string: " << endl;
            cin.getline(inp, 99);
            cout << "Enter the second string: " << endl;
            cin.getline(inp1, 99);

            cout << "" << endl;
            cout << "The strings are: " << endl;
            cout << "First String: " <<  inp << endl;
            cout << "Second String: " << inp1 << endl;

            cout << "The comparison result is: " << strmanip.compare(inp, inp1) << " is bigger." << endl;
            break;
        case 3:
            cout << "Enter the first string: " << endl;
            cin.getline(inp, 99);
            cout << "Enter the second string: " << endl;
            cin.getline(inp1, 99);

            cout << "" << endl;
            cout << "The strings are: " << endl;
            cout << "First String: " << inp << endl;
            cout << "Second String: " << inp1 << endl;

            cout << "The concatenated string is: " << strmanip.concat(inp, inp1) << endl;
        
        case 4:
            exit(1);
        }

        cout << "Try Again? [Y/N]: ";
        cin >> retry;
        cin.ignore();
        retry = toupper(retry);
        system("cls");
    } while (retry == 'Y');
    

    return 0;
}


