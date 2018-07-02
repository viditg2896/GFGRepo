#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector <int> findMin(int arr[],int n){
    int i,min=arr[0];
    vector <int> pos;
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==min){
            pos.push_back(i);
        }
    }
    return pos;
}
int main() {
	//Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.
	int t,n,k,i,ans_pos;
	vector <int> pos;
	cin>>t;
    while(t){
        cin>>n>>k;
        int arr[n],diff[n],diffmod[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            diff[i]=arr[i]-k;
            diffmod[i]=abs(arr[i]-k);
        }
        pos=findMin(diffmod,n);
        ans_pos=pos[0];
        for(i=0;i<pos.size();i++){
            if(diff[pos[i]]>0){
                ans_pos=pos[i];
                break;
            }
        }
        cout<<arr[ans_pos]<<endl;
        t--;
    }
	return 0;
}