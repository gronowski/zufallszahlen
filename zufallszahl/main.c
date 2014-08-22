#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Zufallszahl!\n");
    int i=0;
    int zufallszahl=0;
    time_t zeit;
    srand(time(&zeit));
    for (i=0;i<20;i++){
        zufallszahl=rand();
        printf("Zufallszahl %2i :%i\t %i\n",i,zufallszahl,zufallszahl%42);
    }
    return 0;
}
