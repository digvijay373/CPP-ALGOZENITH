#include<bits/stdc++.h>
using namespace std;

int main()
{
	multiset<int> mst;
	
	int n,k;
	cin>>n>>k;
	int arr[n];

	for(int i=0; i<n;i++)
	{
		cin>>arr[i];

	}

	for(int i=0; i<k;i++)
	{
		mst.insert(arr[i]);
        
	}
	cout<<*mst.begin()<<" ";
	for(int i=k; i<n;i++)
	{
      
      mst.insert(arr[i]);
      mst.erase(mst.find(arr[i-k]));
      cout<<*mst.begin()<<" ";
	}
	

}