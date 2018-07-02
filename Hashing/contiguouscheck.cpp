#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
 {
	//Given an array of n integers(duplicates allowed). Print “Yes” if it is a set of contiguous integers else print “No”.
	int t,n,i,temp,flag;
	cin>>t;
	while(t){
	    cin>>n;
	    flag = 1;
	    set <int> arr;
	    for(i=0;i<n;i++){
	        cin>>temp;
	        arr.insert(temp);
	    }
	    set <int> :: iterator slow,fast;
	    for(fast = ++arr.begin(),slow = arr.begin();fast!=arr.end(),slow!=arr.end();slow++,fast++){
	        if(fast!=arr.end()){
	            if((*fast)-(*slow)!=1){
	               // cout<<*fast<<" "<<*slow<<endl;
	                flag = 0;
	                break;
	            }
	        }
	    }
	    if(flag == 1){
	        cout<<"Yes";
	    }
	    else
	        cout<<"No";
	    cout<<endl;
	    t--;
	}
	return 0;
}