#include<algorithm>
#include<unordered_map>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	//HashMAP!!! - O(n) Complexity
	int t,n,i;
	cin>>t;
	while(t){
	    cin>>n;
	    int temp,flag=1,arr[n];
	    //Map to store array value and its frequency
	    unordered_map <int,int> mymap;
	    //First Array
	    for(i=0;i<n;i++){
	        cin>>temp;
	        arr[i]=temp;
	        //If not in map...add it and set frequency as 1
	        if(mymap.find(temp)==mymap.end()){
	            mymap[temp]=1;
	        }
	        //else just increase the frequency
	        else{
	            mymap[temp]++;
	        }
	    }
	    for(i=0;i<n;i++){
	        cin>>temp;
	        //If element of second array is in map
	        if(mymap.find(temp)!=mymap.end()){
	            mymap[temp]--;
	        }
	    }
	    //If arrays are equal -> values of every key should be zero!
	    for(i=0;i<n;i++){
	        if(mymap[arr[i]]!=0){
	            flag = 0;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<1;
	    }
	    else
	        cout<<0;
	    cout<<endl;
	    t--;
	}
	return 0;
}