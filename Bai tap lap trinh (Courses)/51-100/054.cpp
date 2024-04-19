#include <bits/stdc++.h>
using namespace std;

struct Student {
    int score;
    string name;


    bool operator<(const Student& other) const {
        if (score != other.score) {
            return score > other.score; // Sắp xếp theo điểm giảm dần
        } else {
            return name < other.name; // Nếu điểm bằng nhau, sắp xếp theo tên từ điển
        }
    }
};


int main() {
    string inputFile;
    cin >> inputFile;
    ifstream file(inputFile);


    vector<Student> students;
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string scoreStr, name;

        getline(ss, scoreStr, ',');
        getline(ss, name);
        int score = stoi(scoreStr);

        students.push_back({score, name});
    }

    sort(students.begin(), students.end());

    for (const auto& student : students) {
        cout << student.name << endl;
    }

    return 0;
}
