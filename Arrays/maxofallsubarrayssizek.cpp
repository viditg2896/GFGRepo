#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//code
	int t,n,k,i,j;
	cin>>t;
	while(t){
	    cin>>n>>k;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int max;
	    for(i=0;i<=n-k;i++){
	        max = arr[i];
	        for(j=i;j<k+i;j++){
	           if(arr[j]>max)
	                max = arr[j];
	        }
	        cout<<max<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}