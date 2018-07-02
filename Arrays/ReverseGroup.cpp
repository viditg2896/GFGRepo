#include <iostream>
using namespace std;

int main() {
	//Given an array, reverse every sub-array formed by consecutive k elements.
	int t,i,n,flag,k,temp,it,cnt;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	    temp=k;
	    flag=cnt=it=0;
	    while(it<n && flag!=2 && cnt<n){
	        for(i=temp-1;i>=it;i--){
	            cout<<arr[i]<<" ";
                cnt++;
	        }
	        if(temp+k<=n)
	            temp+=k;
	        else{
                flag++;
	            temp=n;
            }
	        if(it+k<n)
	            it+=k;
	    }
	    t--;
	}
	return 0;
}