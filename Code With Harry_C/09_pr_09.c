// #include<stdio.h>
// #include<conio.h>
// typedef struct date{
//     int date;
//     int month;
//     int year;
// } date;
// void diplay(date d){
//     printf("The datee is %d/%d/%d\n", d.date, d.month, d.year);
// }
// int datecmp(date d1,date d2){
//     if(d1.year>d2.year){
//         return 1;
//     }
//     if(d1.year<d2.year){
//         return -1;
//     }
//     if(d1.month>d2.month){
//         return 1;
//     }
//     if(d1.month<d2.month){
//         return -1;
//     }
//     if(d1.date>d2.date){
//         return 1;
//     }
//     if(d1.date<d2.date){
//         return -1;
//     }
//     return 0;
// }
// int main(){
//     date d1 = {16, 11, 2002};
//     date d2 = {19, 02, 2010};
//     diplay(d1);
//     diplay(d2);
//     int a=datecmp(d1, d2);
//     printf("Date Comparison function returns: %d", a);
//     return 0;
// }


#include<stdio.h>
#include<conio.h>
typedef struct timestamp{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int seconds;
} tsp;
void diplay(tsp d){
    printf("The datee is %d-%d-%d||%d/%d/%d\n",d.hour,d.minute,d.seconds, d.date, d.month, d.year);
}
int timestampcmp(tsp d1,tsp d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }

    // Time:-

    if(d1.hour>d2.hour){
        return 1;
    }
    if(d1.hour<d2.hour){
        return -1;
    }
    if(d1.minute>d2.minute){
        return 1;
    }
    if(d1.minute<d2.minute){
        return -1;
    }
    if(d1.seconds>d2.seconds){
        return 1;
    }
    if(d1.seconds<d2.seconds){
        return -1;
    }
    return 0;
}
int main(){
    tsp d1 = {16, 11, 2002,5,20,36};
    tsp d2 = {19, 02, 2010,8,30,26};
    
    diplay(d1);
    diplay(d2);
    int a=timestampcmp(d1, d2);
    printf("Date Comparison function returns: %d", a);
    return 0;
}