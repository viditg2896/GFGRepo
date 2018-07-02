#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	int t,n,i;
	string s,temp;
	cin>>t;
	while(t){
	    cin>>n;
	    s=to_string(n);
	    temp="";
	    for(i=s.length()-1;i>=0;i--){
	        temp+=s[i];
	    }
	    if(s==temp){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    t--;
	}
	return 0;
}