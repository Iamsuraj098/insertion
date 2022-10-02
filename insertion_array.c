#include <stdio.h>
void display(int array[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
printf("\n");
}
int insertion(int array[], int size, int element, int capacity, int index){
if (size >= capacity)
return -1;
if (size < capacity)
{for (int i = size; i >= index; i--)
array[i + 1] = array[i];
array[index] = element;
return 1;
}
}
int main()
{int array[50], n;
printf("enter the array size: ");
scanf("%d", &n);
printf("enter the element: ");
for (int i = 0; i < n; i++)
    scanf("%d", &array[i]);
display(array, n);
int element , index;
printf("enter the element: ");
scanf("%d", &element);
printf("enter the index: ");
scanf("%d", &index);
insertion(array, n, element, 50, index);
n += 1;
display(array, n);
return 0;
}