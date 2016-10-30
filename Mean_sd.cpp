# include <iostream>
# include <math.h>

using namespace std;


int main(int argc, char argv[]) {
	int arr_size;
	cout << "Enter array size" << '\n';
	cin >> arr_size;
	int *sam_arr = new int[arr_size];
	double mean = 0;
	double sq_mean = 0;
	cout << "Enter the array" << '\n';
	for (int i = 0; i < arr_size; i++) {
		cin >> *(sam_arr + i);
		mean = ((mean *i) + *(sam_arr + i)) / (i + 1);
		cout << "Mean is: " << mean << '\n';
		sq_mean = (sq_mean*i + *(sam_arr + i)**(sam_arr + i)) / (i + 1);
		if (i == 0)
			cout << "Standard deviation is: " << 0 << '\n';
		else {
			double sd = sqrt((i + 1)*(sq_mean - mean*mean) / i);
			cout << "Standard deviation is: " << sd << '\n';
		}
	}
	delete[] sam_arr;
}