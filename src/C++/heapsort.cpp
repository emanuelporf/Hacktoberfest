#include<stdio.h>

void swap(int *a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; ++i) 
        printf("%d ",arr[i]); 
    printf("\n"); 
} 

void heapify(int arr[], int n, int i) 
{ 
    int smallest = i;  
    int l = 2 * i + 1; 
    int r = 2 * i + 2;  
  

    if (l < n && arr[l] < arr[smallest]) 
        smallest = l; 
  
    if (r < n && arr[r] < arr[smallest]) 
        smallest = r; 
  
    if (smallest != i) { 
        swap(&arr[i], &arr[smallest]); 
  
        heapify(arr, n, smallest); 
    } 
} 

int buildHeap(int arr[],int n)
{
	for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
    printf("Min Heap :\n");
    printArray(arr,n);
}

int heapSort(int arr[],int n)
{
	int sort[20],k=0;n--;
	while(n>=0)
	{
		sort[k++]=arr[0];arr[0]=arr[n--];
		buildHeap(arr,n+1);
	}  
    printf("Sorted Heap :\n");
    printArray(sort,k);
}

int main()
{
	int arr[20],d=0,i=0;
	printf("Press -1 to exit\nEnter>>");
	scanf("%d",&d);
	while(d!=-1)
	{
		arr[i++]=d;
		printf("Enter>>");
		scanf("%d",&d);
	}
	buildHeap(arr,i);
	heapSort(arr,i);
	return 0;
}
