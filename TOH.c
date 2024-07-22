#include <stdio.h>
void TowerofHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n==1){
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    TowerofHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", aux_rod, from_rod, to_rod);
    TowerofHanoi(n-1, aux_rod, to_rod, from_rod);
    return;
}
int main () {
    int n = 3;
    printf("Enter the Number of connections");
    scanf("%d", &n);
    TowerofHanoi(n, 'A', 'B', 'c');
    return 0;
}
//output
