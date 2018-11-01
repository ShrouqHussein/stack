#ifndef STACK_VALARR_H
#define STACK_VALARR_H
#include <iostream>
#include <string>
#include <valarray>
using namespace std;
void error (string message);
class stack_valarr
{
    public:
        stack_valarr();
        virtual ~stack_valarr();
         bool isEmpty ( );
         int getSize ( );
         char pop();void push(char v);
         void CLEAR ( );


    private:
         const int maxsize = 5;
        int top;
        valarray <char> data[5];
};


#endif // STACK_VALARR_H
