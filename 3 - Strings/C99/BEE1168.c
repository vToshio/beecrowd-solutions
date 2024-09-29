#include <stdio.h>
#include <string.h>

int main(void)
{   
    char string[1001];
    int casos, i, j, leds;

    scanf("%d", &casos);
    getchar();

    for (i=1; i<=casos; i++)
    {
        scanf("%s", string);
        
        leds = 0;
        for (j=0; j<strlen(string); j++)
        {
            if (string[j]=='1') leds += 2;
            else if (string[j]=='2') leds += 5;
            else if (string[j]=='3') leds += 5;
            else if (string[j]=='4') leds += 4;
            else if (string[j]=='5') leds += 5;
            else if (string[j]=='6') leds += 6;
            else if (string[j]=='7') leds += 3;
            else if (string[j]=='8') leds += 7;
            else if (string[j]=='9') leds += 6;
            else if (string[j]=='0') leds += 6;
        }

        printf("%d leds\n", leds);
    }

    return 0;
}