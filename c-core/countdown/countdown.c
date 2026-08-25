#include <unistd.h>

int	main()
{
	char  s= '9' ;
	while(s >= '0'){
		write(1,&s,1);
		s--;
	}
    write(1,"\n",1);
}
