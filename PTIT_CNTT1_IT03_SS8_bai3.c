#include<stdio.h>
#include <stdio.h>

void bubbleSort(int a[], int n)
{
    for (int i =0; i<n-1;i++)
    {
        for (int j =0;j<n-i-1;j++)
        {
            if (a[j] >a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

//hàm in
void printArray(int a[], int n)
{
    for (int i =0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    int a[100];
    printf("nhap n:");
    scanf("%d",&n);

    if (n<0 || n>100)
    {
        printf("so luong phan tu khong hop le\n");
        return 0; // Kết thúc chương trình nếu n không hợp lệ
    }
    //nhap ptu trong mang
    printf("nhap %d ptu trong mang",n);
    for (int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //sắp xếp mảng
    bubbleSort(a,n);
    //in mảng sau khi sắp xếp
    printf("mang da dc sap xep ");
    printArray(a,n);
    printf("do phuc tap thoi gian la O(n^2) trong truong hop xau nhat va trung binh\n");


    return 0;
}