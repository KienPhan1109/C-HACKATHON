#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, i, j, pos, num, luachon, a[100], countSohoanhao = 0, sum = 0, max2 = 0, max = 0, ktra = 0, del, key, key1 = 0;
    while (true)
    {
        printf("\n");
        printf("\nMENU\n");
        printf("\n1. Nhập số phần tử và giá trị cho mảng\n");
        printf("\n2. In ra giá trị các phần tử trong mảng theo dạng (arr[0] = 1, arr[1] = 5 ... )\n");
        printf("\n3. Đếm số lượng các số hoàn hảo có trong mảng\n");
        printf("\n4. Tìm giá trị lớn thứ 2 trong mảng\n");
        printf("\n5. Thêm một phần tử vào vị trí ngẫu nhiên trong mảng\n");
        printf("\n6. Xóa phần tử tại một vị trí cụ thể\n");
        printf("\n7. Sắp xếp mảng theo thứ tự tăng dần\n");
        printf("\n8. Tìm kiếm phần tử trong mảng\n");
        printf("\n9. Sắp xếp lại mảng và hiển thị ra toàn bộ phần tử có trong mảng sao cho toàn bộ số chẵn đứng trước số lẻ đứng sau\n");
        printf("\n10. Đảo ngược thứ tự của các phần tử có trong mảng\n");
        printf("\n11. Thoát\n");
        printf("\nNhập lựa chọn: ");
        scanf("%d", &luachon);
        if (luachon != 1 && ktra == 0)
        {
            while (luachon != 1)
            {
            printf("\nBạn chưa nhập phần tử vào mảng\n");
            break;
            }
        }
        else
        {
            ktra = 1;
        }
        
        switch (luachon)
        {
        case 1:
            printf("\nNhập vào số phần tử trong mảng: ");
            scanf("%d", &n);
            a[n];
            for (i = 0; i < n; i++)
            {
                printf("\nNhập vào phần tử thứ %d: ", i + 1);
                scanf("%d", &a[i]);
            }
            break;
        
        case 2:
            printf("\nCác giá trị trong mảng là: \n");
            for (i = 0; i < n; i++)
            {
                if (i == n - 1)
                {
                    printf("arr[%d] = %d", i, a[i]);
                }
                else
                {
                    printf("arr[%d] = %d, ", i, a[i]);
                }
            }
            break;

        case 3:
            printf("\nMảng ban đầu là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            for (i = 0; i < n; i++)
            {
                int sum = 0;
                for ( j = 1; j < a[i] - 1; j++)
                {
                    if (a[i] % j == 0)
                    {
                        sum += j;
                    }
                }
                if (sum == a[i])
                {
                    countSohoanhao++;
                }
            }
            printf("\nSố lượng số hoàn hảo có trong mảng là: %d", countSohoanhao);
            break;
        
        case 4:
            max = a[0];
            max2 = a[0];
            for (int i = 1; i < n; i++) {
                if (a[i] > max) {
                    max2 = max;
                    max = a[i];
                }
                else if (a[i] > max2 && a[i] != max) 
                {
                    max2 = a[i];
                }
            }
            printf("\nSố lớn thứ hai trong mảng là: %d", max2);
            break;

        case 5:
            printf("\nMảng ban đầu là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            
            do
            {
                printf("\nNhập vị trí cần thêm: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > n)
                {
                    printf("\nVị trí cần thêm không hợp lệ. Vui lòng nhập lại: ");
                }
            } while (pos < 0 || pos > n);
            printf("\nNhập số cần thêm: ");
            scanf("%d", &num);
            for (i = n - 1; i >= pos; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos] = num;
            n++;
            printf("\nMảng sau khi thêm là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;

        case 6:
            printf("\nMảng ban đầu là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            do
            {
                printf("\nNhập vị trí cần xóa: ");
                scanf("%d", &del);
                if (del < 0 || del > n)
                {
                    printf("\nVị trí cần xóa không hợp lệ. Vui lòng nhập lại: ");
                }
            } while (del < 0 || del > n);
            for (i = del; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            printf("\nMảng sau khi xóa là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;

        case 7:
            printf("\nMảng ban đầu là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            for (i = 1; i < n; i++)
            {
                key = a[i];
                j = i - 1;
                while (j >= 0 && key < a[j]) {
                    a[j + 1] = a[j];
                    j = j - 1;
                }
                a[j + 1] = key;
            }
            printf("\nMảng sau khi sắp xếp là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;

        case 8:
            printf("\nMảng ban đầu là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\nNhập vào số cần tìm: ");
            scanf("%d", &num);
            for (i = 0; i < n; i++)
            {
                if (a[i] == num)
                {
                    printf("\nSố %d nằm ở vị trí thứ %d trong mảng.\n", num, i);
                    key1 = 1;
                }
                else if (i == n - 1 && key1 == 0)
                {
                    printf("\nSố %d không tồn tại trong mảng.\n", num);
                }
            }
            break;
        case 9:
            printf("\nMảng ban đầu là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\nMảng sau khi được sắp xếp là: ");
            for ( i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    printf("%d ", a[i]);
                }
            }
            for ( i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    printf("%d ", a[i]);
                }
            }
            break;

        case 10: 
            printf("\nMảng ban đầu là: \n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\nMảng sáu khi được đảo ngược là: \n");
            for ( i = n - 1; i >= 0; i--)
            {
                printf("%d ", a[i]);
            }
            break;
        
        case 11:
            return 0;

        default:
            printf("\nKhông có lựa chọn này.");
            break;
        }
    }
}