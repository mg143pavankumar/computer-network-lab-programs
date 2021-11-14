#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int i, ch, lp;
    char cipher[50], plain[50];
    char key[50];

    while (1)
    {
        printf("\n---MENU---");
        printf("\n 1.Data Encrption \t 2.Data Descrption \t 3.Exit");

        printf("\n Enter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Data Encryption");
            printf("Enter the plain text");
            fflush(stdin);
            scanf("%s", plain);

            printf("\nEnter Encryption key");
            scanf("%s", key);

            lp = strlen(key);

            for (i = 0; plain[i] != '\0'; i++)
                cipher[i] = plain[i] ^ lp;

            cipher[i] = '\0';

            printf("encrypted text is");
            puts(cipher);

            break;
        case 2:
            printf("data decryption");

            for (i = 0; cipher[i] != '\0'; i++)
                plain[i] = cipher[i] ^ lp;

            printf("decrypted text is");
            puts(plain);

            break;
        case 3:
            exit(0);
        }
    }
}