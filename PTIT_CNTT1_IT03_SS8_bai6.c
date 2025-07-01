#include<stdio.h>
void merge(int a[], int left, int mid, int right) {
    int leftLength = mid - left + 1;
    int rightLength = right - mid;

    int leftArray[leftLength], rightArray[rightLength];

    for (int i = 0; i < leftLength; i++) {
        leftArray[i] = a[left + i];
    }

    for (int j = 0; j < rightLength; j++) {
        rightArray[j] = a[mid + 1 + j];
    }

    int leftIndex = 0, rightIndex = 0, arrIndex = left;

    while (leftIndex < leftLength && rightIndex < rightLength) {
        if (leftArray[leftIndex] <= rightArray[rightIndex]) {
            a[arrIndex] = leftArray[leftIndex];
            leftIndex++;
        } else {
            a[arrIndex] = rightArray[rightIndex];
            rightIndex++;
        }
        arrIndex++;
    }

    while (leftIndex < leftLength) {
        a[arrIndex] = leftArray[leftIndex];
        leftIndex++;
        arrIndex++;
    }

    while (rightIndex < rightLength) {
        a[arrIndex] = rightArray[rightIndex];
        rightIndex++;
        arrIndex++;
    }
}

void mergeSort(int a[], int left, int right)
{
    if (left<right)
    {
        int mid =( left+right)/2;

        //goi de quy
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a,left,mid,right);
    }
}

void printArray(int a[], int n)
{
    for (int i=0;i<n;i++)
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


    mergeSort(a,0,n-1);
    printf("mang sau khi sap xep la:\n");
    printArray(a,n);

    printf("do phuc tap tgian là O(n log n) trong truong hop trung binh va xau nhat\n");
    return 0;

}
