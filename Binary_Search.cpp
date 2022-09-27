// First and last position (index) of element in sorted array

#include<iostream>
#include <vector>
using namespace std;
 
int firstPosition(int arr[], int n, int key ) 
{
    int ans= -1;
    int start = 0;
    int end = n-1;
        int mid = start+(end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {   
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int lastPosition(int arr[], int n, int key ) 
{
    int ans= -1;
    int start = 0;
    int end = n-1;
        int mid = start+(end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {   
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int arr[8] ={1,2,3,3,3,3,4,5};

    int first = firstPosition(arr, 8, 3);
    int last = lastPosition(arr, 8, 3);

    cout<<"first occurence: "<<first<<endl;
    cout<<"last occurence: "<<last<<endl;
        return 0; 
}