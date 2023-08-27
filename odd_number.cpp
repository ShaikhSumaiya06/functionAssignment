#include<iostream>
using namespace std;

void printOddNumber(int a,int b){
    if(a>b){
        printOddNumber(b,a);
        // return;
    }
    for(int i=a;i<=b;i++){
        if(i % 2 != 0) cout<<i<<" ";
    }
}
int main(){
    int x,y;
    cout<<"Enter 1st no. : ";
    cin>>x;
    cout<<"Enter 2nd no. : ";
    cin>>y;
    printOddNumber(x,y);
   
}