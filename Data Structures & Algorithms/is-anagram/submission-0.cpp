class Solution {
        public: bool isAnagram(std::string s, std::string t) {
                        if (s.length() != t.length())
                                return false;
                        std::sort(s.begin(), s.end());
                        std::sort(t.begin(), t.end());

                        int i = 0;
                        while (i < s.size())
                        {
                                if (s[i] != t[i])
                                        return false;
                                i++;
                        }
                        return true;
                }
};