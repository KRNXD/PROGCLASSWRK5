/*

Header to include in source code:

 * Class: CMSC140 CRN

 * Instructor: Prof Koo

 * Classwork/Homework/<5>

 * Description: Develop two programs. The first one being to print out different star patterns, the other being one that saves user info in a data file list

 * Due Date: 10/21/21

 * I pledge that I have completed the programming assignment independently.

   I have not copied the code from a student or any source.

   I have not given my code to any student.

   Print your Name here: Kieran Yalla

 */
 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
string name, phonenumber, street, state, city, zip;
cout << endl << endl;

cout << "Enter your Name : "; getline(cin,name,'\n');
cout << "Enter your Phone Number : "; getline(cin,phonenumber,'\n');
cout << "Enter your Street : "; getline(cin,street,'\n');
cout << "Enter your State : "; getline(cin,state,'\n');
cout << "Enter your City : "; getline(cin,city,'\n');
cout << "Enter your Zip Code : "; getline(cin,zip,'\n');

 ofstream output;
 output.open("list.txt", ios_base::app);
 output.close();

 ifstream input("list.txt", ios::ate);
 bool isEmpty = input.tellg() == 0;
 input.close();

 output.open("list.txt", ios_base::app);
 if(!isEmpty)
 output << endl;

 output << name << endl;
 output << phonenumber << endl;
 output << street << endl;
 output << city << endl;
 output << state << endl;
 output << zip;

 cout << endl << endl;

 input.open("list.txt");
 while(!input.eof())
 {
    getline(input, name);
    getline(input, phonenumber);
    getline(input, street);
    getline(input, city);
    getline(input, state);
    getline(input, zip);
    cout << "Name: " << name << endl;
    cout << "Phone Number: " << phonenumber<< endl;
    cout << "Address: " << street << ", " << city << ", " << state << ", " << zip << endl;
 }
 input.close();


 return 0;
}
