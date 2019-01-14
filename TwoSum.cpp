//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum(2);
        for( int i = 0; i < nums.size(); i++){
            for( int j = 1; j < nums.size(); j++){
                if( nums[i] + nums[j] == target ){
                    sum.at(0) = i;
                    sum.at(1) = j;
                    return sum;
                }
            }
        }
        return sum;
    }
};
