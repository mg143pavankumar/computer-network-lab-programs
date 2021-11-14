#include <ctype.h>
#include <string.h>
#include <stdio.h>

int i, j, k, m, t = 0, n;
char frame[100], temp[100], flag[100], dest[100];

void main()
{
    printf("enter frame:");
    gets(frame);

    printf("enter flag:");
    gets(flag);

    for (i = 0; i < strlen(frame); i++)
    {
        for (j = i, m = 0; j < strlen(flag) + i; j++, m++)
            temp[m] = frame[j];

        if (!strcmp(temp, flag))
        {
            for (n = 0, m = 0; n < 2 * strlen(flag); n++, m++)
            {
                if (m > strlen(flag) - 1)
                    m = 0;
                dest[t++] = flag[m];
            }

            i += strlen(flag) - 1;
            continue;
        }
        else
            dest[t++] = frame[i];
    }

    printf("frame to be send is :");
    printf("%s %s %s", flag, dest, flag);
}