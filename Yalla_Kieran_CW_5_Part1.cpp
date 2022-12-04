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


using namespace std;


int main(){
    cout<<"(i)"<<endl;        
    for(int i = 0; i < 10; i++)
    cout << '*';
    cout << endl << endl;

    cout<<"(ii)"<<endl;
    for(int i = 0; i < 20; i++)
    cout << '*';
    cout << endl << endl;
    
    cout<<"(iii)"<<endl;
    for(int i = 0; i < 10; i++){
    for(int j = 0; j < i+1; j++)
    cout << '*';
    cout << endl;
 }

    cout << endl << endl;
    cout << "(iv)" << endl;
    for(int i = 0; i < 20; i++){
    for(int j = 0; j < i+1; j++)
    cout << '*';
    cout << endl;
 }
 
    cout << endl <<endl;
    cout << "(v)" <<endl;
    for(int i = 10; i > 0; i--){
    for(int j = 0; j < i; j++)
    cout << "*";
    cout << endl;
 }

    cout << endl << endl;
    cout << "(vi)" << endl;
    for(int i = 20; i > 0; i--){
    for(int j = 0; j < i; j++)
    cout << "*";
    cout << endl;
 }

 return 0;
}