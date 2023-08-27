#include<iostream>
using namespace std;
float area(float r){
    float pi=3.1415, area;
    area=pi*r*r;
    return area;
}
int main(){
    float r;
    cout<<"Enter the radius : ";
    cin>>r;
    cout<<"circle area of radius "<<r<<" : "<<area(r)<<endl;

}