#include <iostream>
#include <string>
using namespace std;
int arr[1000];
int top=-1;
void push(int x){
    top++;
    arr[top]=x;
}
void pop(){
    if(top>=0)
        top--;
}
int empty(){
    if(top == -1)
        return 1;
    else
        return 0;
}
int peek(){
    return arr[top];
}
int main() {
	//Given an expression exp of length n consisting of some brackets. The task is to print the bracket numbers when the expression is being parsed.
    //LOGIC----
    //Whenever I scan a "(", I increment counter, push it to stack and print stack top (or counter). Whenever I scan a ")", I print stack top and call pop().
	string exp;
	int t,i,pushcount,count;
	cin>>t;
	while(t){
	    pushcount = count = 0;
	    cin>>exp;
	    for(i=0;i<exp.length();i++){
	        if(exp[i]=='('){
	            pushcount++;
	            push(pushcount);
	            cout<<peek()<<" ";
	        }
	        if(exp[i]==')'){
	            cout<<peek()<<" ";
	            pop();
	        }
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}