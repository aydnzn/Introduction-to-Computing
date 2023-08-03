#include <stdio.h>

/*
The program reads two time inputs in the format "HH:MM" and calculates their sum as a new time. If the sum of the minutes exceeds 60, it carries over to the hour. If the total hours exceeds 24, it wraps around to fit within a 24-hour format.
*/
int main() {
    int h1, m1, h2, m2, h, m;
    scanf("%d:%d+%d:%d",&h1,&m1,&h2,&m2);

    m = m1 + m2;
    h = h1 + h2;

    if(m >= 60){
        m -= 60;
        h++;
    }
    if(h >= 24){
        h %= 24;
    }

    printf("%02d:%02d", h, m);

    return 0;
}
