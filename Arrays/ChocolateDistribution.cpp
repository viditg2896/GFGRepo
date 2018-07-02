#include <iostream>
#include <algorithm>
using namespace std;
int findMin(int arr[],int n){
    int i,min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
int main() {
	/*
	Given an array A[] of N integers where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are m students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students in packet with maximum chocolates and packet with minimum chocolates is minimum.
	*/
	int t,i,n,k,j;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	    sort(arr,arr+n);
	    int diff[n];
	    j=0;
	    for(i=0;i<n;i++){
	        if(i+k-1<n){
	            diff[j]=arr[i+k-1]-arr[i];
	            j++;
	        }
	    }
	    cout<<findMin(diff,j)<<endl;
	    t--;
	}
	return 0;
}