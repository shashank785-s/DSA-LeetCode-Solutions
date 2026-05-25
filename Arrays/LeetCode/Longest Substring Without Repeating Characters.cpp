class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last;
        int maxLen = 0, left = 0;

        for (int right = 0; right < s.size(); right++) {
            if (last.count(s[right]) && last[s[right]] >= left)
                left = last[s[right]] + 1;
            last[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);

        }
        return maxLen;
    }
};
