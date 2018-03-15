#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
int a[10000000];
int n;
int cmp(const void *u, const void *v) {
    if (*(int *)u > *(int *)v) {
        return 1;
    } else {
        return -1;
    }
}
long long currentepoch() {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long long ms = tp.tv_sec * 1000LL + tp.tv_usec / 1000LL;
    return ms;
}
int main() {
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    long long start = currentepoch();
    qsort(a, n, sizeof(int), cmp);
    long long end = currentepoch();
    fprintf(stderr,"%lld\n",(end-start));
    return 0;
}
