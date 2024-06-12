#include <bits/stdc++.h>
using namespace std;

struct Person {
    double h;
    double w;
    double bmi;

};

bool cmp(const Person& a, const Person& b) {
    return a.bmi > b.bmi;
}

int main() {

    vector<Person> p;
    double h, w;
    while (cin >> h >> w) {

        double bmi = double(w / (h * h));
        p.push_back({h, w, bmi});

        //cin.peak: preview next character input
        if (cin.peek() == '\n') break; 
    }
    
    int n;
    cin >> n;

    if (n <= 0 || n > p.size()) {
        n = p.size();
    }

    sort(p.begin(), p.end(), cmp);

    for (int i = 0; i < n; ++i) {
        cout << p[i].h << "\t" << p[i].w << std::endl;
    }

    return 0;
}
