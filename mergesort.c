#include<stdio.h>
#include<conio.h>

void merge(int A[],int mid,int l,int h){
   int i ,j ,k ,B[100];
   i=l;
   j=mid+1;
   k=l;
   while(i<=mid&&j<=h){
    if(A[i]>A[j]){
       B[k]=A[i];
       i++;k++;
    }
    else{
      B[k]=A[j];
      j++;k++;
    }
   }
   while(i<=mid){
    B[k]=A[i];
    k++;i++;
   }
   while(j<=h){
    B[k]=A[j];
    k++;j++;
 
   }
}

void mergeSort(int A[],int l,int h){
if(l<h){
    int mid=l+h/2;
    mergeSort(A,l,mid);
    mergeSort(A,mid+1,h);
    merge(A,mid,l,h);
}
}
int main()
{
    int A[]={10,7,12,8,3,5,6};
    int n = 7;
    mergeSort(A,0,6);
}