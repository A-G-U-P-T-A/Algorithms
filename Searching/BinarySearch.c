#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;// important not to use (l+r)/2

        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
 
int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    int r = binarySearch(arr, 0, n-1, x);
    if(r!=-1){
      printf("Number is present\n");
    }
    else{
      printf("Number is not present\n");
    }
    return 0;
}
