#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	/*
    Write a program to input a list of n integers in an array and arrange them in a way similar to the to-and-fro movement of a Pendulum.

The minimum element out of the list of integers, must come in center position of array. If there are even elements, then minimum element should be moved to (n-1)/2 index (considering that indexes start from 0)
The next number (next to minimum) in the ascending order, goes to the right, the next to next number goes to the left of minimum number and it continues like a Pendulum.
    */
	int t,n,i,flag;
	cin>>t;
	while(t){
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    list <int> result;
	    flag=0;
	    result.push_back(arr[0]);
	    for(i=1;i<n;i++){
	        if(flag%2==0){
	            result.push_back(arr[i]);
	        }
	        else{
	            result.push_front(arr[i]);
	        }
	        flag++;
	    }
	    for (std::list<int>::iterator it=result.begin(); it!=result.end(); ++it)
            cout << *it<< ' ' ;
	    cout<<endl;
	    t--;
	}
	return 0;
}