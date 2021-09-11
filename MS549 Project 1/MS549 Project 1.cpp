// MS549 Project 1.cpp 
// Chad Weirick
//
// requirements:
// Can Push
// Can Pop
// Can Peek (aka Top)
// 
// Test:
// 1) Pop from an empty stack (no values are stored on the stack)
// 2) Peek from an empty stack (no values are stored on the stack)
// 3) Can push to a full stack (not testible, out of the box there is no limit without getting into program/memory space limtations which vary based on a wide number of parameters.


#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;    
    int iMyInt = 0;    
    // the first 2 tests are designed to fail, so I have remarked them out.  Unremark them to run and see expected failures.
    // Pop from an empty stack (no values are stored on the stack)
    // myStack.pop();
    // Peek from an empty stack (no values are stored on the stack)
    // iMyInt = myStack.top();
   
    myStack.push(1); // push being used
    myStack.push(2);
    myStack.push(25);
    iMyInt = myStack.top(); // peek being userd
    std::cout << myStack.size();
    std::cout << "\nTop Unit is: ";
    std::cout << iMyInt;
    std::cout << "\n";
    iMyInt = myStack.top(); // demonstration of how top is different than pop
    std::cout << myStack.size();
    std::cout << "\nTop Unit is: ";
    std::cout << iMyInt;
    std::cout << "\n";
    myStack.pop();
    std::cout << myStack.size();
    std::cout << "\n";
    std::cout << "\nTop Unit is: ";
    std::cout << iMyInt;
}

