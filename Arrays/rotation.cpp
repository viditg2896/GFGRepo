#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//O(n) solution - we just have to get a formula to get index from arr
	int t,n,i,k;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n],brr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	    for(i=0;i<n;i++){
	        int temp = i+k;
	        if(temp>=n){
	            temp = i+k-n;
	        }
	        brr[i]=arr[temp];
	    }
	    for(i=0;i<n;i++){
	        cout<<brr[i]<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}