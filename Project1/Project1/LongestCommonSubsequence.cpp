#include "forward.h"


// Dynamic Programming
int longestCommonSubsequence(std::string seq1, std::string seq2)
{
	
	std::vector<std::vector<int>> vArray;
	for (int i = 0; i < seq1.size() + 1; i++) {
		vArray.push_back(std::vector<int>(seq2.size() + 1, 0));
	}

	int max = 0;
	for(int i = 1; i < vArray.size(); i++){
		for (int j = 1; j < vArray[i].size(); j++) {
			if (seq1[i - 1] == seq2[j - 1]) {
				vArray[i][j] = 1 + vArray[i - 1][j - 1];
			}
			else
			{
				vArray[i][j] = std::max(vArray[i][j - 1], vArray[i - 1][j]);
			}
			if (vArray[i][j] > max) {
				max = vArray[i][j];
			}
		}
	}
}
