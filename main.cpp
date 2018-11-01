// Course:  CS213 - Programming II  - 2018
// Title:   Assignment 2 - Individual
// Purpose:  creating stack class using valarray to store data
// Author: shrouq hussein
// ID:20170127
// Version: v.2


#include <iostream>
#include "stack_valarr.h"
#include <valarray>
using namespace std;

int main()
{
  int choice;
  char c;
  stack_valarr s;

    while(1){cout<<"What do you want to do now \n 1)push char to your stack 2)pop a character from the stack \n 3)get the size of the stack 4) clear elements in the stack 5)check if the stack is empty"<<endl;
        cin >> choice;
        if(choice== 1){cout<<"enter character to add" <<endl;cin >> c;
        if((c < 48 )|| (c > 57 )) {s.push (c); }else { cout<< " you must add a character"<<endl;}}
        if (choice== 2){ cout << s.pop ()<<endl;}
        if (choice== 3){ cout <<"size of the stack is: "<< s.getSize ( )<<endl;}
        if (choice== 4){s.CLEAR ( );}
        if (choice== 5){if(s.isEmpty ( )){ cout<<"stack is empty"<<endl; }
        else { cout<< " stack is not empty"<<endl;}
        }
    }



    return 0;
}
