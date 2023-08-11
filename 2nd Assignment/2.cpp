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
   bool swapped=false; 
   for(int i=0;i<n-1;i++){
    swapped=false;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    }
    if(swapped==false){
        break;
    }
   }
    cout<<endl;
   for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }



    return 0;
}