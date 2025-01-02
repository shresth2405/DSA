#include <iostream>
using namespace std;

int Sum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}

int main(){
    cout<<"Hello World"<<endl;
    int arr[]={1,3,2,4,5,6};
    cout<<"Sum of all elements in an array:"<<Sum(arr,6)<<endl;
    
    return 0;
}