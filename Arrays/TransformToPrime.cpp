#include <iostream>
using namespace std;
int main() {
	//Given an array of n integers. Find minimum number to be inserted in array, so that sum of all elements of array becomes prime. If sum is already prime, then return 0.
	int t,n,i,sum,ans,newsum,flag;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    sum=0;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    flag=1;
	    newsum=sum;
	    /*
	    We do a simple prime check on newsum, but we dont check for all numbers
	    we check for the first factor of that number apart from 1 and the number
	    itself, if we find it - then newsum isn't prime and we increment it, if
	    we don't - then newsum is definitely prime.
	    */
	    while(flag){
	        flag=0;
	        for(i=2;i<newsum/2;i++){
	            if(newsum%i==0){
	                flag=1;
	                newsum++;
	                break;
	            }
	        }
	    }
	    cout<<newsum-sum<<endl;
	    t--;
	}
	return 0;
}