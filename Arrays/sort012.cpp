#include <iostream>
using namespace std;

int main() {
	//Write a program to sort an array of 0's,1's and 2's in ascending order.
	int t,n,f0,f1,f2,i;
	cin>>t;
	while(t){
	    f0=f1=f2=0;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==0){
	            f0++;
	        }
	        else if(arr[i]==1){
	            f1++;
	        }
	        else{
	            f2++;
	        }
	    }
	    for(i=0;i<f0;i++){
	            cout<<0<<" ";
	    }
        for(i=0;i<f1;i++){
	            cout<<1<<" ";
	    }
	    for(i=0;i<f2;i++){
	            cout<<2<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}