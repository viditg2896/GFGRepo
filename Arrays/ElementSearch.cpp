#include <iostream>
using namespace std;

int main() {
	//Search an element in array
	int i,n,t,k,res;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	    res=-1;
	    for(i=0;i<n;i++){
	        if(arr[i]==k){
	            res=i;
	            break;
	        }
	    }
	    cout<<res<<endl;
	    t--;
	}
	return 0;
}