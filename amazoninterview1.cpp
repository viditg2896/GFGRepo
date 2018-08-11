#include <iostream>
using namespace std;
int main(){
    int i,n,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-2;i++){
        if(arr[i]<arr[i+1] && arr[i+1]<arr[i+2]){
            count++;
        }
        if(arr[i]>arr[i+1] && arr[i+1]>arr[i+2]){
            count++;
        }
    }
    cout<<endl<<count;
    return 0;
}