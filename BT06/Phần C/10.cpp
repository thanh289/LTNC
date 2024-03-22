#include <bits/stdc++.h>
using namespace std;

const int Max = 50;

void bigThree(int arr[], int n)
{
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(!(sum%25))
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    int arr[Max];
    int n; cin>>n;
    for(int i=0; i<n; i++)
        arr[i] = rand() % 50;

    cout<<"My array: "<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"Sum of 3 number that divided by 25:"<<endl;
    bigThree(arr, n);
    
}