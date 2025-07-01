#include<stdio.h>
void selectionSort(int a[], int n)
{
    for (int i =0; i<n-1;i++)
    {
        int minIndex =i;
        //tìm vtri nhỏ nhất
        for ( int j = i+1;j<n;j++)
        {
            if (a[j]<a[minIndex]){
                minIndex = j;
            }
        }

        //hoán đổi vị trí
        if (minIndex != i)
        {
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
}
void printArray(int a[], int n)
{
    for (int i =0;i<n;i++)
    {
        printf("%d \n", a[i]);
    }
}
    int main()
    {
        int n;
        int a[1000];
    printf("nhap n:");
    scanf("%d",&n);

    if (n<0 || n>1000)
    {
        printf("so k hop");
        scanf("%d",&n);
    }
printf("nhap cac phan tu cua mang:\n");
        for ( int i =0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        selectionSort(a,n);

        printf("mang sau khi sap xep la:");
        printArray(a,n);

        printf("do phuc tap tgian là O(n^2) trong truong hop trung binh va xau nhat\n");
         return 0;
    }
