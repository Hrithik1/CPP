Ques: Find the maximum element of array.

Solution:

#include <iostream>
using namespace std;

int main() {
    int size;
    cin>>size;
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int maxEle = -(int)1e8;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i] > maxEle)
        {
            maxEle = arr[i];
        }
    }
    cout<<maxEle;
    
    return 0;
}