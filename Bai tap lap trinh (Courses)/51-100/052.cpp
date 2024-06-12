#include <bits/stdc++.h>
using namespace std;

struct person{
    double h;
    double m;
    double bmi;

    person(double h_, double m_){
        h = h_; m = m_;
        bmi = m / (h * h);
    }

    bool operator<(const person& other) const{
        return bmi > other.bmi;
    }

};

int main(){

    int n; cin>>n;

    string inputFile; cin>>inputFile;
    ifstream file(inputFile);
    string line;

    vector<person> people;

    while(getline(file, line)){
        stringstream ss(line);
        string hStr, mStr;
        getline(ss, hStr, ' '); 
        getline(ss, mStr); 

        double h = stod(hStr);
        double m = stod(mStr);
        people.push_back({h, m});
    }

    sort(people.begin(), people.end());

    for(int i=0; i<n; i++)
        cout<<people[i].h<<" "<<people[i].m<<endl;
}