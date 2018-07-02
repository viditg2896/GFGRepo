
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++

//Naive Approach - uses 3 extra queues and a stack
queue<ll> modifyQueue(queue<ll> q, int k)
{
    //Function to reverse first k elements of Queue
    queue <ll> temp1;
    while(!q.empty()){
        temp1.push(q.front());
        q.pop();
    }
    queue <ll> temp2;
    stack <ll> foo;
    int holder = k;
    while(holder){
        foo.push(temp1.front());
        temp1.pop();
        holder--;
    }
    while(!foo.empty()){
        temp2.push(foo.top());
        foo.pop();
    }
    queue <ll> res;
    while(!temp2.empty()){
        res.push(temp2.front());
        temp2.pop();
    }
    while(!temp1.empty()){
        res.push(temp1.front());
        temp1.pop();
    }
    return res;
}
//Better Approach - uses only a stack
queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack <ll> foo;
    int holder = k;
    int temp = q.size()-k;
    while(holder){
        foo.push(q.front());
        q.pop();
        holder--;
    }
    while(!foo.empty()){
        q.push(foo.top());
        foo.pop();
    }
    queue <ll> res;
    while(temp){
        holder = q.front();
        q.pop();
        q.push(holder);
        temp--;
    }
    return q;
}