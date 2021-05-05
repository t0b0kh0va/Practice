
class Solution {
public:
	int minSteps(string s, string t) {
		std::vector<int> freq(26,0);
		for (int i = 0; i < s.size(); i++) {
			freq[s[i] - 'a']++;
			freq[t[i] - 'a']--;
		}
		int count = 0;
		for (auto i: freq) {
            if (i > 0)
            {
			    count += i;
            }
		}
		return count;
	}
};
