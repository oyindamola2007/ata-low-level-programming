#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *current_time;

 
    t = time(NULL);
    current_time = localtime(&t);

     printf("The year is %d\n", current_time->tm_year + 1900);

    return 0;
}
