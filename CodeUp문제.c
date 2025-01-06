#include <stdio.h>
int count[500001]; 
int main()
{
    int n;
    scanf("%d", &n);
    int nums[50001]; 
    int result[50001]; 
    int max = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        count[nums[i]] = 1; 
        if (nums[i] > max) max = nums[i];
    }

    int rank = 0;
    for (int i = 0; i <= max; i++) {
        if (count[i] == 1) {
            count[i] = rank; 
            rank++;
        }
    }

   
    for (int i = 0; i < n; i++) {
        result[i] = count[nums[i]]; 
    }

   
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
