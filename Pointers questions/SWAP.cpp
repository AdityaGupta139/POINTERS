#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int* ptr=&x;
    int* ptr2=&y;
    swap(&x,&y);
    cout<<x<<" "<<y;

}