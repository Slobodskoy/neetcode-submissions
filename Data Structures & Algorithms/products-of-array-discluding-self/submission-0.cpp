class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size());
        pref[0] = nums[0];
        vector<int> suff(nums.size());
        suff[suff.size() - 1] = nums[suff.size() - 1];
        for (int i = 1; i < nums.size(); i++) 
            pref[i] = pref[i - 1] * nums[i];
        for (int i = nums.size() - 2; i >= 0; i--) 
            suff[i] = suff[i + 1] * nums[i];

        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int l = 1, r = 1;
            if (i > 0) l = pref[i - 1];
            if (i < nums.size() - 1) r = suff[i + 1];
            result[i] = l * r;
        }

        return result;
    }
};
