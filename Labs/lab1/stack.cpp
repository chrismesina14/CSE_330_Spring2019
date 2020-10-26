/***********************************************************************************************
 * Christian Mesina
 * stack.cpp
 * 04/12/2019
 * This program converts an infix expression to a postfix expression using stacks. For example,
 * if the user entered a+b*c , the program will output abc*+.
 **********************************************************************************************/

#include <iostream>
#include <stack>

using namespace std;

int prec(char c)            // creates the precedence function
{
    if(c == '*' || c == '/')    
        return 2;
    if(c == '+' || c == '-')
        return 1;
    if(c == '(')
        return 0;
    return -1;
}

int main() 
{
    stack <char> op;     // creates the stack character operand
    char next_character; // character input
    
    cout << "Enter an expression: " << endl;    // prints out a line to tell the user what to input
    cin >> next_character;      // user input
    
    while(!cin.eof())       // while there is more input continue
    {
        if((next_character >= 'a' && next_character <= 'z') || (next_character >= 'A' && next_character <= 'Z') || (next_character >= '0' && next_character <= '9'))  
        {
            cout << next_character;     // if input is an operand print the input
        } 
        else
        {
            if(next_character == '(')       // '(' has lowest precedence inside and higher outside the stack       
            {
                op.push(next_character);    // push input into stack if input is '('
            }
            else if(next_character == ')')  
            {
                while((!op.empty()) && (op.top() != '('))    
                {
                    cout << op.top();   // while stack is not empty and top of stack is not
                    op.pop();           // '(', print top of stack and pop stack
                }
                if(!op.empty()) 
                {
                    op.pop();   // if stack is empty, pop stack
                }
                else
                {
                    cout << "Error!" << endl;   // print error if conditions are not met
                }
            }
            else if((next_character == '*') || (next_character == '/') || (next_character == '+') || (next_character == '-')) 
            {
                if(op.empty() || prec(op.top()) < prec(next_character)) //bottom of stack has lowest precedence
                {
                    op.push(next_character);    // if input is +,*,- push input into stack
                }
                else
                {
                    while(!op.empty() && prec(op.top()) >= prec(next_character)) 
                    {
                        cout << op.top();   // while stack is not empty and precedence of top of stack
                        op.pop();           // is greater than equal to precedence of input, print top of stack
                    }                       // and pop stack. Otherwise if these are not met, push input into stack
                    op.push(next_character);
                }
            }
            else
            {
                cout << "Error!" << endl;   // print error if conditions are not met
            }
        }
        cin >> next_character;  // prints the input
    }
    while(!op.empty())  
    {
        cout << op.top();   // while stack is not empty, print top of stack and pop stack
        op.pop();
    }
    cout << endl;
}
