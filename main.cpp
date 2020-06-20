// ConsoleApplication5.cpp : Defines the entry point for the console application.
//
//these code is done by biruk abere
//@copyright Sat March 21 2020
//#include "stdafx.h"
#include<iostream>
using namespace std;
int BinarySearch(int list[], int key, int n);
int main() {
	int n;
	cout << "please enter the Size of the array" << endl;
	cin >> n;
	int list[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter Element " << i + 1 << " ";
		cin >> list[i];
	}
	int k;
	cout << "please entet the key element " << endl;
	cin >> k;
	int i = BinarySearch(list, k ,n);
	if (i == -1)
		cout << "the searching element is not found" << endl;
	else
		cout << "the searching element found at the index" << i << endl;
}
int BinarySearch(int list[], int key , int n) {
	int found = 0, index = 0;
	int top = n - 1, bottom = 0, middle;
	do{
		middle = (top + bottom) / 2;
		if (key == list[middle])
			found = 1;
		else {
			if (key < list[middle])
				top = middle - 1;
			else
				bottom = middle + 1;

		}
	} while (found==0 && top>=bottom);

	if (found == 0) {
		index = -1;
		return index;
	}
	else {
		index = middle;
		return index;
 	}
}
