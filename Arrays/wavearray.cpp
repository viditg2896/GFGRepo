#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//need to sort the array first to get lexicographically least ans
	int i,t,n,temp;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
        //Swapping outliers alternatively
	    for(i=0;i<n-1;i++){
	        if(i%2==0){
	            if(arr[i+1]>arr[i]){
	                temp = arr[i+1];
	                arr[i+1] = arr[i];
	                arr[i] = temp;
	            }
	        }
	        else{
	            if(arr[i]>arr[i+1]){
	                temp = arr[i+1];
	                arr[i+1] = arr[i];
	                arr[i] = temp;
	            }
	        }
	    }
	    for(i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}