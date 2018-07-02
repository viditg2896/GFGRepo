#include <iostream>
#include <string>
using namespace std;
char arr[1000];
int top=-1;
void push(char x){
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
char peek(){
    return arr[top];
}
int main() {
	//Given an expression string exp, examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
	int t,i;
	string exp;
	cin>>t;
	while(t){
	    cin>>exp;
	    for(i=0;i<exp.length();i++){
	        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
	            push(exp[i]);
	        }
	        else{
	            if(exp[i]==')'){
	                if(peek()=='('){
	                    pop();
	                }
	                else{
	                    push(exp[i]);
	                }
	            }
	            if(exp[i]=='}'){
	                if(peek()=='{'){
	                    pop();
	                }
	                else{
	                    push(exp[i]);
	                }
	            }
	 	        if(exp[i]==']'){
	                if(peek()=='['){
	                    pop();
	                }
	                else{
	                    push(exp[i]);
	                }
	            }
	        }
	    }
	    if(top==-1)
	        cout<<"balanced"<<endl;
	    else
	        cout<<"not balanced"<<endl;
        //Below statement is very important - we are using a globally declared stack. We have to set top = -1 for every new expression.
        top=-1;
	    t--;
	}
	return 0;
}