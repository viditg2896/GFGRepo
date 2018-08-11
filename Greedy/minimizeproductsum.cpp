#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//Given two arrays, A and B, of equal size n, the task is to find the minimum value  of A[0] * B[0] + A[1] * B[1] +…+ A[n-1] * B[n-1], where shuffling of elements of arrays A and B is allowed.
	//Idea is to multiply a big number by a small number. So, we sort arrays in ascending and descending order
	int t,n,i,temp;
	cin>>t;
	while(t){
	    cin>>n;
	    int sum = 0;
	    vector <int> arr,brr;
	    for(i=0;i<n;i++){
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    for(i=0;i<n;i++){
	        cin>>temp;
	        brr.push_back(temp);
	    }
	    sort(arr.begin(),arr.end());
	    sort(brr.begin(),brr.end(),greater<int>());
	    for(i=0;i<n;i++){
	        sum = sum + arr[i]*brr[i];
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}