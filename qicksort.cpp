#include<iostream>
using namespace std;
void swap(int *a, int *b )
{
    int k=*a;
    *a=*b;
    *b=k;
}
int partion(int a[], int low, int high)
{
    int piot=a[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(a[j]<=piot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i+1;
}
void qicksort(int a[], int low, int high)
{
    int pi=partion(a, low, high);
    if(low<high)
    {
        qicksort(a,low, pi-1);
        qicksort(a,pi+1, high);
        
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    qicksort(a, 0, n-1);
    for(int i=0; i<n; i++)
    {
       cout<<a[i]<<" ";
    }
}
