#include <iostream>
using namespace std;
#include <algorithm>


void Printarray(int * arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void sort012(int *arr, int n) {
  int zeropos=0,current=0;
  int twopos=n-1;
  while(current <= twopos){
    if(arr[current]==0){
      swap(arr[current],arr[zeropos]);
      zeropos++;
      current++;
    }
    else if(arr[current]==2){
      swap(arr[current],arr[twopos]);
      twopos--;
    }
    else{
      current++;
    }
  }
}
int main(){
    cout<<"Hello World"<<endl;
    int arr[]={0,1,0,2,1,2,0};
    Printarray(arr,7);
    sort012(arr,7);
    Printarray(arr,7);
    return 0;
}