#include <stdio.h>

int main() {
    int N;
   
    scanf("%d", &N);
    
    int arr[N];
   
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    int evenCount = 0;
    int oddCount = 0;
    
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (oddCount > 0)
            {
                count += oddCount;
                oddCount = 0;
            }
            evenCount++;
        } else 
        {
            if (evenCount > 0)
            {
                oddCount++;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}