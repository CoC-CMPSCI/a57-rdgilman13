#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, sum;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	cout << "Enter the number of sequences: ";
	cin >> N;
	cout << n1 << "\t" << n2 << "\t";

	// TODO
	for (int i=0; i< N-2; i++){
		sum = n1 + n2;
		cout << sum << "\t";
		n1 = n2;
		n2 = sum;
	}
	// TODO
	cout << endl;
}
