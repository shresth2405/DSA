#include <iostream>
using namespace std;



void MinMax(int arr[],int size){
    int min=arr[0];
    int max=arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        
    }
    cout<<"Min:"<<min<<endl;
    cout<<"Max:"<<max<<endl;
}



int main(){
    cout<<"Hello World"<<endl;
    int arr[9]={1,7,8,9,0,3,4,14,16};
    MinMax(arr,9);

    
    return 0;
}