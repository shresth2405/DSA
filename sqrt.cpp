int floorSqrt(int n)
{
    int s=0;
    int e=n;
   long int mid=s+(e-s)/2;
   while(s<e){
       if(((mid)*(mid))<=n && ((mid+1)*(mid+1))>n){
           return mid;
       }
       else if((mid*mid)>n){
           e=mid-1;
       }
       else{
           s=mid+1;
       }
       mid=s+(e-s)/2;
   } 
}
