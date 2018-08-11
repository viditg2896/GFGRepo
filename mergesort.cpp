#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    int temp[end-start+1];
    int i,j,k;
    i=start;j=mid+1;k=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(i=start;i<=end;i++){
        arr[i]=temp[i-start];
    }
}
void mergesort(int arr[],int start,int end){
    if(start<end){
        int mid = (start+end)/2;
        mergesort(arr,0,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main() {
    int arr[] = {3,2,1,6,7,8,-77};
    mergesort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}