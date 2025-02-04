// Task for Today
// Dear students,  

// Your task for today is to solve the following problem:  

// Find the Closest Pair to Target (Medium)
// Given a sorted array, find two numbers whose sum is closest to but less than the target  

// Example:
// Input: arr = [1, 3, 5, 8, 10], target = 14
// Output: [5, 8] (because 5 + 8 = 13, which is the closest sum less than 14)  

// You are expected to utilize the two-pointer technique for this problem.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,3,5,8,10};
    int target=14;
    int start=0;
    int end=arr.size()-1;
    int sum=arr[0]+arr[1];
    int index1=0;
    int index2=1;
    while(start<end)
    {
        int currsum=arr[start]+arr[end];
        if(currsum-target>sum-target)
        {
            sum=currsum;
            index1=start;
            index2=end;
        }
        if(currsum<target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout<<index1<<" "<<index2<<" "<<sum;
    return 0;
}