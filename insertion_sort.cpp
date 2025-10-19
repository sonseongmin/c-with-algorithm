#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int N = 5;

void InsertionSort(int a[], int N)
{
    int tmp, j, i;
    for(j=1; j<N; j++){
        i=j;
        tmp=a[i];
        while(i > 0 && a[i-1]>tmp)
        {
            cout << "a[" <<i-1<<"] =" <<a[i-1] << "tmp=" << tmp;
            a[i] = a[i-1];
            i--;
        }
        a[i]= tmp;
        cout << endl;
        for (i=0; i < N; i++){
            cout << "a[" << i << "]=" << a[i] << ",";
        }
        cout << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int i, a[N+1];
    double start_time;

    for(i=0; i <N; i++){
        cin >> a[i];
    }

    for(i=0; i< N; i++){
        cout<< ", a[" << i <<"]= " << a[i];
    }
    cout << endl;
    start_time =clock();

    InsertionSort(a,N);

    cout << "삽입정렬시간(N = " << N << ") :" << clock() - start_time << endl;
    system("pause");
}