#include <bits/stdc++.h>
using namespace std;

bool sumniklnah(int arr[],int ttlsum,int n){
  //in-built size function can't be used---whether array string in cpp
  //But it is possible in java
   sort(arr, arr + n);
  int i = 0, j = n - 1;
  while (i < j)
  {
     if (ttlsum == arr[i] + arr[j])
     {
        return true;
     }

     else if (ttlsum > arr[i] + arr[j])
        i++;
     else
        j--;
   }


   return false;
}



int main(){

int n=5;
int arr[100];
for(int i=0;i<n;i++){
   cin>>arr[i];
}
int ttlsum=4;int i;

//brute approach
//   for( i=0;i<n;i++){
//    int j;
//      for( j=i+1;j<n;j++){
//         if(arr[i]+arr[j]==ttlsum){
//             cout<<"yes we got the sum"<<" ";
//             break;
//         }
//      }
//      if(j<n){
//         break;
//      }
//   }
// if(i==n)cout<<"we dont't get the ans";
   
   //optimized approach 
 n = sizeof(arr) / sizeof(arr[0]);
   cout<<n<<endl;
     if(sumniklnah(arr,ttlsum,n)){
     cout << "yes we got the sum"
          << " ";
     }
     else
     cout << "we dont't get the ans";

    return 0;
}