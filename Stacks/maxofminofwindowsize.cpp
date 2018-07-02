#include <iostream>
#include <vector>
using namespace std;
int findMin(int arr[],int low,int high){
    int min = arr[low];
    for(int i=low;i<=high;i++){
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}
int findMax(vector <int> mins){
    int max = mins[0];
    for(int i=0;i<mins.size();i++){
        if(mins[i]>max)
            max=mins[i];
    }
    return max;
}
int main() {
	//code
	int t,n,i,j,k;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    vector <int> maximums;
	    for(i=0;i<n;i++){
	        //for every size
	        vector <int> mins;
	        for(j=0;j<n;j++){
	            mins.push_back(findMin(arr,j,j+i));
	        }
	        maximums.push_back(findMax(mins));
	    }
	    for(i=0;i<n;i++){
	        cout<<maximums[i]<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}