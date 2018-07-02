#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
 {
	//Done by set - O(n) - Problem - whether a string has distint characters or not
	int t,i,flag;
	cin>>t;
	while(t){
	    string s;
	    cin>>s;
	    flag = 0;
	    set <char> x;
	    //Insert each of character of string in set
	    for(i=0;i<s.length();i++){
	       x.insert(s[i]);
	    }
	    //If size of string and set are same then no repetition
	    if(x.size()==s.length())
	        cout<<1;
	    else
	        cout<<0;
	    cout<<endl;
	    t--;
	}
	return 0;
}