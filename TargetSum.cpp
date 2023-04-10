#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
        
        public:

        void swap(vector<int>&a,int x,int y)
        {
            int temp=a[x];
            a[x]=a[y];
            a[y]=temp;
        }

        int partition(vector<int>&nums,int start,int end)
        {
            int pivot=nums[start];
            int count=0;
            for(int i=start+1;i<=end;i++)
            {
                if(nums[i]<=pivot) count++;
            }
            int idx=start+count;
            swap(nums,start,idx);
            int i=start;
            int j=end;
            while(i<idx && j>idx){
            while(nums[i]<=pivot) i++;;

            while(nums[j]>=pivot) j--;

            if(i<idx && j>idx) 
            {
                swap(nums,i,j);
                i++;j--;
            
             }
            }
            return idx;
        }
        
        void Quicksort(vector<int>&nums,int start,int end)
        {
            if(start>=end) return ;
            int idx;
            idx=partition(nums,start,end);
            Quicksort(nums,start,idx-1);
            Quicksort(nums,idx+1,end);
        }

        vector<int>TargetSum(vector<int>&nums,int target)
        {
        
            int start=0;
            int end=nums.size()-1;

            while(start<end)
            {
                if(nums[start]+nums[end]==target)
                {
                    return {nums[start],nums[end]};
                }
                else if(nums[end]>=target) end--;
                else start++;
            }
        
        return{};
        }
    

};

int main()
{
    Solution obj;
   vector<int> nums={4,28,97,40,12,72,84,24,38,10};
    int start=0;
    int end=nums.size()-1;
    obj.Quicksort(nums,start,end);  //first sort in nlogn complexity
    vector<int> ans=obj.TargetSum(nums,50); //find answer in n complexity

    if(ans.size()==0) cout<<"No Such Element Exists";

    for(auto x:ans)
    {
        cout<<x<<" ";
    }

    
    return 0;
}