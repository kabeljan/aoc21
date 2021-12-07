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
        for (int buf_idx = 0; buf_idx < ARRAY_LEN(ones_in_col); buf_idx++)
        {
            if (line_buf[buf_idx] == '1')
            {
                ones_in_col[buf_idx] += 1;
            }
        }
        rows++;
    }
    
    unsigned int gamma = 0;
    unsigned int epsilon = 0;
    for (int gamma_idx = 0; gamma_idx < ARRAY_LEN(ones_in_col); gamma_idx++)
    {
        gamma = gamma << 1;
        epsilon = epsilon << 1;
        if (ones_in_col[gamma_idx] > (rows / 2))
        {
            gamma += 1;
        }
        else
        {
            epsilon += 1;
        }
    }

    printf("D03.1: gamma: %u epsilon: %u power: %u \n", gamma, epsilon, gamma * epsilon);
}


void day3_2(void)
{
    printf("D03.2: \n");
}