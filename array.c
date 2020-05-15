#include<stdio.h>

//function to find smallest value in a array


int smallest(int arr[],int size)
{
  int min=arr[0];
  int i;
   for(i=1;i<size;i++)
    {
      if(arr[i]<min)
       {
         min=arr[i];
       }
	  
    }
    return min;
}	

//function to find largest value in a array


int largest(int arr[],int size)
 {
   int max=arr[0];
   int i;
    for(i=i;i<size;i++)
     {
       if(arr[k]>max)
        {
          max=arr[k];
        }
     }    
return max;	
 }
	

//main function

	
 int main()
  {
    int arr[100],j,size,min;
     printf("enter the number of elements\n");
     scanf("%d",&size);
      printf("enter the elements\n");
       for(j=0;j<size;j++)
        {
          scanf("%d",&arr[j]);
        }
        printf("the largest integer in the array is %d\n",largest(arr,size));
        printf("the smallest integer in the array is %d\n",smallest(arr,size));
		
    }
