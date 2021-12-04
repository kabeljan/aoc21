#include "day1.h"

#include "stdio.h"

#include "day1_data.h"

#define ARRAY_LEN(array) ((int)(sizeof(array) / sizeof(array[0])))
#define WINDOW_SIZE_1 1
#define WINDOW_SIZE_2 3

int day1(int window_size)
{
    int inc_cnt = 0;
    for (int data_idx = 0; data_idx < ARRAY_LEN(a_data) - window_size; data_idx++)
    {
        if (a_data[data_idx + window_size] > a_data[data_idx])
        {
            inc_cnt++;
        }
    }
    return inc_cnt;
}


void day1_1(void)
{
    printf("D01.1: Number of increases: %i\n", day1(WINDOW_SIZE_1));
}

void day1_2(void)
{
    printf("D01.2: Number of increases: %i\n", day1(WINDOW_SIZE_2));
}