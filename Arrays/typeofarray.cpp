#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
	int t,ascflag,descflag,n,i,j;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n],max=INT_MIN;
	    ascflag = descflag = 0;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    for(i=0;i<n-1;i++){
	        j=i+1;
	        if(arr[j]>arr[i])
	            ascflag++;
	        else
	            descflag++;
	    }
	    if(ascflag==n-1){
	        cout<<max<<" "<<1;
	    }
	    else if(descflag==n-1){
	        cout<<max<<" "<<2;
	    }
	    else if(ascflag<descflag){
	        cout<<max<<" "<<3;
	    }
	    else{
	        cout<<max<<" "<<4;
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}