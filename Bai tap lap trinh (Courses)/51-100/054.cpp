#include <bits/stdc++.h>
using namespace std;


struct Student{
    int score;
    string name;

    bool operator<(const Student& other) const{
        if(score != other.score)
            return score>other.score;
        else   
            return name < other.name;
    }
};

int main(){

    string inputFile;
    cin>>inputFile;
    ifstream file(inputFile);

    vector<Student> students;
    string line;
    while(getline(file, line)){
        stringstream ss(line);
        string scoreStr, name;
        getline(ss, scoreStr, ',');
        getline(ss, name);

        int score = stoi(scoreStr);

        students.push_back({score, name});
    }

    sort(students.begin(), students.end());
    for(int i=0; i<students.size(); i++){
        cout<<students[i].name<<endl;
    }
}