
#include<bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("");
}
int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/
/* The below method sorts the stack s 
you are required to complete the below method */

//Naive Approach
void SortedStack :: sort()
{
   //Your code here
   vector <int> st;
   while(!s.empty()){
       st.push_back(s.top());
       s.pop();
   }
   int i,j,temp;
   for(i=0;i<st.size();i++){
       for(j=i+1;j<st.size();j++){
           if(st[i]>st[j]){
               temp = st[i];
               st[i] = st[j];
               st[j] = temp;
           }
       }
   }
   for(i=0;i<st.size();i++){
       s.push(st[i]);
   }
}
//Via tempstack

// This function return the sorted stack
stack<int> sortStack(stack<int> &input)
{
	stack<int> tmpStack;

	while (!input.empty())
	{
		// pop out the first element
		int tmp = input.top();
		input.pop();

		// while temporary stack is not empty and top
		// of stack is greater than temp
		while (!tmpStack.empty() && tmpStack.top() > tmp)
		{
			// pop from temporary stack and push
			// it to the input stack
			input.push(tmpStack.top());
			tmpStack.pop();
		}

		// push temp in tempory of stack
		tmpStack.push(tmp);
	}

	return tmpStack;
}