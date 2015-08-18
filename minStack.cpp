#include <iostream>
#include <stack>
using namespace std;

class MinStack{
public:
	stack<int> data;
	stack<int> min;

	void push(int x)
	{
		data.push(x);
		if(min.empty()||x<=min.top())
			min.push(x);
		}
	};
	void pop()
	{
		if(!min.empty())
		{
			if(min.top() == data.top())
				min.pop();
			data.pop();
		}
	};
	int top()
	{
		return data.top();
	};	
    int getMin() {
        return min.top();
    };
};
