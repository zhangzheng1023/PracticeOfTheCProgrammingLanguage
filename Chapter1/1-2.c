#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void func() {
    for (int fahr = 0; fahr <= 300; fahr += 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

int main() {
    float fahr, celsius;

    fahr = LOWER;
    printf("The Conversion from Fahr to Celsius\n");
    printf("Fahr  \t\tCelsius\n");
    while (fahr <= UPPER)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%6.3f\t\t%6.3f\n", fahr, celsius);
        fahr += STEP;
    }

    printf("\n Call func() \n");
    func();
    
    return 0;
}