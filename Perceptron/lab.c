

#include <stdio.h>
#include <conio.h>
// imtp=percentage of change in val-changer inn thrhold

// float perceptron(float b_new, float b_old, float alpha, float t, float sum, float sumn, float th)
// {

//     b_new = b_old + (alpha * t);
//     printf("New bias is %f\n", b_new);
//     //   float sumn;
//     sumn = sum + b_new;
//     printf("SUM IS %f\n", sumn);
//     b_old = b_new;
//     if (sumn >= th)
//     {
//         printf("1\n");
//     }
//     else
//     {
//         printf("0\n");
//         perceptron(b_new, b_old, alpha, t, sum, sumn, th);
//     }
//     return sumn;
// }

int main()
{
    int inputA;
    int inputB;
    float sumA = 0;
    float sumB = 0;
    float sumC, sumD, sumE;
    float sumn;
    printf("How many input and weights you want for neuron A\n");
    scanf("%d", &inputA);
    float xA[5], wA[5], xB[5], wB[5], b_new, b_old, alpha, t, imt, imtp, th, thA, thB, thC, thD, thE;
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
        printf("The value of  inputs are %f \n", xA[i]);
    }

    for (int i = 0; i < inputA; i++)
    {
        printf("The value of  weights are %f \n", wA[i]);
    }

    for (int i = 0; i < inputA; i++)
    {
        ansA[i] = xA[i] * wA[i];
    }
    //  float sum=0;
    //  float sumn;

    for (int i = 0; i < inputA; i++)
    {
        sumA = sumA + ansA[i];
        //  return sum;
    }
    printf("SUM FOR NEURON A IS %f\n", sumA);

    printf("Enter the value for thresholdA:-\n");
    scanf("%f", &thA);

    if (sumA >= thA)
    {

        printf("How many input and weights you want for neuron B\n");
        scanf("%d", &inputB);
        // float xB[5], wB[5], b_new, b_old, alpha, t, imt, imtp, th;

        for (int i = 0; i < inputB; i++)
        {
            printf("Enter the value for input%d \n", i + 1);
            scanf("%f", &xB[i]);
        }

        for (int i = 0; i < inputB; i++)
        {
            printf("Enter the value for weight%d \n", i + 1);
            scanf("%f", &wB[i]);
        }

        for (int i = 0; i < inputB; i++)
        {
            printf("The value of  inputs are %f \n", xB[i]);
        }

        for (int i = 0; i < inputB; i++)
        {
            printf("The value of  weights are %f \n", wB[i]);
        }

        for (int i = 0; i < inputB; i++)
        {
            ansB[i] = xB[i] * wB[i];
        }
        //  float sum=0;
        //  float sumn;

        for (int i = 0; i < inputB; i++)
        {
            sumB = sumB + ansB[i];
            //  return sum;
        }
        printf("SUM FOR NEURON B IS %f\n", sumB);

        printf("Enter the value for thresholdB:-\n");
        scanf("%f", &thB);

        if (sumB >= thB)
        {

            // printf("Enter the value for threshold:-\n");
            // scanf("%f", &th);

            //  printf("The value of threshold %f is \n", th);

            //    printf("Enter the value for bias:-\n");
            //     scanf("%f", &b);

            // float activation_fn, ansA[inputA],ansB[inputB];

            printf("\n");
            sumC = sumA + sumB;
            printf("SUM FOR NEURON C IS %f\n", sumC);

            printf("Enter the value for thresholdC:-\n");
            scanf("%f", &thC);

            if (sumC >= thC)
            {

                sumD = sumA + sumB;
                printf("SUM FOR NEURON D IS %f\n", sumD);

                printf("Enter the value for thresholdD:-\n");
                scanf("%f", &thD);

                if (sumD >= thD)
                {

                    sumE = sumC + sumD;
                    printf("Final SUM of Neurons  IS %f\n\n", sumE);

                    printf("Enter the final threshold:-\n");
                    scanf("%f", &th);

                    if (sumE >= th)
                    {
                        printf("\n1\n");
                    }
                    else
                    {
                        printf("\n0\n");
                    }

                } // IF OF d
                else
                {

                    printf("\n0\n");
                }
            } // if of c
            else
            {

                printf("\n0\n");
            }

        } // IF OF B
        else
        {

            printf("\n0\n");
        }

    } // IF OF A

    else
    {

        printf("\n0\n");
    }

    // else
    // {
    //     printf("0\n");
    //     imt = (th - sum);
    //     imtp = (imt / th) * 100;
    //     b_old = imtp;
    //     printf("The value of old bias  is %f\n", b_old);
    //     t = imtp;

    //     alpha = 1;
    //     sumn = sum + b_old;
    //     printf("SUM IS %f\n", sumn);
    // }

    // //  if (sum<th){

    // //           printf("%d\n",0);

    // //  }
    // if (sumn >= th)
    // {
    //     printf("1\n");
    // }

    // else
    // {
    //     printf("%d\n", 0);

    //     //  for(int i=sumn;i<th;i++){
    //     // while(sumn!=th){

    //     //   b_new=b_old+(alpha*t);
    //     //   printf("New bias is %f\n",b_new);
    //     // //   float sumn;
    //     //   sumn=sum+b_new;
    //     //   printf("SUM IS %f\n",sumn);
    //     //   b_old=b_new;

    //     perceptron(b_new, b_old, alpha, t, sum, sumn, th);

    //     //  if (sumn >= th)
    //     //  {
    //     //      printf("1\n");
    //     //    }
    //     //    else{
    //     //        printf("0\n");
    //     //    }
    //     //   return sumn;

    //     //   }
    // }

    // //       if (sum<th){

    // //           printf("0\n");

    // //  }
    // // if(sum>th){
    // //      printf("1\n");

    // // }
    // //  sum = sum +b_old;

    // //  if (sum >= th)
    // //  {
    // //      printf("1\n");
    // //  }
    // //  else
    // //  {
    // //      printf("0\n");

    
    
    // //  }

    return 0;
}