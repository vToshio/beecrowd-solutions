#include <stdio.h>

int main() {
	int horas, vel;
	float dist, lts;
	
	scanf("%d %d", &horas, &vel);
	
	dist = vel * horas;
	lts = dist / 12;
	
	printf("%.3f\n", lts); 

    return 0;
}