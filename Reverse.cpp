#include <iostream>
using namespace std;

void Print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }   
    cout<<endl;
}

void Reverse(int arr[], int n){
    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i],arr[n-i-1]);
            // int temp=arr[i];
            // arr[i]=arr[n-i];
            // arr[n-i]=temp;
    }
    

}

int main(){
    cout<<"Hello World"<<endl;
    int arr[6]={1,2,3,4,6,7};
    Print(arr,6);
    Reverse(arr,6);
    Print(arr,6);


    return 0;
}