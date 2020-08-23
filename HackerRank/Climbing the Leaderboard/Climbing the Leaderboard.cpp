// https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
#include <bits/stdc++.h>

using namespace std;

int bs(vector<int> &scores, int score) {
	int low = 0, high = scores.size() - 1, mid;
	int ans = -1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (scores[mid] <= score) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return ans;
}
int main() {
	int scores_size, aliceScores_size, temp;
	vector<int> scores;
	scanf("%d", &scores_size);
	for (int i = 0; i < scores_size; i++) {
		scanf("%d", &temp);
		if (scores.empty() || scores.back() != temp) {
			scores.push_back(temp);
		}
	}
	scanf("%d", &aliceScores_size);
	// for (int i  : scores){
	// 	cout<<i<<endl;
	// }
	for (int i = 0; i < aliceScores_size; i++) {
		scanf("%d", &temp);
		int ans = bs(scores, temp);
		if(ans == -1){
			printf("%d\n",scores.size()+1);
		} else {
			printf("%d\n",ans+1);
		}
	}
}