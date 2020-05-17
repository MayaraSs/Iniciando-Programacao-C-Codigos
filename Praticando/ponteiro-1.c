#include <studio.h>
main(){

int a;
int *p;

a=2;
p=&a;

printf("%i",p);
printf("%i",*p);
printf("%i",a);
printf("%i",&a);
}
