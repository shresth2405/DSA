#include <iostream>
using namespace std;

bool Search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(key==arr[i]){
            return true;
        }
    }
    return false;

    
}

int main(){
    cout<<"Hello World"<<endl;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter the value of Key:";
    cin>>key;

    int index=Search(arr,10,key);
    if(index){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not Present";
    }

    
    return 0;
}