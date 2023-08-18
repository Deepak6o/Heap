#include<bits/stdc++.h>
vector<int>MinToMaxHeap(int n, vector<int>&arr)
{
	// Write your code here.
	// vector<int>ans;
	// priority_queue<int> pq;
	// for(int i=0;i<n;i++)
	// {
	// 	pq.push(arr[i]);
	// }
	// while(pq.size()>0)
	// {
	// 	ans.push_back(pq.top());
	// 	pq.pop();
	// }
	// return ans;
	sort(arr.begin(),arr.end(),greater<int>());
	return arr;
}
