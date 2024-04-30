#include <stdio.h>

void fastSorted(int* mas, int first, int last)
{
    int middle;
    int left;
    int right;
    if (first < last)
    {
        left = first;
        right = last;
        middle = mas[(left + right) / 2];
        int  tmp;
        while (left < right)
        {
            while (mas[left] < middle)
            {
                left++;
            }
            while (mas[right] > middle)
            {
                right--;
            }
            if (left < right)
            {
                tmp = mas[left];
                mas[left] = mas[right];
                mas[right] = tmp;
                left++;
                right--;
            }

        }
        fastSorted(mas, first, right);
        fastSorted(mas, left, last);
    }
}

