class Solution {
        public: bool isAnagram(std::string s, std::string t) {
                        if (s.length() != t.length())
                                return false;
                        int arr[256] = {0};
                        for (int i = 0; i < s.size(); i++) {
                                int ascii_value = (int)s[i];
                                arr[ascii_value] += 1;

                                int ascii_value1 = (int)t[i];
                                arr[ascii_value1] -= 1;
                        }
                        for (int count : arr) {
                            if (count != 0)
                                return false;
                        }
                        return true;
                }
};