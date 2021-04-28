class Solution {
public:
	int maximumProduct(vector<int>& nums) {
		if (nums.size() == 3)
			return std::accumulate(nums.begin(), nums.end(), 1, std::multiplies<int>());
		vector<int> mass = {};
		for (auto it = nums.begin(); it < nums.end(); it++)
		{
			if (mass.size() < 5 || mass.size() == 5 && (*it > mass[2] || *it < mass[3]))
			{
				mass.emplace_back(*it);
				std::sort(mass.begin(), mass.end(), std::greater<int>());
				if (mass.size() > 5)
				{
					mass.erase(mass.begin() + 3);
				}
			}
		}
		int max = mass[0] * mass[1] * mass[2];
		int min = mass[0] * mass[mass.size() - 1] * mass[mass.size() - 2];
		if (max < min)
			return min;
		return max;
	}
};
