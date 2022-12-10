//
// Created by eric on 2022/12/9.
//
#include "iostream"
using namespace  std;

#include "vector"
#include "map"




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
        vector<int> res ;
    }
};
int main(){
    Solution s;
    vector<int> v = {2,7,11,15} ;
    vector<int > res =  s.twoSum(v , 9);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}
