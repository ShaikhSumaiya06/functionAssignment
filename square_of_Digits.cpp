#include<iostream>
using namespace std;

int square_Digits(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<"no. of digits : "<<count<<endl;
    cout<<"square of counted digits : "<<count*count<<endl;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    square_Digits(n);
}