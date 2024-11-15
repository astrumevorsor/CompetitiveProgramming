#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int reference;
    reference= arr[n/2];
    if (reference ==x) {
        cout<<"Found"<<endl;
    }
    else{
        if (reference < x) {
            for (int i=0;i<n/2;i++){
                if (arr[i]==x){
                    cout<<"Found"<<endl;
                    break;
                }
            }
        }
        else{
            for (int i=n/2;i<n;i++){
                if (arr[i]==x){
                    cout<<"Found"<<endl;
                    break;
                }
            }
        }
    }
    /* Alternative approach
    function binarySearch(arr, x):
    left = 0
    right = arr.length - 1
    
    while left <= right:
        mid = (left + right) / 2  // Integer division, rounds down
        
        if arr[mid] == x:
            return true  // x found
        else if arr[mid] < x:
            left = mid + 1  // Look in the right half
        else:
            right = mid - 1  // Look in the left half
    
    return false  // x not found
    */
    return 0;
}