// Single Layer

#include <stdio.h>
#include <conio.h>

float perceptron(float sumA, float sumn, float thA)
{
    sumA = sumA * 2;
    if (sumA >= thA)
    {
        printf(" 1\n");
    }
    else
    {
        printf(" 0\n");
        perceptron(sumA, sumn, thA);
    }
    // sumA = sumn;
    return sumA;
}

int main()
{
    int inputA;
    int inputB;

    float sumA = 0;

    float sumn = 0;
    printf("How many input and weights you want for neuron A\n");
    scanf("%d", &inputA);
    float xA[5], wA[5], xB[5], wB[5], b_new, b_old, alpha, t, imt, imtp, th, thA;
    float activation_fn, ansA[inputA], ansB[inputB];

    for (int i = 0; i < inputA; i++)
    {
        printf("Enter the value for input%d \n", i + 1);
        scanf("%f", &xA[i]);
    }

    for (int i = 0; i < inputA; i++)
    {
        printf("Enter the value for weight%d \n", i + 1);
        scanf("%f", &wA[i]);
    }

    for (int i = 0; i < inputA; i++)
    {
        ansA[i] = xA[i] * wA[i];
    }

    for (int i = 0; i < inputA; i++)
    {
        sumA = sumA + ansA[i];
    }
    printf("SUM FOR NEURON A IS %f\n", sumA);

    printf("Enter the value of threshold\n");
    scanf("%f", &thA);

    if (sumA >= thA)
    {

        printf("Enter the final threshold:-\n");
        scanf("%f", &th);

        if (sumA >= th)
        {
            printf("\n 1\n");
        }
        else
        {
            printf("\n 0\n");
            perceptron(sumA, sumn, thA);
        }
    }
    else
    {
        printf("\n 0\n");
    }

    return 0;
}