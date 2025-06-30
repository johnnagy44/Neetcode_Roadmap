#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    stack<int> myStack;
    stack<int> minStack;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        if (minStack.empty())
            minStack.push(val);
        else if (val <= minStack.top())
            minStack.push(val);
        myStack.push(val);
    }

    void pop()
    {
        if (myStack.top() == minStack.top())
            minStack.pop();

        myStack.pop();
    }

    int top()
    {
        return myStack.empty() ? -1 : myStack.top();
    }

    int getMin()
    {
        return minStack.top();
    }
};