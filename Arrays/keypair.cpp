#include <iostream>
using namespace std;

int main() {
	//This problem can be done in O(n) using two pointers technique
    //Given an array A[] of n numbers and another number x, determine whether or not there exist two elements in A whose sum is exactly x.
	int t,n,k,i,j,flag;
	cin>>t;
	while(t){
	    cin>>n>>k;
	    int arr[n];
	    flag=0;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
	            if(arr[i]+arr[j] == k){
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==1)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    t--;
	}
	return 0;
}