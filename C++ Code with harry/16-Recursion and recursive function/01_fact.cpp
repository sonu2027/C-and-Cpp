#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
    return 0;
}