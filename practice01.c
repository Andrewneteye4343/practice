#include <stdio.h>
int main() {
    float height, weight;
    printf("Please input your height (cm):");
    scanf("%f", &height);
    printf("Please input your weight (kg):");
    scanf("%f", &weight);
    float BMI;
    BMI = weight/((height/100)*(height/100));
    printf("Your BMI is %.3f", BMI);
    return 0;
    }