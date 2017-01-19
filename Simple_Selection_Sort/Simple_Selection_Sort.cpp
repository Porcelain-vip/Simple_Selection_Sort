#include<iostream>

template<typename Type>
void SimpleSelectionSort(Type a[], int n)
{
	for (int i = 0; i != n - 1; ++i)
	{
		int index = i;
		for (int j = i + 1; j != n; ++j)
			if (a[index] > a[j]) index = j;
		std::swap(a[i], a[index]);
	}
}

int main()
{
	using std::cin; using std::cout; using std::endl;
	int a[10];
	cout << "Please enter 10 numbers as you want: ";
	for (auto &i : a) cin >> i;
	SimpleSelectionSort<int>(a, 10);
	cout << "Low-to-High: ";
	for (auto&i : a) cout << i << "   "; cout << endl;
	return 0;
}