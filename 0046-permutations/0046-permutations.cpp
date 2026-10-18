class Solution {
public:
void solve(vector<int>&nums,vector<int>&temp,vector<bool>&visited,vector<vector<int>>&ans)
{
    if(temp.size()==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(visited[i]==0)
        {
            temp.push_back(nums[i]);
            visited[i]=1;
            solve(nums,temp,visited,ans);
            temp.pop_back();
            visited[i]=0;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<bool>visited(n,0);
        vector<int>temp;
        solve(nums,temp,visited,ans);
        return ans;
    }
};