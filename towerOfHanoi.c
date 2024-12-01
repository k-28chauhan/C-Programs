#include <stdio.h>

void towerOfHanoi(int n ,char from_rod, char to_rod, char aux_rod){
    if(n==1){
        printf("move disc 1 from rod %c to rod %c\n",from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("Move disc %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    char A, B, C;
    printf("Enter no. of discs");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
}