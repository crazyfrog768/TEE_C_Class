#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sdstd(float d[], float u, int n) {
    int i = 0;
    double temp = 0.0, tempsum = 0.0;

    for (i = 0; i < n; i++) {
        temp = temp + (d[i]-u)*(d[i]-u);
        //printf(" [%f-%f]^2 : %f \n", d[i], u, temp);
    }
    // printf("sigma [x-u]^2 : %f \n", temp);
    temp = temp/n;
    //printf("sigma [x-u]^2 / n : %f \n", temp);
    return (sqrt(temp));
}

float mean(float d[], int n) {
    int i = 0;
    float temp = 0.0;
    for (i = 0; i < n; i++) {
        temp = temp + d[i];
    }
    temp = temp/n;
    //printf(" temp is: %f \n", temp);
    return temp;
}
int main()
{
    FILE *fptr;
    int number;
    int i = 0;
    float data[200];
    float u, sd, tempsum_x_u;
    fptr = fopen("data.txt", "r");

    while (fscanf(fptr, "%d", &number) != EOF)
    {
        printf("array[%d] -> : %d \n", i, number);
        data[i] = number;
        i++;
    }

    printf("\n\nOK we know there are %d numbers in the file \n", (i));
    printf("\nEnd of file.\n");
    fclose(fptr);

    // call mean() function
    u = mean(data, i);
    printf(" u (mean) is : %f \n", u);
    sd = sdstd(data, u, i);
    printf(" Standard Deviation (SD) is : %f \n\n", sd);
    return 1;
}
