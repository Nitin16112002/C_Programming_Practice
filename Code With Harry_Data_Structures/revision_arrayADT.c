#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct myarray
{
    int used_size;
    int total_size;
    int *ptr;
};

void createarray(struct myarray *a, int usize, int tsize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * (sizeof(int)));
}

void setval(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d:- ", i + 1);
        scanf("%d", &a->ptr[i]);
    }
}

void show(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", a->ptr[i]);
    }
}

int main()
{
    struct myarray marks;
    int z, c;
    printf("Enter total size & used size\n");
    scanf("%d %d", &z, &c);
    createarray(&marks, c, z);
    printf("Performing setval\n");
    setval(&marks);
    printf("Performing show\n");
    show(&marks);

    return 0;
}


