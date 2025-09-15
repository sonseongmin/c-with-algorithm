//#include <stdio.h>
//#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;
const int N = 5;
double time_start;

void SelectionSort(int a[], int N);

void SelectionSort(int a[], int N) {
    int i, j, min;
    for (i=0; i < N; i++) {
        min = i;
        for (j = i + 1; j < N; j++) {
            if (a[j] < a[min]) min = j;
            cout << "min = " << min << " ,j= " << j<<" ";
        }
        cout << "j=" << j << endl;
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    };
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    SelectionSort(a, N);

    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    system("pause");
    return 0;
}

