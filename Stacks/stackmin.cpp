
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){
       int qt;
       cin>>qt;
       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty()){
      return -1; 
   }
   else{
      return minEle;
   }
}
/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   int temp = s.top();
   s.pop();
   if(temp>minEle){
       return temp;
   }
   else{
       stack <int> x = s;
       int newmin = x.top();
       while(!x.empty()){
           if(x.top()<newmin){
               newmin = x.top();
           }
           x.pop();
       }
       minEle = newmin;
       return temp;
   }
}
/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty()){
       s.push(x);
       minEle = x;
   }
   else{
       if(x<minEle){
           minEle = x;
       }
       s.push(x);
   }
}