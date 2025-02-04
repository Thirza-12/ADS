#include<bits/stdc++.h>
using namespace std;
int waysToSplitArray(vector<int>& nums) {
    long sum=0;
    for(int i:nums)
    {
        sum+=i;
    }
    long pre=0;
    long count=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        pre+=nums[i];
        sum-=nums[i];
        if(pre>=sum)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int>arr={10,4,-8,7};
    int ans=waysToSplitArray(arr);
    cout<<ans<<endl;
    string s="java";
    cout<<s.size();
    return 0;
}