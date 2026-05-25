class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        /*int n=image.size();
        vector<int>temp;
        vector<vector<int>>ans(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            int j=n-1;
            while(j>=0)
            {
             temp.push_back(image[i][j]);
             j--;
            }
           ans[i]=temp;// it self act as the single vector
           // if you access the elemnt with 2d array it work as to arry in this case not possible push condition
            temp.clear();
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
        return ans;*/
        int n=image.size();
        for(int i=0;i<n;i++)
        {
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<n;j++)
            {
               image[i][j] ^= 1;// it convert o to 1 and 1 to 0
            }
        }
        return image;


    }
};