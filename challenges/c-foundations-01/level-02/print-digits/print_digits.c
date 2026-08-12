#include <unistd.h>
void print_digits(void)
{
char  s = '0';
while(s <= '9'){
    write(1,&s,1);
    s++;
}
}
