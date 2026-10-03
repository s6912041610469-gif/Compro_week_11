#include <stdio.h>

void inputAndShow()
{
    double math, physics, chemistry;

    printf("Enter Math score: ");
    scanf("%lf", &math);

    printf("Enter Physics score: ");
    scanf("%lf", &physics);

    printf("Enter Chemistry score: ");
    scanf("%lf", &chemistry);

    printf("\n--- Scores ---\n");
    printf("Math       : %.2f\n", math);
    printf("Physics    : %.2f\n", physics);
    printf("Chemistry  : %.2f\n", chemistry);
}

int main(void)
{
    inputAndShow();
    return 0;
}
