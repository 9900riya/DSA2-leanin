#include<iostream>
#include<climits>
using namespace std;

int main(){
    // brute approach
    //  int arr[5]={1,2,4,3,5};
    //  int n=5;int k=3;int maxsum=INT_MIN;
    //  for(int i=0;i<n-k+1;i++){
    //      int sum=0;
    //      for(int j=0;j<k;j++){
    //         sum=sum+arr[i+j];//7
    //      }
    //      if(maxsum<sum){
    //          maxsum=sum;//7
    //      }
    //  }
    //  cout<<maxsum;

    //optimized app

    int arr[5] = {1, 2, 4, 3, 5};
    int n = 5;
    int k = 3;int j=0,i=0;int sum=0;
    int maxsum = INT_MIN;
    while(j<n){
       sum=sum+arr[j];
       if(j-i+1<k){
        j++;
       }
       else if(j-i+1==k){
        if (maxsum < sum)
        {
            maxsum = sum; // 7
        }
        sum=sum-arr[i];
        i++;j++;
       }
    }
    cout<< maxsum;
    return 0;
}