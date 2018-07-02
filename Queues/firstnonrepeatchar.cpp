#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int searchnonrepeat(int arr[],int n,vector <int> inp){
    int i,flag=-1,j;
    vector <int> positions;
    //Storing the positions(or characters) which have occured only 1 time in 'positions'
    for(i=0;i<n;i++){
        if(arr[i]==1){
            positions.push_back(i);
        }
    }
    if(positions.size()==0)
        return -1;
    vector <int> indexes;
    //Finding the element in 'positions' which occured first in 'inp' 
    for(i=0;i<positions.size();i++){
        for(j=0;j<inp.size();j++){
            if(inp[j]==positions[i]){
                indexes.push_back(j);
            }
        }
    }
    //returning char
    sort(indexes.begin(),indexes.end());
    flag = inp[indexes[0]];
    return flag;
}
int main()
 {
	//Given an input stream of n characters consisting only of small case alphabets the task is to find the first non repeating character each time a character is inserted to the stream.
	int t,n,i,pos;
	char x;
	cin>>t;
	while(t){
	    cin>>n;
        //"count" array stores the number of times each alphabet(0-25) has repeated
	    int count[26],currentpos;
	    vector <char> result;
	    vector <int> input;
	    for(i=0;i<26;i++){
	        count[i]=0;
	    }
	    for(i=0;i<n;i++){
	       cin>>x;
           //'a' means position 0, 'b' means position 1
	       pos = x-'a';
	       count[pos]++;
	       input.push_back(pos);
           //finding first non repeating character
	       if(searchnonrepeat(count,26,input)!=-1){
	           pos = searchnonrepeat(count,26,input);
	           
	           if(pos==0){
	               cout<<"a"<<" ";
	           }
	           else{
	               pos = pos+'a';
	               cout<<char(pos)<<" ";
	           }
	       }
	       else
	           cout<<-1<<" ";
	    }
	   // for(i=0;i<result.size();i++){
	   //     cout<<result[i]<<" ";
	   // }
	    cout<<endl;
	    t--;
	}
	return 0;
}