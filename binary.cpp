#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &input,int target)
{
    int low=0;
    int high=input.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if (input[mid]==target)
        {
            return mid;
        }
        else if(input[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;

        }
    }
    return -1;
}

int main()
{
    vector<int>input;
    int n;
    cout<<" enter the number of element:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
      int element;
      cin>>element;
      input.push_back(element);
    }
    int target;
    cout<<" enter the target elemnt to search : ";
    cin>>target;
    int ans =binary_search(input,target);
    if (ans>=0)
    {
        cout<<" yes element found : "<<input[ans]<<" at index "<< ans;
    }
    else{
        cout<<" element not found : "<<ans;
    }
}