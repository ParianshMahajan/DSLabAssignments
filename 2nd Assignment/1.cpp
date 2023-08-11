#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array :: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array :: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the Target :: "<<endl;
    cin>>target;

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]>=target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }



    return 0;
}