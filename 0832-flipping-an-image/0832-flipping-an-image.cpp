class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++ )
        {
            vector<int>level;
            for(int j=0;j<n;j++)
            {
                level.push_back(image[i][j]);
            }
            reverse(level.begin(),level.end());
            ans.push_back(level);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ans[i][j]==1)
                {
                    ans[i][j]=0;
                }
                else
                {
                    ans[i][j]=1;
                }
            }
        }
        return ans;
        
    }
};