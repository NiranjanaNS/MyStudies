#include <stdio.h>
#include <time.h>
#include <unistd.h> // for sleep()

int main() {
    int i;

    // Loop 10 times (e.g., simulate 10 seconds)
    for (i = 0; i < 10; i++) { // (,,) infinity loop
        time_t now;
        struct tm *currentTime;

        // Get current time
        time(&now);
        currentTime = localtime(&now);

        // Print the time in HH:MM:SS format
        printf("Time: %02d:%02d:%02d\n",
               currentTime->tm_hour,
               currentTime->tm_min,
               currentTime->tm_sec);

        sleep(1); // Pause for 1 second
    }

    return 0;
}
