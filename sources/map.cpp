#include <iostream>
#include <algorithm>
#include <sys/time.h>
#include <map>
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
    map<int,int> d;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int k=0;
    long long start = currentepoch();
    for (int i=0; i<n; i++) {
        d[a[i]] += 1;
    }
    for (auto it = d.begin(); it != d.end(); it++) {
        for (int j=0; j<it->second; j++) {
            a[k++] = it->first;
        }
    }
    long long end = currentepoch();
    cerr << (end-start) << '\n';
    return 0;
}
