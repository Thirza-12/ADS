#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr){
    unordered_map<int,int>mp;
    int sum=0;
    int maxlen=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0)
        {
            maxlen=i+1;
        }
        else if(mp.count(sum)!=0){
            maxlen=max(maxlen,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
    }
    return maxlen;
}
int main()
{
    vector<int>arr={5,2,-1,1,4};
    cout<<func(arr);
    return 0;
}