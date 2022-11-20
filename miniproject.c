#include<stdio.h>
#include<math.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int ascending_sort(int arr[],int l)
{
    printf("Asceending Sorting:\n");
    int i, j, min_index;
 
     for (i = 0; i < l-1; i++) 
     {
 
        // Find the minimum element in unsorted array
        min_index = i;
        for (j = i + 1; j < l; j++)
        { if (arr[j] < arr[min_index])
                min_index = j;
        }
         // Swap the found minimum element with the first element
     swap(&arr[min_index], &arr[i]);

     }
        for (i = 0; i < l; i++)
        {     printf("%d ", arr[i]);
             printf("\n");
        }
         return arr;
}
int descending_sort(int arr[],int l)
{ 
    printf("\nDescending Sorting:\n");
    int i,j,t=0;
  // iterates the array elements
    for (i = 0; i < l; i++) {
        
        // iterates the array elements from index 1
        for (j = i + 1; j < l; j++) {
            
            // comparing the array elements, to set array
            // elements in descending order
            if (arr[i] < arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    // printing the output
    for (i = 0; i < l; i++) {
        printf("%d ", arr[i]);
        printf("\n");
    }
    return arr;
}
void no_of_even(int arr[],int l)
{
    printf("\nNumber of even elements:\n");
 int count=0;
 for(int i=0;i<l;i++)
 {
    if(arr[i]%2==0)
    count=count+1;
 }
 printf("%d\n\n",count);
}
void no_of_odd(int arr[],int l)
{
 printf("Number of odd elements:\n");
    int count=0;
 for(int i=0;i<l;i++)
 {
    if(arr[i]%2!=0)
    count=count+1;
 }
 printf("%d\n\n",count);
}
float sum_of_elements(int arr[],int l)
{
    printf("\nSum of elements:\n");
    int sum=0;
    for(int i=0;i<l;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
float mean_of_elements(int arr[],int l,float addition)
{
    printf("\nMean of elements:\n");
    float mean=addition/l;
    return mean;
}
void frequency_of_each_element(int arr[],int l)
{
    printf("\n\n Frequency of each element:");
    int freq[l];    
    int  seen=-1;  
    for(int i = 0; i < l; i++)
    {    
        int count = 1;    
        for(int j = i+1; j < l; j++)
        {    
            if(arr[i] == arr[j])
            {    
                count++;    
                //To avoid counting same element again    
                freq[j] = seen;    
            }    
        }    
        if(freq[i] !=seen)    
            freq[i] = count;    
    }    
        
    //Displays the frequency of each element present in array    
    printf("\n---------------------\n");    
    printf(" Element| Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < l; i++)
    {    
        if(freq[i] !=seen)
        {    
            printf("%d", arr[i]);    
            printf("\t|");    
            printf(" \t%d\n", freq[i]);    
        }
        
    }   
        printf("---------------------\n\n");

}

int elements_with_frequecncy_greater(int arr[],int l)

{  
    int k=1;
    int element=0;
    int seen=-1;
    printf("\n\nElements with Frequency Greater than %d: \n",k);
    
      for (int i = 0; i < l; i++)
      {
        int count = 0;
        for (int j = 0; j <l; j++) {
            if (arr[i] == arr[j])
                count++;
                
        }
 
        if (count>k) 
        {
            element++;
        }
    }
    printf("%d",element);
}

int elements_with_frequency_lower(int arr[],int l)
{
    int k=2;
    int element=0;
    int seen=-1;
    printf("\n\nElements with Frequency Lower than %d: \n\n",k);
    
      for (int i = 0; i < l; i++)
      {
        int count = 0;
        for (int j = 0; j <l; j++) {
            if (arr[i] == arr[j])
                count++;
                
        }
 
        if (count<k) 
        {
            element++;
        }
    }
    printf("%d",element);
   
} 


int no_of_elements_greater_than_k(int arr[],int l)
{   int k=5;
    int count =0;
    for(int i=0;i<l;i++)
    { 
     
        if(arr[i]>k)
        count++;
    }
    printf("\n\nNumber of elements greater than %d:\n%d\n",k,count);
    return 0;
}
int no_of_elements_lower_than_k(int arr[],int l)
{  
    int k=2;
     int count =0;
    for(int i=0;i<l;i++)
    { 
     
        if(arr[i]<k)
        count++;
    }
    printf("\nNumber of elements less than %d:\n%d\n",k,count);
    return 0;
}

    
float maximum_value(int arr[],int l)
{
    printf("\nMaximum value among the array elements:\n");
    descending_sort(arr,l);
    return arr[0];
}

float minimum_value(int arr[],int l)
{
    printf("\n\nMinimum value among the array elements:\n");
    ascending_sort(arr,l);
    return arr[0];

}

int no_of_positive_elements(int arr[],int l)
{  
    int count=0;
    for(int i=0;i<l;i++)
    if(arr[i]>=0)
    count++;
    printf("\nNumber of Positive elements:\n %d",count);
}

int no_of_negative_elements(int arr[],int l)
{  
    int count=0;
    for(int i=0;i<l;i++)
    if(arr[i]<0)
    count++;
    printf("\nNumber of Negative elements:\n %d",count);
}


int main()
{ 
    int arr[5]={3,3,3,3,1};
  int l = sizeof(arr) / sizeof(arr[0]);
  printf("Enter length of array:");
  scanf("%d",&l);
  printf("Input Array:\n\n");
  for(int i=0; i<l;i++)
  { 
    printf("Enter %d element of array:\t",i);
    scanf("%d",&arr[i]);
  }
  

ascending_sort(arr,l);

descending_sort(arr,l);

no_of_even(arr,l);

no_of_odd(arr,l);

no_of_positive_elements(arr,l);

no_of_negative_elements(arr,l);



float addition=sum_of_elements(arr,l);
printf("%.2f\n\n",addition);

float average=mean_of_elements(arr,l,addition);
printf("%.2f",average);

frequency_of_each_element(arr,l);

elements_with_frequecncy_greater(arr,l);

elements_with_frequency_lower(arr,l);

maximum_frequency(arr,l);

minimum_frequency(arr,l);


no_of_elements_greater_than_k(arr,l);

no_of_elements_lower_than_k(arr,l);

int r1=maximum_value(arr,l);
printf("\nMaximum Value:\n %d",r1);

int r2=minimum_value(arr,l);
printf("\nMinimum Value:\n %d",r2);


return 0;
}

