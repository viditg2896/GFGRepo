#include<bits/stdc++.h>
using namespace std;
int minLengthindex(string strs[],int n){
    int size = INT_MAX;
    for(int i=0;i<n;i++){
        if(strs[i].length()<size)
            size = i;
    }
    return size;
}
int main()
{
	//Given a array of n strings, find the longest common prefix among all strings present in the array.
	//We have created an array of strings, imagine it as a 2D matrix/array of characters
	//We find out the min string length and then in outer loop we iterate from column 0 - column minstringlength
	//Inside the inner loop we check the row values (alphabets) for that particular column(or index) 
	int t,n,i,j;
	cin>>t;
	while(t){
	    cin>>n;
	    string strs[n];
	    for(i=0;i<n;i++){
	        cin>>strs[i];
	    }
	    int minsizeindex = minLengthindex(strs,n);
	    string temp = strs[minsizeindex];
	    int finalind = -50,flag = 1; // -50 is an arbit value
	    for(i=0;i<temp.length();i++){
	        if(flag){
	            for(j=0;j<n;j++){
	                //if any row value is dissimalar - we break
	                if(strs[j][i]!=temp[i]){
	                    finalind = i;
	                    flag = 0;
	                    break;
	                }
	            }
	        }
	    }
	    //handling edge case - when size of min string is 1
	    if(finalind==-50 && temp.length()==1){
	        for(i=0;i<1;i++){
	            cout<<temp[i];
	        }    
	    }
	    //handling case when there is no similarity at all
	    if(finalind==0 && temp.length()!=1){
	        cout<<-1;
	    }
	    //normal o/p for most cases
	    if(finalind!=0 && n!=1){
	        for(i=0;i<finalind;i++){
	            cout<<temp[i];
	        }
	    }
	    //Edge - case - in case of 1 string - we return it as it is
	    if(finalind==-50 && n==1){
	        for(i=0;i<temp.length();i++){
	            cout<<temp[i];
	        }
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}