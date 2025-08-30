#include <stdio.h>
void tower_hanoi (int n, char rod_A, char rod_B, char rod_C)
{
    if (n==1)
    {
        printf("\nMove disk 1 from rod %c to rod %c",rod_A,rod_C);
        return;
    }
    tower_hanoi (n-1,rod_A,rod_C,rod_B);
    printf("\nMove disk %d from rod %c to rod %c",n,rod_A,rod_C);
    tower_hanoi (n-1,rod_B,rod_A,rod_C);
}
int main()
{
    int n;
    printf("Enter disk number: ");
    scanf("%d",&n);
    printf("Solution process:");
    tower_hanoi (n,'A','B','C');
    return 0;
}
