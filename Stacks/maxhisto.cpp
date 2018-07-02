#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector <int> areas){
    int max = areas[0];
    for(int i=0;i<areas.size();i++){
        if(areas[i]>max)
            max=areas[i];
    }
    return max;
}
int main() {
	//code
	int t,n,i,left,right,cnt;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    vector <int> areas;
	    for(i=0;i<n;i++){
	        left=i-1;
	        right=i+1;
	        cnt=0;
	        while(left>=0){
	            if(arr[left]<arr[i]){
	                break;
	            }
                left--;
	            cnt++;
	        }
	        while(right<n){
	            if(arr[right]<arr[i]){
	                break;
	            }
                right++;
	            cnt++;
	        }
	        areas.push_back((cnt+1)*arr[i]);
	    }
	    cout<<maxArea(areas)<<endl;
	    t--;
	}
	return 0;
}