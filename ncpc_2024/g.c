#include <stdio.h>

int main() {
    
    FILE *output = fopen("g.out", "w");

    

    int t;
    FILE *input = fopen("g.in", "r");

    for (int i = 1; i <= t; i++) {
        int n;
        fscanf(input, "%d", &n);

        int a[n], b[n];

        for (int j = 0; j < n; j++) {
            fscanf(input, "%d", &a[j]);
        }

        for (int j = 0; j < n; j++) {
            fscanf(input, "%d", &b[j]);
        }

        int ans = 0;

        int start = 0, end = n - 1;
        while (start < n && a[start] == b[start]) {
            start++;
        }

        while (end >= 0 && a[end] == b[end]) {
            end--;
        }

        if (start <= end) {
            for (int j = start; j <= end; j++) {
                if (a[j] != b[j]) {
                    ans++;
                }
            }
        }

        fprintf(output, "Case %d: %d\n", i, ans);
    }

    fclose(input);
    fclose(output);

    return 0;
}
