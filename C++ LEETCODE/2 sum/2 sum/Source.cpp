#include <iostream>
#include <vector>


std::vector<int> twoSum(std::vector<int>& nums, int target) {
	std::vector<int> result;
	for (int i = 0; i < nums.size(); i++) {
		for (int k = i + 1; k < nums.size(); k++) {
			if ((nums[i] + nums[k]) == target) {
				result.push_back(i);
				result.push_back(k);
				return result;
			}
		}
	}
}



int main() {
	std::vector<int> blah = {0,0,0,0,0,0,0,1,3,2,6};
	std::vector<int> resu;
	int tar = 8;
	resu =  twoSum(blah, tar);
	if (resu.size() == 2) {
		std::cout << resu[0] << " " << resu[1];
	}
	else {
		std::cout << "No answer";
	}
}