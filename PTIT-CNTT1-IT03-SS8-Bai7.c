#include<stdio.h>

void quickSort(int a[], int low, int high) {
    if (low >= high) return;

    int pivot = a[high]; // Chọn phần tử cuối làm pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            // Hoán đổi a[i] và a[j]
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // Đưa pivot về đúng vị trí
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    // Đệ quy sắp xếp 2 bên
    quickSort(a, low, i);
    quickSort(a, i + 2, high);
}

//hàm in mảng
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
    int a[1000];
    printf("nhap n:\n");
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


 quickSort(a,0,n-1);
    printf("mang sau khi sap xep la:c\n");
    printArray(a,n);

    printf("do phuc tap tgian là O(n log n) trong truong hop trung binh va xau nhat\n");
    return 0;

}