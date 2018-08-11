#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Given a string S, containing special characters and all the alphabets, reverse the string without
//affecting the positions of the special characters.
	int t,i,j;
	cin>>t;
	while(t){
	    string s,w="";
	    cin>>s;
	    //Store alphabets in a temporary array in reverse order
	    for(i=s.length()-1;i>=0;i--){
	        if(isalpha(s[i])){
	            w+=s[i];
	        }
	    }
	   j=0;
	    for(i=0;i<s.length();i++){
	        //If its an alphabet, print from temporary array
	        if(isalpha(s[i])){
	            cout<<w[j];
	            j++;
	        }
	        //else print the special character
	        else{
	            cout<<s[i];
	        }
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}