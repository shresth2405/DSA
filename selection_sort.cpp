#include <iostream>
using namespace std;
#include <vector>

vector<int> sort(vector<int> &arr){
    int n=arr.size();
    for(int i=0; i<n; i++){
        int min=i;
        for (int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    return arr;
}
void PrintArray(vector<int> &arr){
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    cout<<"Hello World"<<endl;
    vector <int> arr={1,2,35,4,25,36};
    PrintArray(arr);
    sort(arr);
    PrintArray(arr); 
    return 0;
}