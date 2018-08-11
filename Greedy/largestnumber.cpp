#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//The task is to find the smallest number with given sum of digits as s and number of digits as d.
	//The idea is to create an array of size d, with all elements as 9.(max number formed with those digits)
	//Basic check is that the sum shouldnt be greater than sum of the max number.
	//Greedy approach - first deduct from the first digit of number (arr[0]) - then do it for subsequent elements
	int t,s,d,i;
	cin>>t;
	while(t){
	    cin>>d>>s;
	    int checksum = 0;
	    int num[d];
	    for(i=0;i<d;i++){
	        checksum+=9;
	        num[i]=9;
	    }
	    //not possible
	    if(checksum<s){
	        cout<<-1<<endl;
	    }
	    //max number case
	    else if(checksum==s){
	        for(i=0;i<d;i++){
	            cout<<9;
	        }
	        cout<<endl;
	    }
	    else{
	       //amount to reduce from max number 
	       int reduce = checksum-s;
	       int flag = 0;
	       while(true){
	           //Case when we can easily deduct amount from first digit
	           if(reduce<=9){
	               num[d-1]=num[d-1]-reduce;
	               reduce=0;
	               break;
	           }
	           else{
	               num[d-1]=num[d-1]-9;
	               reduce=reduce-9;
	               //Same strategy for subsequent digits
	               for(i=d-2;i>=0;i++){
	                   if(reduce>9){
	                       if(i==0){
	                           num[i]=num[i]-8;
	                           reduce=reduce-8;
	                       }
	                       else{
	                           num[i]=num[i]-9;
	                           reduce=reduce-9;
	                       }
	                       continue;
	                   }
	                   else{
	                       num[i]=num[i]-reduce;
	                       reduce=0;
	                       flag=1;
	                       break;
	                   }
	               }
	               if(flag)
	                  break;
	           }
	       }
	       for(i=0;i<d;i++){
	           cout<<num[i];
	       }
	       cout<<endl;
	    }
	    t--;
	}
	return 0;
}