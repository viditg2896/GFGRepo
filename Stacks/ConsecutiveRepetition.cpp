#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	//Given an integer N, remove consecutive repeated digits from it.
	int t,i;
	string res,temp;
	cin>>t;
	while(t){
	    stack <char> arr;
	    res="";
	    cin>>temp;
	    for(i=0;i<temp.length();i++){
	        if(arr.empty()){
	            arr.push(temp[i]);
	            res = res + temp[i];
	        }
	        else{
	            if(temp[i]!=arr.top()){
	                arr.push(temp[i]);
	                res = res + temp[i];
	            }
	        }
	    }
	    cout<<res;
	    cout<<endl;
	    t--;
	}
	return 0;
}