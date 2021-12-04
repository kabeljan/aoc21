#include "day2.h"

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#include "day2_data.h"

#define ARRAY_LEN(array) ((int)(sizeof(array) / sizeof(array[0])))

#define TOKEN " "
#define INPUT_BUF_SIZE 20

void day2_1(void)
{
    int hpos = 0;
    int depth = 0;

    for (int input_idx = 0; input_idx < ARRAY_LEN(a_input); input_idx++)
    {
        char buffer[INPUT_BUF_SIZE];
        strcpy(buffer, a_input[input_idx]);
        char* dir = strtok(buffer, TOKEN);
        char* amount = strtok(NULL, TOKEN);

        if (!strcmp(dir, "forward"))
        {
            hpos += atoi(amount);
        }
        else if (!strcmp(dir, "down"))
        {
            depth += atoi(amount);
        }
        else if (!strcmp(dir, "up"))
        {
            depth -= atoi(amount);
        }
    }

    printf("D01.1: hpos: %i, depth: %i faktor: %i\n", hpos, depth, hpos * depth);
}

void day2_2(void)
{
    printf("D01.2: \n");
}