//function template 
#include<iostream>
using namespace std;
template <class t>
t find index(ta,tb){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    cout<<"max of integers:"<<find max(10,20)<<endl;
    cout<<"max of floats:"<<find max(5.5f,3.2f)<<endl;
    cout<<"max of character:"<<find max('a','z')<<endl;
}
