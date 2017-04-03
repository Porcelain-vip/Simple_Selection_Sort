#include<iostream>//所有的选择排序都是不稳定的
#include<ctime>
using namespace std;

template<typename Type>
void SimpleSelectionSort(Type* a, int n)
{
	for (int i = 0; i != n - 1; ++i)
	{
		int low = i;
		for (int j = i + 1; j != n; ++j)
			if (a[low] > a[j]) low = j;
		swap(a[i], a[low]);
	}
}

int main()
{
	int a[1000];
	srand(static_cast<unsigned>(time(0)));
	for (auto& val : a) val = rand();
	double starttime = clock();
	SimpleSelectionSort<int>(a, 1000);
	double endtime = clock();
	double secs = (endtime - starttime) / CLOCKS_PER_SEC;
	cout << "Low-to-High: " << endl;
	for (auto& val : a) cout << val << "   "; cout << endl;
	cout << "Time that SimpleSelectionSort method spends: " << secs << endl;
	return EXIT_SUCCESS;
}