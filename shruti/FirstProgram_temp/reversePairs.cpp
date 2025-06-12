#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Merge sort helper function to count reverse pairs
    int mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) return 0; 
        int mid = left + (right - left) / 2;
        int count = 0;
        count += mergeSort(nums, left, mid);
        count += mergeSort(nums, mid + 1, right);

        // Count cross reverse pairs
        int j = mid + 1;
        for (int i = left; i <= mid; ++i) {
            while (j <= right && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Merge the two sorted halves
        vector<int> temp;
        int i = left;
        j = mid + 1;

        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }

        while (i <= mid) temp.push_back(nums[i++]);
        while (j <= right) temp.push_back(nums[j++]);
        for (int k = 0; k < temp.size(); ++k) {
            nums[left + k] = temp[k];
        }

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {6, 4, 1, 2, 7};
    vector<int> nums2 = {5, 4, 4, 3, 3};

    cout << "Output for [6, 4, 1, 2, 7]: " << sol.reversePairs(nums1) << endl;  
    cout << "Output for [5, 4, 4, 3, 3]: " << sol.reversePairs(nums2) << endl;  

    return 0;
}
