#include <algorithm>
void sortZeroesAndOne(int input[], int size)
{
    int i=0,j=size-1;
    while(i<j){
        if(input[i]==1 && input[j]==0){
            swap(input[j],input[i]);
            i++;
            j--;
        }
        else if(input[i]==0 && input[j]==1){
            i++;
            j--;
        }
        else if(input[i]==0){
            i++;
        }
        else{
            j--;
        }
        
    }
    
}