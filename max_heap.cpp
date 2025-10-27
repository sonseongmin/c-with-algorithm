#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;
const int N = 5;
double time_start;
void heapify(int a[], int h, int m) //max heap
{
    int j ,v, i;
    v=a[h];
    cout << endl;
    for(j=2*h;j<=m;j*=2)
    {
        if(j<m && a[j] < a[j+1])
        {
            cout << "a[" << j << "]=" <<a[j];
            j++;
        }
        if(v >=a[j]) break;
        else a[j/2] = a[j];
        cout << "& a[" << j/2 << "]=" << a[j] << ",";
    }
    a[j/2]= v;
    cout << "a[" << j/2 <<"]=" << a[j/2] << endl;
    for (i =1; i<=m; i++) cout << "a[" <<i<< "]=" <<a[i];
    cout << ", a[" << i <<"]=" <<a[i] << "*" << endl;
}
void swap(int a[], int i, int b)
{
    a[i]=a[i+1]; //나중에 완성해야겠다. 
}
void HeapSort(int a[], int n)
{
    int i;
    for(i = n/2; i>=1; i--)
    {
        heapify(a,i,n);
    }
    cout << endl;

    for (i = n-1; i >=1; i--)
    {
        cout << "*****heap sort*****" << endl;
        swap(a,1,i+1);
        heapify(a,1,i);
    }
}

int main()
{
    //나중에 또 채우고
}