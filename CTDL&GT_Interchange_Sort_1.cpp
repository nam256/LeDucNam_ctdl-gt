// cài đặt 
//https://www.iostream.vn/giai-thuat-lap-trinh/interchange-sort-pn9gT1
void interchangeSort(int a[], int size)
{
    for (int i = 0; i < arr.length - 1; i++) {
        for (int j = i + 1; j < arr.length; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}