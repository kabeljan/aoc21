#include "day1.h"

#include "stdio.h"

#include "day1_data.h"

#define ARRAY_LEN(array) ((int)(sizeof(array) / sizeof(array[0])))

void day1_1(void)
{
    int prev_val = a_data[0];
    int inc_cnt = 0;
    for (int data_idx = 0; data_idx < ARRAY_LEN(a_data); data_idx++)
    {
        if (a_data[data_idx] > prev_val)
        {
            inc_cnt++;
        }
        prev_val = a_data[data_idx];
    }

    printf("Number of increases: %i\n", inc_cnt);
}