#include <stdio.h>
void sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex = j;
            }
        }


        //hoan doi vtri
        if (minIndex != i)
        {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] =temp;
        }
    }
}

//hàm tìm kiếm nhị phan
int binarySearch( int a[],int n, int target)
{
    int left =0;
    int right =n-1;

    while (left <= right)
    {
       int mid =(left+right)/2;
        if (a[mid] == target)
            return mid;
        else if ( a[mid] < target)
            left = mid + 1;
        else
            right =mid -1;
    }
    return -1;
}

int main()
{
    int n;
    printf("nhap n:\n");
    scanf("%d", &n);

    int a[n];
    printf("nhap cac phan tu cua mang:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a,n);
    int search;
    printf("nhap gia tri can tim:\n");
    scanf("%d",&search);
    int result = binarySearch(a,n,search);

    if ( result != -1){
        printf("vi tri thu %d", result+1);
    printf(" do phuc tap thoi gian la O(n log n)\n");
}else

        printf("khong tim thay phan tu %d trong mang", search);

    return 0;
    }
