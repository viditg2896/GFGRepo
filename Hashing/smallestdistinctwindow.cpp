#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
 {
	//Given a string detect the smallest window length that contains all the distinct characters of the given string even if it contains repeating elements​.
    //For eg. A = “aabcbcdbca”, then the result would be 4 as of the smallest window will be “dbca” .
	int t,i,j;
	string s;
	cin>>t;
	while(t){
	    cin>>s;
	    //Storing all distinct characters in a set
	    set <char> stringset;
	    for(i=0;i<s.length();i++){
	        stringset.insert(s[i]);
	    }
	    //Set of lengths of all windows which have all the distinct characters
	    set <int> lengths;
	    //For each character
	    for(i=0;i<s.length();i++){
	        //For every window
	        set <char> holder = stringset;
	        int length = 0;
	        for(j=i;j<s.length();j++){
	            if(holder.size()>0){
	                //If holder set contains the character from window then remove it
	                if(holder.find(s[j])!=holder.end()){
	                    holder.erase(s[j]);
	                }
	                //Increase length of window
	                length++;
	                //If all distinct elements have been covered
	                if(holder.size()==0){
	                    lengths.insert(length);
	                }
	            }
	            else{
	                break;
	            }
	        }
	    }
	    cout<<*(lengths.begin())<<endl;
	    t--;
	}
	return 0;
}