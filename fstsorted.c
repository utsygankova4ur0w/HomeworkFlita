#include <stdio.h>

void Sorted_bubles(int* mas, int size)
{
    int i;
    int j;
    int tmp;
    for (i = 0; i < (size - 1); i++)
    {
        for (j = (size - 1); j > i; j--)
        {
            if (mas[j - 1] > mas[j])
            {
                tmp = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = tmp;
            }
        }
    }
}