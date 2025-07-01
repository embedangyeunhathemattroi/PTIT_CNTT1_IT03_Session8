#include<stdio.h>
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int value = a[i];
        int position = i - 1;

        // Di chuyển các phần tử lớn hơn value sang phải
        while (position >= 0 && a[position] > value) {
            a[position + 1] = a[position];
            position--;
        }
        // Chèn value vào vị trí đúng
        a[position + 1] = value;
    }
}

void printArray(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d,a[i]");
    }
    printf("\n");
}

int main()
{
    int n;
    int a[1000];
    printf("nhap n");
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

   insertionSort(a,n);

    printf("mang sau khi sap xep la:");
    printArray(a,n);

    printf("do phuc tap tgian là O(n^2) trong truong hop trung binh va xau nhat\n");
    return 0;

}