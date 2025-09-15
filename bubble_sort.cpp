#include <iostream>
#include <windows.h>
using namespace std;
const int N = 5;

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a[N];

    cout << N << "개의 숫자를 입력하세요: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    BubbleSort(a, N);

    cout << "\n정렬 결과:\n";
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    system("pause");
    return 0;
}