class Solution {
        public:
                bool hasDuplicate(std::vector<int>& nums) {
                        std::unordered_set<int> seen;
                        for (auto it = nums.begin(); it != nums.end(); ++it) {                      
                                if (seen.count(*it))
                                        return true;
                                seen.insert(*it);
                        }
                        return false;
                }
};
