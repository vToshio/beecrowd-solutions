#include <stdio.h>

int main(void){
	int n1, n2, n3, i;
	int s1, s2, s3, aux;
	
	scanf("%d %d %d", &n1, &n2, &n3);
	s1 = n1;
	s2 = n2;
	s3 = n3;
	
	if (s2 < s1){
		aux = s1;
		s1 = s2;
		s2 = aux;
	}
	if (s3 < s2){
		aux = s2;
		s2 = s3;
		s3 = aux;
		
		if (s2 < s1){
			aux = s1;
			s1 = s2;
			s2 = aux;	
		}
	}


	printf("%d\n%d\n%d\n\n", s1, s2, s3);
	printf("%d\n%d\n%d\n", n1, n2 ,n3);
	
	return 0;
}