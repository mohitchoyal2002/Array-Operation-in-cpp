/*This is program for Array ADT,
which explain operation on array*/
#include<bits/stdc++.h>
using namespace std;
//creating a stucture
struct array
{
	int *a;
	int length;
	int size;
};

//function for display the array
void display(struct array arr)
{

	printf("entered array is:\n");
	for(int i=0;i<arr.length;i++)
	{
		printf("%d ",arr.a[i]);
	}
}
// function for append which mean adding element on at last
void append(struct array arr)
{
	int i,x;
	
	arr.length++;
	printf("add number.:\n");
	scanf("%d",&x);
	arr.a[arr.length-1]=x;
	
	for(int i=0;i<arr.length;i++)
	{
		printf("%d ",arr.a[i]);
	}
}
//this function is for  inserting element in given index
void insert(struct array *arr ,int index,int c)
{
	
	for(int i=arr->length;i<index;i--)
	{
		arr->a[i]=arr->a[i-1];
		
	}
	arr->a[index]=c;
	arr->length++;
	
	
	
}
//for deleting th element of given index
void pop(struct array *arr,int in)
{
	int d;
	d=arr->a[in]; 
	for(int i=in;i<arr->length;i++)
	{
		arr->a[i]=arr->a[i+1];
	}
	arr->length--;
}

//for swaping the value
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

//function for linear search from array
linear(struct array *arr,int s)
{
	int indx,i;
		for( i=0;i<arr->length;i++)
		{
		if(arr->a[i]==s)
		{
			printf("%d at index: %d",s,i);
			swap(&arr->a[i],&arr->a[0]);
		}
		}

}

//fun for getting  value for given index
void get(struct array arr,int dex)
{
	printf("%d",arr.a[dex]);
}

//set funtion
void set(struct array *arr,int p,int re)
{
	 arr->a[p]=re;
}

//funtion for getting greatest element in array
void max(struct array arr)
{   
	int max=arr.a[0];
	for(int i=0;i<arr.length;i++)
	{
		if(arr.a[i]>max)
		{
			max=arr.a[i];
		}
	}
	printf("%d",max);
}


int main()
{
	struct array arr;
	//creating space in heap memory for dynamic allocation
	arr.a=(int *)malloc(arr.length*sizeof(int));
	//ask user to take input
	printf("enter the size of an array:\n");
	scanf("%d",&arr.size);
	
	printf("enter the length of an array:\n");
	scanf("%d",&arr.length);
	
		printf("enter the no.:\n");
	for(int i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.a[i]);
	}
	
	
	
	//call the function
	display(arr);
	append(arr);
	printf("\n");
	
	int index,c;
	printf("enter the index of array:\n");
	scanf("%d",&index);
	
	printf("insert the element:\n");
	scanf("%d",&c);
	
	insert(&arr,index,c);
	display(arr);
	printf("\n");
	
	int in;
	printf("enter the index you want to delete:\n");
	scanf("%d",&in);
	pop(&arr,in);
	display(arr);
	printf("\n");
	
	//for linear search
	int s;
	printf("enter the no. from an array you want to search:\n");
	scanf("%d",&s);
	linear(&arr,s);
	printf("\n");
	
	//get funtion call
	int dex;
	printf("enter the index for more info:\n");
	scanf("%d",&dex);
	get(arr,dex);
	printf("\n");
	
	//set funtion call
	int p,re;
	printf("enter th index where you want to replace\n");
	scanf("%d",&p);
	printf("\n");
	
	printf("enter the no. you want to replace:\n");
	scanf("%d",&re);
	
	set(&arr,p,re);
	printf("\n");
	display(arr);
	printf("%d\n");
	
	max(arr);
	printf("\n");
	

	
}
