#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main()
 {
	//To check whether one array is a subset of another
	int t,n,k,i,temp,flag;
	cin>>t;
	while(t){
	    unordered_map <int,int> mymap;
	    cin>>n>>k;
	    int arr[n];
	    flag = 1;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        //Inserting values into hashmap
	        if(mymap.find(arr[i])==mymap.end()){
	            mymap[arr[i]]=1;
	        }
	    }
	    for(i=0;i<k;i++){
	        cin>>temp;
	        //if subarray element is not in hashmap, then subarray isnt a subset
	        if(mymap.find(temp)==mymap.end()){
	            flag = 0;
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