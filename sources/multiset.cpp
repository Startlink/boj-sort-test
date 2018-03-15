#include <iostream>
#include <algorithm>
#include <sys/time.h>
#include <set>
using namespace std;
int a[10000000];
int n;
long long currentepoch() {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long long ms = tp.tv_sec * 1000LL + tp.tv_usec / 1000LL;
    return ms;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    multiset<int> s;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int k=0;
    long long start = currentepoch();
    for (int i=0; i<n; i++) {
        s.insert(a[i]);
    }
    for (auto it = s.begin(); it != s.end(); it++) {
        a[k++] = *it;
    }
    long long end = currentepoch();
    cerr << (end-start) << '\n';
    return 0;
}
