#include <stdio.h>

int main(){
	int dur;
	int h, min, s;
	
	scanf("%d", &dur);
	
	s = dur % 60;
	min = dur / 60;
	h = min / 60;
	if (min>60){
		min = min % 60;	
	}
	
	printf("%d:%d:%d\n", h, min, s);
    
    return 0;
}