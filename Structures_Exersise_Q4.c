#include <stdio.h>

struct complex
{
    float real1;
    float img1;
    float real2;
    float img2;
};

void display(struct complex s);
int main()
{

    struct complex s;
    printf("For 1st complex number\nEnter real and imaginary respectively: ");
    scanf("%f\n%f", &s.real1, &s.img1);
    printf("\nFor 2nd complex number\nEnter real and imaginary respectively: ");
    scanf("%f\n%f", &s.real2, &s.img2);
    display(s);

    return 0;
}
void display(struct complex s)
{

    float sumReal = 0;
    float sumImg = 0;
    sumReal = s.real1 + s.real2;
    sumImg = s.img1 + s.img2;

    printf("Sum=%.1f+%.1fi", sumReal, sumImg);
}