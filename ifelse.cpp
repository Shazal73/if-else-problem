#include<iostream>
using namespace std;

int main() {
    '''Problem 1: Check if a number is positive, negative, or zero'''

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

     '''Problem 2: Check if a year is a leap year or not'''
     int year;
     cout << "Enter a year: ";
     cin >> year;
 
     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
         cout << "The year is a leap year." << endl;
     } else {
         cout << "The year is not a leap year." << endl;
     }
    
    '''Problem 3: Find the largest of three numbers'''
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is " << num2 << endl;
    } else {
        cout << "The largest number is " << num3 << endl;
    }






   '''Problem 4: Check if a character is a vowel or consonant'''
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "The character is a vowel." << endl;
    } else {
        cout << "The character is a consonant." << endl;
    }


   
     '''Problem 5: Check if a number is even or odd'''
     int number;
     cout << "Enter a number: ";
     cin >> number;
 
     if (number % 2 == 0) {
         cout << "The number is even." << endl;
     } else {
         cout << "The number is odd." << endl;
     }
 

     
    return 0;

}
