#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int i, choice, lp;
    char encrypt[50], plain[50], key[50];

    while (1)
    {
        printf("\n---- Menu ----\n");
        printf("1. Data Encryption\n2. Data Description\n3. Exit\n");
        printf("Enter you choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\nData Encryption");
            printf("\nEnter the plain text: ");
            fflush(stdin);
            scanf("%s", plain);

            printf("\nEnter encryption key: ");
            scanf("%s", key);

            lp = strlen(key);

            for (i = 0; plain[i] != '\0'; i++)
            {
                encrypt[i] = plain[i] ^ lp;
            }

            encrypt[i] = '\0';

            printf("\nEncrypted text is : ");
            puts(encrypt);
        }
        break;
        case 2:
        {
            printf("\nData Description");

            for (i = 0; encrypt[i] != '\0'; i++)
            {
                plain[i] = encrypt[i] ^ lp;
            }

            printf("\nDecrypted text is : ");
            puts(plain);
        }
        break;
        case 3:
            exit(0);
        default:
            break;
        }
    }
}