#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String :: ";
    cin>>s;
    int n=s.length();
   bool swapped=false; 
   for(int i=0;i<n-1;i++){
    swapped=false;
    for(int j=0;j<n-i-1;j++){
        if(s[j]>='A'&&s[j]<='Z'){
            if((char)(s[j]+32)>s[j+1]){
                swap(s[j],s[j+1]);
                swapped=true;
            }
            
        }
        else if(s[j+1]>='A'&&s[j+1]<='Z'){
            if(s[j]>(char)(s[j+1]+32)){
                swap(s[j],s[j+1]);
                swapped=true;
            }
        
        }
        else if(s[j+1]>='A'&&s[j+1]<='Z'&&s[j]>='A'&&s[j]<='Z'){
            if((char)(s[j]+32)>(char)(s[j+1]+32)){
                swap(s[j],s[j+1]);
                swapped=true;
            }
        
        }
        else{
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
                swapped=true;
            }
        }
    }
    if(swapped==false){
        break;
    }
   }
    cout<<"The Reversed String is :: "<<s;



    return 0;
}