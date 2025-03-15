// #include<stdio.h>
// #include<conio.h>
// int main(){
// int t;
// scanf("%d", &t);
// while(t--){

//     int n, h;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n;i++){
//         scanf("%d", &a[i]);
//         printf(a[i]);
//     }
//     printf("Success");
// }
// return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// int compare(void *p1, void *p2)
// {
//     return (*(int *)p1 - *(int *)p2);    
// }

// int main(void) {
// 	// your code goes here
// 	int T;
// 	scanf("%d", &T);
	
// 	while(T--)
// 	{
// 	    long N;
// 	    scanf("%ld", &N);
// 	    long long A[N];
	    
// 	    long int i;
// 	    for(i = 0; i < N; i++)
// 	        scanf("%lld", &A[i]);
	    
// 	    qsort(A, N, sizeof(long long), compare);
	    
// 	    long long prev = 0;
// 	    long count = 0;
// 	    for(i = 0; i < N; i++)
// 	        if(A[i] != prev && A[i] != 0)
// 	        {
// 	            prev = A[i];
// 	            count++;
// 	        }
	    
// 	    printf("%ld\n", count);
// 	}
// 	return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
// 	int t;
// 	scanf("%d", &t);
// 	while(t--){
// 		int n;
// 		scanf("%d", &n);
// 		char s[n];
// 		scanf("%s", &s);
// 		// if((n%2)!=0){
// 		// 	char temp[n];
// 		// 	for (int i = 0; i < n/2;i++){
// 		// 		temp[i] = s[i];
// 		// 		s[i]=s[n-i-2];
// 		// 		s[n - i - 2] = temp[i];
// 		// 	}
// 		// }
// 		// else{
// 				char temp[n];
// 			for (int i = 0; i < n-1;i+=2){
// 				temp[i] = s[i];
// 				s[i]=s[i+1];
// 				s[i+1] = temp[i];
// 			// }
// 		}
// 		for (int i = 0; i < n;i++){
// 			s[i] = 'z' - s[i] + 'a';
			
// 		}

// 			printf("%s\n", s);
// 	}
// 	return 0;
// }

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[26],p[100];
	scanf("%s", &s);
	int a;
	a = strlen(s);
	
	int n;
	scanf("%d", &n);
	while(n--){
		scanf("%s",&p);
		int b;
		int count = 0;
		b = strlen(p);
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if (p[i] == s[j])
				{
					count++;
					// break;
				}
			}
			}
			if(count==b){
				printf("Yes\n");
			}
			else{
					printf("No\n");
			}
	}
	return 0;
}

// printf("Hello Everyone here this is the c++ programming centre wher u all will be taught about the supernatnaturalism of the very ezistence of the full moon night under the howling of wolf beneath the sky