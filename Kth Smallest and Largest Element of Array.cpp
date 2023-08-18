#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int> ans;
	// sort(arr.begin(),arr.end());
	// ans.push_back(arr[k-1]);
	// ans.push_back(arr[n-k]);
	// return ans;
	priority_queue<int>pq;
	priority_queue<int,vector<int>,greater<int>>qp;
	for(int i=0;i<n;i++)
	{
		pq.push(arr[i]);
		qp.push(arr[i]);
		if(pq.size()>k and qp.size()>k)
		{
			pq.pop();
		    qp.pop();
		}
	}
	
	
	
	ans.push_back(pq.top());
	ans.push_back(qp.top());
	return ans;
	
}
