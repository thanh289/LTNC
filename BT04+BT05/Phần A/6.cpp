#include <bits/stdc++.h>
using namespace std;

int n = 30;

void bubbleSort(int a[])
{
    bool done = true;
    for(int i=n-1; i>0 && done; i--)
    {
        done = false;
        for(int j=1; j<=i; j++)
        {
            if(a[j] < a[j-1])
            {
                swap(a[j], a[j-1]);
                done = true;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int number[n];
    for(int i=0; i<n; i++)
    {
        int x = rand() % 100 + 1;
        number[i] = x;
    }

    cout<<"Before Sort: "<<endl;
    for(int i=0; i<n; i++)
        cout<<number[i]<<" ";
    cout<<endl;

    bubbleSort(number);
    cout<<"After Sort: "<<endl;
    for(int i=0; i<n; i++)
        cout<<number[i]<<" ";
    cout<<endl;


}