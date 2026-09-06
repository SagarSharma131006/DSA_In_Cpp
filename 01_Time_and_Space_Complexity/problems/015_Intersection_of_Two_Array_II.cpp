// LeetCode #350 - Intersection of Two Arrays II
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Sorting + Two Pointers
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0, j = 0;
    vector<int> result;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) i++;
        else if (nums1[i] > nums2[j]) j++;
        else {
            result.push_back(nums1[i]);
            i++; j++;
        }
    }
    return result;
    }
};
/*
Time Complexity: O(n log n + m log m)
Space Complexity: O(1) auxiliary space
*/


//-------------2nd Approach-------------
// LeetCode #350 - Intersection of Two Arrays II
// Difficulty: Easy
// Topic: Time & Space Complexity
// Approach: Hash Map + Frequency Counting
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        for (int num : nums1) {
            freq[num]++;              // nums1 ke har element ki frequency count karo
        }
        
        vector<int> result;
        for (int num : nums2) {
            if (freq[num] > 0) {      // agar nums1 me abhi bhi available hai
                result.push_back(num);
                freq[num]--;          // use kar liya, to count ghata do (dobara na use ho)
            }
        }
        return result;
    }
};
/*
Time Complexity: O(n + m) average
Space Complexity: O(n)
*/
