#include <stdio.h>
#include <time.h>

// We get the number of second since 00:00:00 on 1 January 1970
int year, month, day, hour, minute, second;
const int sec_in_hour = 3600;
const int sec_in_day = 86400;
const int sec_in_year = 31536000;
const int beginning_year = 1970;

int year_and_day(long int total_second)
{
    // Calculate the year
    double total_year = total_second / sec_in_year;
    year = (int)total_year + beginning_year;

    // Build an array to store the leap-years
    int cnt = 0; // The number of leap-years
    int size = year - beginning_year;
    int leap_year[size];

    for (int i = 1971; i < year; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            leap_year[cnt] = i;
            cnt++;
        }
    }

    // Calculate the day precisely
    int num_leap = cnt;
    int precise_day;

    precise_day = num_leap * 366 + (size - num_leap) * 365;

    // Calculate the day
    int remaining_sec = total_second % (precise_day * sec_in_day);
    double total_day = remaining_sec / sec_in_day;
    int remaining_sec_of_day = remaining_sec % sec_in_day;
    day = (int)total_day + 1;

    int *y = &year;
    int *d = &day;
}

int hour_and_minute(long int total_second)
{
    // Calculate the remaining second of a day
    int remaining_sec = total_second % sec_in_year;
    double total_day = remaining_sec / sec_in_day;
    int remaining_sec_of_day = remaining_sec % sec_in_day;

    // Calculate the hour
    double total_hour = remaining_sec_of_day / (double)sec_in_hour;
    hour = (int)total_hour + 8;
    double remaining_sec_of_hour = remaining_sec_of_day % sec_in_hour;

    // Calculate the minute
    double total_minute = remaining_sec_of_hour / 60;
    minute = (int)total_minute;

    // Pointers
    int *h = &hour;
    int *min = &minute;
}

int calculate_month(int *d)
{
    month = 1;
    // The day in each month
    int day_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        day_in_month[1] = 29;
    }
    // calculate the month
    for (int i = 0; i < 12; i++)
    {
        if (day >= day_in_month[i])
        {
            day -= day_in_month[i];
            month++;
        }
        else
        {
            break;
        }
    }

    int *mon = &month;
}

void print_time(int *y, int *month, int *d, int *min, int *h)
{
    printf("The time is:\n-----------------\n");

    if (minute < 10)
    {
        printf("%d:0%d %d/%d/%d\n", *h, *min, *y, *month, *d);
    }
    else
        printf("%d:%d %d/%d/%d\n", *h, *min, *y, *month, *d);
}

int main()
{
    // Get the total seconds
    time_t now;
    now = time(NULL);
    long long int total_second = now;

    // Use the functions to get the time
    year_and_day(total_second);
    hour_and_minute(total_second);
    calculate_month(&day);
    print_time(&year, &month, &day, &minute, &hour);

    getchar();
    return 0;
}