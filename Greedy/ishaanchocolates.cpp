#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
using namespace std;
int main()
{
	/*
	As we know, Ishaan has a love for chocolates. 
	He has bought a huge chocolate bar which contains N chocolate squares.
	Each of the square has a tastiness level which is denoted by an array A[].
    Ishaan can eat the first or the last square of the chocolate at once.
    Ishaan has a sister who loves chocolates too and she demands the
    last chocolate square. Now, Ishaan being greedy eats the more tasty square
    first. 
    Determine the tastiness level of the square which his sister gets.
	*/
	int t,n,temp,i;
	cin>>t;
	while(t){
	    cin>>n;
	    deque <int> choco;
	    for(i=0;i<n;i++){
	        cin>>temp;
	        choco.push_back(temp);
	    }
	    while(choco.size()>1){
	        if(choco.front()>=choco.back()){
	            choco.pop_front();
	        }    
	        else{
	            choco.pop_back();
	        }
	    }
	    cout<<choco.front()<<endl;
	    t--;
	}
	return 0;
}