#include <iostream>
#include <cctype>
#include <string>
#include "stringmanip.h"

using namespace std;

int main() {
    stringmanip strmanip(100);
    int choice;
    char retry;

    string input;
    char input2[100] = "HI";

    
    cout << "Enter a string: " << endl;
    getline(cin,input);
    cout << strmanip.length(input) << endl; 
    













    //do {
    //    cout << "What do you want to do? " << endl;
    //    cout << "1. Find the length of a string" << endl;
    //    cout << "2. Compare two strings" << endl;
    //    cout << "3. Concatenate two strings" << endl;
    //    cout << "4. Exit" << endl;
    //    cout << "Enter your choice: ";
    //    cin >> choice;
    //    cin.ignore();

    //    switch (choice) {
    //        case 1:
    //            cout << "Enter a string: " << endl;
    //            cin.getline(input, 99);

    //            cout << "The length of the string is: " << strmanip.length(input) << endl;
    //            break;
    //        case 2:
    //            cout << "Enter the first string: " << endl;
    //            cin.getline(input,99);
    //            cout << "Enter the second string: " << endl;
    //            cin.getline(input2,99);

    //            cout << "" << endl;
    //            cout << "The strings are: " << endl;
    //            cout << input << endl;
    //            cout << input2 << endl;

    //            cout << "The comparison result is: " << strmanip.compare(input, input2) <<"bigger."<< endl;
    //            break;
    //    }

    //    cout << "Try Again? [Y/N] ";
    //    cin >> retry;
    //    //retry to uppercase
    //    retry = toupper(retry);
    //} while (retry == 'Y');
}

