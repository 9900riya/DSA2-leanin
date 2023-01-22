// Main pts to remember working of sort 
// Contact list in phones eg. given in class.
//used mostly in online sorting
// one side is sorted ,other side is unsorted
//first el is always sorted thus start from i=1 index.
//Best time complexity=O(n) when array is sorted




#include <iostream>
using namespace std;
int main()
{
    // int arr[]={3,4,5,1,2};//o/p-->1 2 3 4 5
    // int n=sizeof(arr)/sizeof(n);
    // 3 4 5 1 2
    // int n=5;
    int n;
    int arr[100];
    cin >> n; // 5
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "before selectionsort  : " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // insertionsort sort
   for(int i=1;i<n;i++){
        int key = arr[i];
        int j;
         for (j = i - 1; j >= 0 && key < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
     arr[j+1]=key;
   }

    cout << "after selectionsort  : " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Time complexity = bigo of n^2