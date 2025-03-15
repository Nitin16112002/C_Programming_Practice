// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int year;
//     int month, days,date;
//    date =370;
//     year = date/365;
//     month = (date%365)/30;
//   days = (date%365)%30;

//     printf("%d year\n", year);
//     printf("%d month\n", month);
//     printf("%d days", days);

//     return 0;
// }

#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    float X,Y,D;
	    scanf("%d %d %d",&X, &Y, &D);
	    
	    if(abs(X-Y)<=D){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}


