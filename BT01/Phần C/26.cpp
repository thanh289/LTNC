#include <bits/stdc++.h>

using namespace std;


const int Max = 1e5;
int arr[Max];


void BasicStatistics(int n, int number[]);


int main(int argc, char *argv[]){

    srand(time(NULL));

    int N; cin>>N;
    for(int i=0; i<N; i++)
        arr[i] = rand() % 100;

    for(int i=0; i<N; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    BasicStatistics(N, arr);

    return 0;
}


void BasicStatistics(int n, int number[]){
    double sum = 0;
    for(int i=0; i<n; i++)
        sum += number[i];
    
    
    cout<<"mean = "<<sum/n<<endl;

    sort(number, number + n);
    cout<<"max = "<<number[n-1]<<endl;
    cout<<"min = "<<number[0]<<endl;

}