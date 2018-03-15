#include <iostream>
#include <algorithm>
#include <sys/time.h>
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
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    long long start = currentepoch();
    make_heap(a,a+n);
    sort_heap(a,a+n);
    long long end = currentepoch();
    cerr << (end-start) << '\n';
    return 0;
}
