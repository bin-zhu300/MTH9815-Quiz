#pragma once
#include<vector>
#include<iostream>
#include<conio.h>

using namespace std;

//Q2: Write a MaxHeap class
class max_heap {
public:
	void max_heapify(int *arr, int i, int n)
	{
		int j, temp;
		temp = arr[i];
		j = 2 * i;
		while (j <= n)
		{
			if (j < n && arr[j + 1] > arr[j])
				j = j + 1;
			if (temp > arr[j])
				break;
			else if (temp <= arr[j])
			{
				arr[j / 2] = arr[j];
				j = 2 * j;
			}
		}
		arr[j / 2] = temp;
		return;
	}
	void add_maxheap(int *arr, int n)
	{
		int i;
		for (i = n / 2; i >= 1; i--)
		{
			max_heapify(arr, i, n);
		}
	}
};


