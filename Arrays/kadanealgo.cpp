#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//Brute Force
	// int t,n,i,j;
	// cin>>t;
	// while(t){
	//     cin>>n;
	//     int arr[n];
	//     for(i=0;i<n;i++){
	//         cin>>arr[i];
	//     }
	//     int cur_sum;
	//     int max_sum,global_max;
	//     for(i=0;i<n;i++){
	//         cur_sum = arr[i];
	//         //max_sum is max_sum in a subarray
	//         max_sum = cur_sum;
	//         if(i==0)
	//             //global_max is max of all max_sum values
	//             global_max = max_sum;
	//         for(j=i+1;j<n;j++){
	//             cur_sum += arr[j];
	//             //This is important for all subarrays
	//             if(max_sum<cur_sum)
	//                 max_sum=cur_sum;
	//         }
	//         if(max_sum>global_max)
	//             global_max = max_sum;
	//     }
	//     cout<<global_max<<endl;
	//     t--;
	// }
	//Kadane's Algorithm
	long int n,sum,i,j,k;
    cin>>n;
    long int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    long int cur_max,global_max;
    cur_max=global_max=arr[0];
    global_max=0;
	//The maximum is either the element at i or previous max + element at i
    for(i=1;i<n;i++){
        cur_max = max(arr[i],arr[i]+cur_max);
        if(global_max<cur_max)
            global_max=cur_max;
    }
    cout<<global_max;
	return 0;
}