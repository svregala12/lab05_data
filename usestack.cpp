// usestack.cpp - for CS 24 lab practice using stacks
// Steve Regala | Angel Gutierrez | 5/14/21

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {

    Stack s;

    /*
    s.push(10);
    s.push(20);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    */

    // +++++++++++++++++++++++++++++++++++++++++

    // Evaluating: ( 7 * 3 ) + ( 8 * 1 )
    // Postfix order: 7 3 * 8 1 * +

    // first four tokens are all numbers to push: 7 3 8 1
    s.push(7);
    s.push(3);
    s.push(8);
    s.push(1);

    // 5th token is calculation to do *
    int right = s.top();
    s.pop();
    int left = s.top();
    s.pop();
    s.push(left * right);       // 8 * 1 is evaluated
    cout << left << " * " << right << " = " << s.top() << endl;
    
    int top = s.top();          // 8 is on top of the stack, assign variable top to 8
    s.pop();                    // pop 8 off the top
    
    right = s.top();
    s.pop();
    left = s.top();
    s.pop();
    s.push(left * right);       // 7 * 3 is evaluated
    cout << left << " * " << right << " = " << s.top() << endl;

    int top2 = s.top();        // 21 is on top of the stack, assign variable top2 to 21
    s.pop();                   // pop 21 off the top
    s.push(top + top2);
    cout << top << " + " << right << " = " << s.top() << endl;

    return 0;
}
