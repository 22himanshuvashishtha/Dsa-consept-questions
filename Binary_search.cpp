#include<bits/stdc++.h>
using namespace std;

int search(int a[],int n,int f){
    
    int start=0;
    int end=n-1;
    int mid=0;
    for(int i=0;start<=end;i++){
        mid=(start+end)/2;
        if(a[mid]==f){
            return mid;
        }
        else if(a[mid]<f){
            start=mid+1;
        }
        else if(a[mid]>f)
        end=mid-1;
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f;
    cin>>f;
    int r=search(a,n,f);
    if(r==-1)cout<<"element not found";
    else 
    cout<<"Element found at position :"<<r;
}
