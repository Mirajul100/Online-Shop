#include <stdio.h>

void divide(int array[], int start, int end);
void conquer(int arr[], int start, int mid, int end);
void arrprint(int arr[]);

int main()
{
    int arr[10] = {2, 4, 3, 1, 6, 7, 5, 8, 10, 9};
    int n = 10 - 1;
    int s = 0;

    divide(arr, s, n);
    arrprint(arr);
    return 0;
}

void divide(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + (end - start) / 2);

    divide(arr, start, mid);
    divide(arr, mid + 1, end);

    conquer(arr, start, mid, end);
}

void conquer(int arr[], int start, int mid, int end)
{
    int n = (end - start + 1);
    int temp[n];
    int k = 0;
    int index1 = start;
    int index2 = mid + 1;

    while (index1 <= mid && index2 <= end)
    {
        if (arr[index1] <= arr[index2])
        {
            temp[k++] = arr[index1++];
        }
        else
        {
            temp[k++] = arr[index2++];
        }
    }

    while (index1 <= mid)
    {
        temp[k++] = arr[index1++];
    }

    while (index2 <= end)
    {
        temp[k++] = arr[index2++];
    }
    int j = start;
    for (int i = 0; i < n; i++)
    {
        arr[j] = temp[i];
        j++;
    }
}

void arrprint(int arr[])
{
    for (int loop = 0; loop < 10; loop++)
        printf("%d ", arr[loop]);
}