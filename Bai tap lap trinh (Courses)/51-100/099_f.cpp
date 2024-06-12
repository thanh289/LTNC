#include <bits/stdc++.h>
using namespace std;


struct Save{
    int a; int b; int c; int d;
};

int main() {
    int N;
    cin >> N;

    unordered_map<long long, Save> map;

    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= N; ++b) {
            for (int c = 1; c <= N; ++c) {
                for (int d = 1; d <= N; ++d) {
                    long long sum = pow(a, 5) + pow(b, 5) + pow(c, 5) + pow(d, 5);
                    map[sum] = {a, b, c, d};
                }
            }
        }
    }

    for (int e = 1; e <= N; e) {
        long long e5 = pow(e, 5);
        if (map.find(e5) != map.end()) {
            int a = map[e5].a;
            int b = map[e5].b;
            int c = map[e5].c;
            int d = map[e5].d;
            cout<<a<<"^5 + "<<b<<"^5 + "<<c<<"^5 + "<<d<<"^5 = "<<e<<"^5"<<endl;
        }
    }

    return 0;
}
