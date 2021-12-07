#include "day3.h"

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#define ARRAY_LEN(array) ((int)(sizeof(array) / sizeof(array[0])))

void day3_1(void)
{
    FILE* input = fopen("src/day3_in", "r");
    if (input == NULL)
    {
        printf("Cant find file: src/day3_in");
        exit(1);
    }
    
    int rows = 0;
    char line_buf[20] = { '\0' };
    int ones_in_col[12] ={ 0 };
    while (NULL != fgets(line_buf, ARRAY_LEN(line_buf), input))
    {
        for (int buf_idx = 0; buf_idx < ARRAY_LEN(line_buf) && line_buf[buf_idx] != '\0'; buf_idx++)
        {
            if (line_buf[buf_idx] == '1')
            {
                ones_in_col[buf_idx] += 1;
            }
        }
        rows++;
    }


    printf("D03.1: %i %i %i %i %i %i %i %i %i %i %i %i %i\n", rows, ones_in_col[0], ones_in_col[1], ones_in_col[2], ones_in_col[3], ones_in_col[4], ones_in_col[5], ones_in_col[6], ones_in_col[7], ones_in_col[8], ones_in_col[9], ones_in_col[10], ones_in_col[11]);
}


void day3_2(void)
{
    printf("D03.2: \n");
}