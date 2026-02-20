#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;   // value -> index
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)  // fixed: nums.size()
        { 
            int first = nums[i];
            int second = target - first;

            if(m.find(second) != m.end()) {   // if partner exists
                ans.push_back(m[second]);     // partner index
                ans.push_back(i);             // current index
                return ans;
            }

            m[first] = i; // store current value with index
        }

        return ans; // empty if no solution
    }
};
