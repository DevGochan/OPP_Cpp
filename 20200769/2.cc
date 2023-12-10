#include <cstdio>
#include <cmath>
#include <algorithm>

int N, K;
double numbers[100001];

int main() {
    scanf("%d%d", &N, &K);
    for (int i = 1; i <= N; i++) 
        scanf("%lf", &numbers[i]);

    std::sort(numbers + 1, numbers + N + 1);

    double sum = 0;
    for (int i = K + 1; i <= N - K; i++) {
        sum += numbers[i];
    }

    double average = sum / (N - 2 * K);
    printf("%.2lf\n", floor(average * 100 + 0.5) / 100);

    for (int i = 1; i <= K; i++) {
        numbers[i] = numbers[K + 1];
        numbers[N - i + 1] = numbers[N - K];
    }

    sum = 0;
    for (int i = 1; i <= N; i++) 
        sum += numbers[i];

    average = sum / N;
    printf("%.2lf", floor(average * 100 + 0.5) / 100);

    return 0;
}
