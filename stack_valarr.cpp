#include "stack_valarr.h"
#include <iostream>
#include <string>
#include <valarray>
using namespace std;

stack_valarr::stack_valarr()
{

	  	    top = 0;//ctor
}

stack_valarr::~stack_valarr()
{
    cout<<"We are know ending stack class" <<endl;//dtor
}
 bool stack_valarr::isEmpty ( ){
             if(top <= 0){return 1;}
        }

int stack_valarr::getSize ( ){
             //sizeof(data)/sizeof(data[0]);
             return top;
        }

        char stack_valarr::pop() {
            if (top <= 0) {
                       //if(data[top]==NULL){return 1;}
          error("Underflow");
          return 0;
          }
          else{
  			char c = data[top - 1][0];
  			--top;

  			return c;
          }
        }
        void stack_valarr::push(char v) {
             if(top > maxsize ){
            error("overflow");


    }
    else{
  			data[top]= std::valarray <char> (v,1);
  			++top;
    }
        }
        void stack_valarr:: CLEAR ( ){
             /* for(int i= top;i>=0;i--){

                data[top]= NULL ;
		    }*/
		    top = 0;
        }








void error (string message) {
	cout << "\n" << message << "\n";

}

