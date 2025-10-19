#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void ShellSort(int a[], int N)
{
    int i, j, h, v;
    for (h = 1; h < N / 3; h = 3 * h + 1);

    while (h > 0)
    {
        for (i = h; i < N; i++)
        {
            v = a[i];
            j = i;

            while (j >= h && a[j - h] > v)
            {
                a[j] = a[j - h];
                j -= h;
            }
            a[j] = v;

            cout << "[h=" << h << "] ";
            for (int k = 0; k < N; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }

        h /= 3;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int N;
    cout << "배열 크기 입력: ";
    cin >> N;

    int *a = new int[N];
    cout << "배열 원소 입력: ";
    for (int i = 0; i < N; i++)
        cin >> a[i];

    cout << "\n정렬 전 배열: ";
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;

    double start_time = clock();

    ShellSort(a, N);

    double end_time = clock();
    cout << "\n정렬 후 배열: ";
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "쉘 정렬 시간 (N = " << N << ") : " << (end_time - start_time) / CLOCKS_PER_SEC << "초" << endl;

    delete[] a;
    system("pause");
    return 0;
}
