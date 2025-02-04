#include<bits/stdc++.h>
using namespace std;
int makeGardenBeautiful(vector<int>&arr){
    int n=arr.size();
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    if(arr[0]==maxi || arr[n-1]==maxi){
        if(arr[0]==maxi){
            maxi=-1;
            for(int i=1;i<n;i++){
                maxi=max(arr[i],maxi);
            }
            return arr[0]+maxi;
        }
        else{
            maxi=-1;
            for(int i=0;i<n-1;i++){
                maxi=max(arr[i],maxi);
            }
            return arr[n-1]+maxi;
        }
    }
    return maxi+max(arr[0],arr[n-1]);
}
int main()
{
    vector<int> arr={2,7,3,1};
    cout<<makeGardenBeautiful(arr);
    return 0;
}