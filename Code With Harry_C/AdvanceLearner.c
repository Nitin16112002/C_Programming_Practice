#include <stdio.h>
int operations(int *);
int main(void) {

  int N,T,Ni;
  scanf("%d",&N);
  scanf("%d",&T);

  Ni = N;
  //   while(T--){

  int k[T];
  int n[T];

  for (int i = 0; i < T; i++)
  {
      scanf("%d", &k[i]);

     }
//   }

    //   int n[k];
    // n = 0;

    for (int i = 0; i < T;i++){
        // printf("Start %d\n",N);

        if (k[i] < Ni)
        {
            if (k[i] % 2 == 0)
            {
                n[i] = N / k[i];
                // printf("%d gggg\n", n[i]);
            }
            else
            {
                n[i] = N - k[i];
                // printf("%d hggg\n", n[i]);
            }
    }
    else if(k[i]>Ni){
       if(k[i]%2==0){
        n[i]=N+k[i];
        // printf("%d iggg\n",n[i]);
      }
      else{
        n[i]=N*k[i];
        // printf("%d jggg\n",n[i]);
      }
    }
    else{
      n[i]=N*N;
        // printf("%d kggg\n",n[i]);
    }
    N=n[i];

    }
    printf("%d\n",N);
  return 0;
}