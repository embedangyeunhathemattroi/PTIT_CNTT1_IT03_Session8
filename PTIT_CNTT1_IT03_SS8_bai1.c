#include<stdio.h>
int linearSearch(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i; // Trả về chỉ số của phần tử tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}


int main()
{
    int a[1000];
    int n;
    int searching;

    printf("nhap n:\n");
    scanf("%d", &n);

    printf("nhap cac phan tu cua mang:\n");
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //nhap gtri can tim
    printf("nhap gtri can tim:\n");
    scanf("%d",&searching);

    //gọi hàm
    int result = linearSearch(a, n, searching);
    //in kqua
    if(result !=-1){
        printf("phan tu %d tim thay tai chi so %d \n",searching, result);
        printf(" do phuc tap thoi gian là :0(1)");
        printf(" đo phuc tap thoi gian o truong hop trung binh và xau nhat la :O(n)");
    } else{
        printf("ko hop");
    }
    return 0;
}
