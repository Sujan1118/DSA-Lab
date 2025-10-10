// #include <stdio.h>

// int main() {
//     int arr[100], n, i;
//     int largest, second;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     if (n < 2) {
//         printf("At least two elements are required.\n");
//         return 0;
//     }

//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize largest and second largest
//     if (arr[0] > arr[1]) {
//         largest = arr[0];
//         second = arr[1];
//     } else {
//         largest = arr[1];
//         second = arr[0];
//     }

//     // Find second largest
//     for (i = 2; i < n; i++) {
//         if (arr[i] > largest) {
//             second = largest;
//             largest = arr[i];
//         } else if (arr[i] > second && arr[i] != largest) {
//             second = arr[i];
//         }
//     }

//     printf("Second largest element = %d\n", second);

//     return 0;
// }


#include<stdio.h>
int main(){
    int a[5] = {12, 2 , 35, 40, 3};
    int i=0;
    int largest = a[i];
    int second  = a[i+1];
    int temp;
    for(int i=2;i<5;i++){
        if(a[i] > largest  ){
            temp = largest;
            largest = a[i];
            second = temp;
        }else{
            
            temp = largest;
            largest = a[i+1];
            second = temp;
        }
    }

    printf("second largest = %d", second);
    return 0;
}