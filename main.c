#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

int main() {

   int *len;

    scanf("%d", len);

    int* p = (int*)malloc(*len * sizeof(int));

    for (int i = 0; i < *len; i++)
    {
        scanf("%d", (p + i));
    }
       
    for (int i = 0; i < *len; i++)
    {
        if(p[i] % 2 == 0)
        printf("%d even\n", p[i]);
    else
        printf("%d odd\n", p[i]);
    
    }
    
    free(p);

  return 0;
}
