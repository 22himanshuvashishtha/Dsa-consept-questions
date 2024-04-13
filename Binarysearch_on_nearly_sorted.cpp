// Source: https://usaco.guide/general/io
#include <bits/stdc++.h>
using namespace std;

void search(vector<int>& v,int t){
    int l=0;
    int h=v.size()-1;
	int mid=0;
    while(l<=h){
		mid=(l+h)/2;
		if(v[mid]==t){
			cout<<mid;
			break;
			}
		if(mid-1>0 && v[mid-1]==t){
			cout<<mid-1;
			break;
		}
		if(mid+1>v.size() && v[mid+1]==t){
			cout<<mid+1;
			break;
		}
		else if(v[mid]<t){
			l=mid+2;
		}
		else if(v[mid]>t){
			h=mid-2;
		}
	}
	cout<<"Element not found babu";
}
int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	int no;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
    int t;
	cin>>t;
	search(v,t);
}
