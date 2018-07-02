
#include<bits/stdc++.h>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
int tour(petrolPump [],int );
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p,n)<<endl;
    }
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/
/*You are required to complete this method*/
int check1(int a,int b){
    if(a<b){
        return -1;
    }
    else
        return 1;
}

int tourcheck(petrolPump p[],int n,int index){
    int i,flag=1;

    
        int currPetrol = 0;
        int currDistance = 0;
        queue <int> petrol;
        queue <int> distance;
        for(i=index;i<n;i++){
            petrol.push(p[i].petrol);
            distance.push(p[i].distance);
        }
        for(i=0;i<index;i++){
            petrol.push(p[i].petrol);
            distance.push(p[i].distance);
        }
        if(check1(petrol.front(),distance.front())==-1){
                return -1;
        }
        while(!distance.empty()){
            currPetrol = currPetrol + petrol.front();
            petrol.pop();
            currDistance += distance.front();
            currPetrol = currPetrol - distance.front();
            distance.pop();
            if(currPetrol<0){
                flag = -1;
                break;
            }
        }
        //cout<<currDistance<<endl;        
        return flag;
}
int tour(petrolPump p[],int n)
{
   //Your code here
   int flag=-1;
   for(int i=0;i<n;i++){
       //cout<<tourcheck(p,n,i)<<endl;
       if(tourcheck(p,n,i)!=-1){
           flag = i;
           break;
       }
   }
   return flag;
}