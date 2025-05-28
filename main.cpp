#include<iostream>
#include<vector>

using namespace std;

int sumFunction(vector<int> num) {
	int answer = 0;
	for (int i = 0; i < num.size(); i++) {
		answer += num[i];
	}
	return answer;
}

int main() {

	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	vector<int> num = { a,b,c,d,e };

	//ÇÕ°è
	int sum = a + b + c + d + e;
	//Æò±Õ
	float avg = sum / 5;

	cout << "ÇÕ°è : " << sum << "\nÆò±Õ : " << avg << sumFunction(num)<<endl;

	sumFunction(num);

	return 0;
}
