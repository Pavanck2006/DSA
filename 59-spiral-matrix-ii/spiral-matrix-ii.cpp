class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n,0));
   int srow=0,erow=n-1;
   int scol=0,ecol=n-1;
   int count=1;
   while(srow<=erow && scol<=ecol)
   {
    for(int i=scol;i<=ecol;i++)
    {
        mat[srow][i]=count++;
    }
    for(int j=srow+1;j<=erow;j++)
    {
        mat[j][ecol]=count++;
    }
    for(int i=ecol-1;i>=scol;i--)
    {
        if(srow==erow)
        break;
        mat[erow][i]=count++;
    }
    for(int j=erow-1;j>=srow+1;j--)
    {
        if(scol==ecol)
        break;
        mat[j][scol]=count++;
    }
    srow++;
    erow--;
    scol++;
    ecol--;
   }
   return mat;
    }
};