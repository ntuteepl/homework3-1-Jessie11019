#include "stdio.h"

int time[25];


int main()
{
int s1,d1,s2,d2,s3,d3;
scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
int schedule[3][2] = {{s1,d1},{s2,d2},{s3,d3}};

int car_number = 0;
    int i = 0;
    int j = 0;

    for(i=0; i< 3; i++)
    {
        int start_time = schedule[i][0];
        int end_time = schedule[i][1];

        for(j=start_time; j<end_time;j++)
        {
            time[j] +=1;
        }
    }

    int k = 0;

    for(k = 0; k <= 24; k++)
    {
        if(time[k] > car_number)
        {
            car_number = time[k];
        }
    }

    printf("the car number is %d\n", car_number);





    return 0;
}

