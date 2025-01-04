#include <iostream>
using namespace std;

int pivot(int* arr, int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[e]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return s;

}

int main(){
    cout<<"Hello World"<<endl;
    int arr[]={15,16,17,18,1,2,3};
    int a= pivot(arr,7);
    cout<<a<<endl;
    return 0;
}