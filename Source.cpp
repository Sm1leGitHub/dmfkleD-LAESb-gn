#include <iostream>
using namespace std;
int main() {
	/*7
	int N;
	int sum = 0;
	float a;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		a = round(a);
		cout << ':' << a;
		sum += a;
	}
	cout << endl<<sum;*/

	/*8
	int N,a;
	int k = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		if (a % 2 == 0) {
			cout << "chet = "<<a;
			k++;
		}
	}
	cout << k;*/

	/*9
	int N, a;
	int k = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		if (a % 2 != 0) {
			cout << "No."<<i;
			k++;
		}
	}
	cout << k;*/

	/*10
	int N, a;
	int k = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		if (a > 0) {
			k++;
		}
	}
	bool c = k > 0;
	cout << boolalpha << c;*/

	/*11
	int N, a,K;
	int k = 0;
	cin >> N>>K;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		if (a < K) {
			k++;
		}
	}
	bool c = k > 0;
	cout << boolalpha << c;*/


	/*12
	int a = 1;
	int k = 0;
	while (a != 0) {
		cin >> a;
		k++;
	}
	cout << k;*/

	/*13
	int a = 1;
	int k = 0;
	int sum = 0;
	while (a != 0) {
		cin >> a;
		if (a % 2 == 0 && a > 0) {
			sum += a;
			k++;
		}
	}
	if (k > 0) {
		cout << sum;
	}
	else {
		cout << 0;
	}*/

	/*14
	int a = 1;
	int K;
	int k = 0;
	cin >> K;
	while (a != 0) {
		cin >> a;
		if (a < K) {
			k++;
		}
	}
	cout << k;*/
}