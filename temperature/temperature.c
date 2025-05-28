#include <stdio.h>

#define MAX_TEMPS 20

void readTemperatures(float temps[], const int n);
void findMinMax(const float temps[], const int n, float *min, float *max);
void printResult(const float min, const float max);

int main() {
    int n;
    float temperatures[MAX_TEMPS];
    float minTemp, maxTemp;

    printf("Введіть кількість температур (не більше %d): ", MAX_TEMPS);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_TEMPS) {
        printf("Некоректна кількість температур.\n");
        return 1;
    }

    readTemperatures(temperatures, n);

    findMinMax(temperatures, n, &minTemp, &maxTemp);

    printResult(minTemp, maxTemp);

    return 0;
}

void readTemperatures(float temps[], const int n) {
    for (int i = 0; i < n; ++i) {
        printf("Температура #%d: ", i + 1);
        scanf("%f", &temps[i]);
    }
}

void findMinMax(const float temps[], const int n, float *min, float *max) {
    *min = *max = temps[0];
    for (int i = 1; i < n; ++i) {
        if (temps[i] < *min) *min = temps[i];
        if (temps[i] > *max) *max = temps[i];
    }
}

void printResult(const float min, const float max) {
    printf("Мінімальна температура: %.2f\n", min);
    printf("Максимальна температура: %.2f\n", max);
}
