#include <stdio.h>

int main(void) {
    int closest, closest_arrival, entered_hour, entered_min, entered_time_in_min;

    int departure_minutes1 = 480;
    int departure_minutes2 = 583;
    int departure_minutes3 = 679;
    int departure_minutes4 = 767;
    int departure_minutes5 = 840;
    int departure_minutes6 = 945;
    int departure_minutes7 = 1140;
    int departure_minutes8 = 1305;

    int arrival_minutes1 = 616;
    int arrival_minutes2 = 712;
    int arrival_minutes3 = 811;
    int arrival_minutes4 = 900;
    int arrival_minutes5 = 968;
    int arrival_minutes6 = 1075;
    int arrival_minutes7 = 1280;
    int arrival_minutes8 = 1438;


    printf("\n\033[3mDeparture time\t");
    printf("Arrival time\033[0m\n");
    printf("08:00 a.m\t10:16 a.m\n");
    printf("09:43 a.m\t11:52 a.m\n");
    printf("11:19 a.m\t01:31 p.m\n");
    printf("12:47 p.m\t03:00 p.m\n");
    printf("02:00 p.m\t04:08 p.m\n");
    printf("03:45 p.m\t05:55 p.m\n");
    printf("07:00 p.m\t09:20 p.m\n");
    printf("09:45 p.m\t11:58 p.m\n\n");

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &entered_hour, &entered_min);

    entered_time_in_min = (entered_hour * 60) + entered_min;

    if (entered_time_in_min <= departure_minutes1)
    {
        closest = departure_minutes1;
        closest_arrival = arrival_minutes1;
    } else if (entered_time_in_min <= departure_minutes2)
    {
        closest = departure_minutes2;
        closest_arrival = arrival_minutes2;
    } else if (entered_time_in_min <= departure_minutes3)
    {
        closest = departure_minutes3;
        closest_arrival = arrival_minutes3;
    } else if (entered_time_in_min <= departure_minutes4)
    {
        closest = departure_minutes4;
        closest_arrival = arrival_minutes4;
    } else if (entered_time_in_min <= departure_minutes5)
    {
        closest = departure_minutes5;
        closest_arrival = arrival_minutes5;
    } else if (entered_time_in_min <= departure_minutes6)
    {
        closest = departure_minutes6;
        closest_arrival = arrival_minutes6;
    } else if (entered_time_in_min <= departure_minutes7)
    {
        closest = departure_minutes7;
        closest_arrival = arrival_minutes7;
    } else if (entered_time_in_min <= departure_minutes8)
    {
        closest = departure_minutes8;
        closest_arrival = arrival_minutes8;
    }
    
    int departure_hour = closest / 60;
    int departure_min = closest % 60;
    int arrival_hour = closest_arrival / 60;
    int arrival_min = closest_arrival % 60;
    
    printf("Closest departure time is %02d:%02d, arriving at %02d:%02d\n\n", departure_hour, departure_min, arrival_hour, arrival_min);

}