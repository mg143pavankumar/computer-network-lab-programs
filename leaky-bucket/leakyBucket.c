/*
`Write a C/C++ program for congestion control using Leaky Bucket algorithm
*/

#include <stdio.h>

int main()
{
    int incoming, outgoing, bucket_size, userInput, store = 0;

    printf("Enter bucket size, outgoing rate and number of inputs: ");
    scanf("%d %d %d", &bucket_size, &outgoing, &userInput);

    while (userInput != 0)
    {
        printf("\nEnter the incoming packet size: ");
        scanf("%d", &incoming);

        printf("Incoming packet size %d\n", incoming);

        if (incoming < (bucket_size - store))
        {
            store += incoming;

            printf("Bucket buffer size %d out of %d\n", store, bucket_size);
        }
        else
        {
            printf("Dropped %d number of packets\n", incoming - (bucket_size - store));
            printf("Bucket buffer size %d out of %d\n", store, bucket_size);
            store = bucket_size;
        }

        store -= outgoing;
        printf("After outgoing %d packet left out of %d in buffer\n", store, bucket_size);

        userInput--;
    }
}