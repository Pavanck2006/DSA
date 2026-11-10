class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        sort(arr2.begin(),arr2.end());
        for(int x : arr1)
        {
            int left = 0;
            int right = arr2.size()-1;
            bool isFar=true;
            while(left<=right)
            {
                int mid = left+(right-left)/2;
                if(arr2[mid]<x-d)
                {
                    left = mid+1;
                }
                else if(arr2[mid]>x+d)
                {
                    right = mid-1;
                }
                else
                {
                    isFar = false;
                    break;
                }
            }
            if(isFar)
            {
                count++;
            }
        }
        return count;
    }
};