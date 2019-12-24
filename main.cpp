#include<iostream>
#include<vector>
#include<algorithm>
#include "MaxHeap.h"

using namespace std;


//Q1:Write a quicksort algorithm to sort an array of fintegers
int Partition(vector<double> &Arr, int start, int end)
{
	double pivot = Arr[end];
	int pIndex = start;
	for (int i = start; i < end; ++i)
	{
		if (Arr[i] <= pivot)
		{
			swap(Arr[i], Arr[pIndex]);
			pIndex = pIndex + 1;
		}
	}
	swap(Arr[pIndex], Arr[end]);
	return pIndex;
}

void QuickSort(vector<double> &Arr, int start, int end)
{
	if (start < end)
	{
		int pIndex = Partition(Arr, start, end);
		QuickSort(Arr, start, pIndex - 1);
		QuickSort(Arr, pIndex + 1, end);
	}
}


void main()
{
	//Example Array
	vector<double> Arr = {100,101,8,99,10,6,2,1 };

	//Q1 Quick Sort result:
	cout << "Q1 : quick sort is applied on the example array:{100,101,8,99,10,6,2,1 }, and we got: " << endl;
	auto Arr2 = Arr;
	QuickSort(Arr2, 0, Arr2.size() - 1);
	vector<double>::iterator it;
	for (it = Arr2.begin(); it != Arr2.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;




	//Q2: Max_heap
	int n, i;
	cout << "Q2: we are testing Max Heap, please enter a size: \n";
	cin >> n;
	int a[20];
	for (i = 1; i <= n; i++)
	{
		cout << "This is Q2 and we are testing Max Heap, please enter elements " << (i) << endl;
		cin >> a[i];
	}
	max_heap result;
	result.add_maxheap(a, n);
	cout << "This is Q2 Max Heap and the result is : \n";
	for (i = 1; i <= n; i++)
	{
		cout << a[i] << endl;
	}
	system("PAUSE");
}