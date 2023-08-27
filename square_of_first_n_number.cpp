#include<iostream>
using namespace std;
int square(int num){
    return num*num;
}
void first_n_squre(int n){
    for(int i=1;i<=n;i++){        
        cout<<"Squre of "<<i<<" : "<<square(i)<<endl;;
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    first_n_squre(n);
}