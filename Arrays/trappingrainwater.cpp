#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findMax(int arr[],int start,int end){
    int max = arr[start];
    for(int i=start;i<=end;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
int findMin(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
	//Good Question!
	//for every element check for max element on left & right. Take the min of them and subtract it from current array element to get water in that element
	int t,n,i;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int water = 0;
	    for(i=0;i<n-1;i++){
	        int h1 = findMax(arr,0,i-1);
	        int h2 = findMax(arr,i+1,n-1);
	        int min = findMin(h1,h2);
	        //Edge case - when water is negative, discard it
	        if(min-arr[i]>0)
	            water=water+min-arr[i];
	    }
	    if(water>0)
	        cout<<water<<endl;
	    else
	        cout<<0<<endl;
	    t--;
	}
	return 0;
}