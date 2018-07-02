#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	//code
	int t,i,n;
	string expression;
	string postfix;
	cin>>t;
	while(t){
	    cin>>expression;
	    expression+=")";
	    postfix="";
	    stack <char> op;
	    op.push('(');
	    for(i=0;i<expression.length();i++){
	        if(isalpha(expression[i])){
	            postfix+=expression[i];
	        }
	        else{
	            switch(expression[i]){
	                case '^':
                        if(op.top()=='^'){
                            postfix+=op.top();
                            op.pop();
                            op.push(expression[i]);
                        }
                        else
	                        op.push(expression[i]);
	                    break;
	                case '*':
	                    if(op.top()=='^' || op.top()=='/' || op.top()=='*'){
	                        postfix+=op.top();
	                        op.pop();
	                        op.push(expression[i]);
	                    }
	                    else{
	                        op.push(expression[i]);
	                    }
	                    break;
	                case '/':
	                	if(op.top()=='^' || op.top()=='*' || op.top()=='/'){
	                        postfix+=op.top();
	                        op.pop();
	                        op.push(expression[i]);
	                    }
	                    else{
	                        op.push(expression[i]);
	                    }
	                    break;
	                case '+':
	                    if(op.top()=='^' || op.top()=='/' || op.top()=='*' || op.top()=='-' || op.top()=='+'){
	                        postfix+=op.top();
	                        op.pop();
	                        op.push(expression[i]);
	                    }
	                    else{
	                        op.push(expression[i]);
	                    }
	                    break;
	                case '-':
	                	if(op.top()=='^' || op.top()=='/' || op.top()=='*' || op.top()=='+' || op.top()=='-'){
	                        postfix+=op.top();
	                        op.pop();
	                        op.push(expression[i]);
	                    }
	                    else{
	                        op.push(expression[i]);
	                    }
	                    break;
	                case ')':
	                    while(op.top()!='(' && op.empty()!=1){
	                        postfix+=op.top();
	                        op.pop();
	                    }
	                    op.pop();
	                    break;
                    case '(':
                        op.push(expression[i]);
                        break;
	                default:
	                    break;
	            }
	        }
            
	    }
	    cout<<postfix<<endl;
	    t--;
	}
	return 0;
}