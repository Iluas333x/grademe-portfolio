#include <unistd.h>
void ft(char s){
	write(1, &s, 1);
	write(1, &s, 1);

	
}
int main(void){
	char s = 'a';
	int count = 0;
	while (s <= 'z'){
		ft(s);

		if (count % 2 == 0){
		s = s - 32 ; 
		}else{
			s = s + 32 ;
		}
		count++;
		s++;


	
	}
	write(1,"\n",1);
}