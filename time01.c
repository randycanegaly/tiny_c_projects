#include <stdio.h>
#include <time.h>

int main(void) {

    time_t now;

    time(&now);//time puts the current time into the now variable, a pointer to it was passed
    printf("Number of seconds into the epoch ....... %ld\n", now);
    printf("The time is: %s", ctime(&now));


    return 0;
}
