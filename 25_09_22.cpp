#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int N = 5;

void Bubble (int a[], int N)
{
    int i,j,tmp,k ;
    for(k=0; k < N; k++){
        for(j =0; j < (N-1) ; j++)
        {
            if(a[j] > a[j+1])
            {
                tmp= a[j];
                a[j] = a[j+1];
                a[j+1]=tmp;
            }
            cout << "j=" << j <<endl;
            for (i=0; i < N; i++)
            {
                cout << "a[" << i << "]=" << a[i] << ",";
            }
            cout << endl;
        }
        cout << endl;
    }
}
int main()
{
    int a[N], i;
    double time_start;
    for (i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (i=0; i < N; i++)
    {
        cout << "a[" << i <<"]=" << a[i] << endl;
    }
    Bubble(a,N);
    system("pause");
}
