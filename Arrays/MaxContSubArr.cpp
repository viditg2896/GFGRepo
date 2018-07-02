#include <iostream>
using namespace std;
int maxval(int arr[],int n){
    int i,max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main() {
	//code
	int t,i,n,k,p,j,x;
	cin>>t;
	while(t){
	    cin>>n>>k;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int subarr[k];
	    i=0;
	    while(i<n && p<n){
	        p=i;
	        for(j=0;j<k;j++){
	            subarr[j]=arr[p];
	            p++;
	        }
	        cout<<maxval(subarr,k)<<" ";
	        i++;
	    }
        if(t>1)
	        cout<<endl;
	    t--;
	}
	return 0;
}