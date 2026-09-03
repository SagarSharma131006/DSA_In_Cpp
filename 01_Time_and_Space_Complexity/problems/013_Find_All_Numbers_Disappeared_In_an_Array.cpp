// LeetCode #448 - Find All Numbers 
// Disappeared in an Array
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Negative Marking
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;   // value ko index me convert karo
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];   // mark karo negative karke
            }
        }
        
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);  // jo positive bacha, wahi missing hai
            }
        }
        return result;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1) auxiliary space
*/




//  ---------------------2nd Approach-----------------------------
// LeetCode #448 - Find All Numbers Disappeared in an Array
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Hash Set
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());  // saare numbers set me daal do, duplicates auto-remove
        
        vector<int> result;
        for (int i = 1; i <= nums.size(); i++) {
            if (st.find(i) == st.end()) {   // agar i set me nahi mila, matlab missing hai
                result.push_back(i);
            }
        }
        return result;
    }
};
/*
Time Complexity: O(n) average
Space Complexity: O(n)
*/
