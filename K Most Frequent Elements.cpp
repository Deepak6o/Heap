#include<bits/stdc++.h>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto x: mp)
    {
        pq.push({x.second, x.first});
    }
    for(int i=0;i<k;i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;

}
