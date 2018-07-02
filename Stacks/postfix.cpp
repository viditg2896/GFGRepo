#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	//code
	int t,i;
	string expression;
	int temp1,temp2;
	cin>>t;
	while(t){
	    cin>>expression;
        char zero = '0';
	    stack <int> expstack;
	    for(i=0;i<expression.length();i++){
	        if(isdigit(expression[i])){
	            expstack.push((int)expression[i]-(int)zero);
	        }
	        else{
	            if(expression[i]=='+'){
	                  temp1=expstack.top();
	                  expstack.pop();
	                  temp2=expstack.top();
	                  expstack.pop();
	                  expstack.push(temp2+temp1);
                      
	            }
	            if(expression[i]=='-'){
	                  temp1=expstack.top();
	                  expstack.pop();
	                  temp2=expstack.top();
	                  expstack.pop();
	                  expstack.push(temp2-temp1);
                      
	            }
	            if(expression[i]=='*'){
	                  temp1=expstack.top();
	                  expstack.pop();
	                  temp2=expstack.top();
	                  expstack.pop();
	                  expstack.push(temp2*temp1);
                      
	            }
	            if(expression[i]=='/'){
	                  temp1=expstack.top();
	                  expstack.pop();
	                  temp2=expstack.top();
	                  expstack.pop();
	                  expstack.push(temp2/temp1);
	            }
	        }
            
	    }
	    cout<<expstack.top()<<endl;
	    t--;
	}
	return 0;
}