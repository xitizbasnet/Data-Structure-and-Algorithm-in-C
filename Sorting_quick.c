#include <stdio.h>
void quicksort(int a[],int low,int high);
int partition(int a[],int low,int high);
int a[5] = {55,1,74,13,45};
int main(){
    int i,n;
    printf("\nOriginal Array\n");
    for(i=0;i<5;i++){
        printf("%4d",a[i]);
    }
    quicksort(a,0,4);
    printf("\nThe sorted Array is!\n");
    for(i=0;i<5;i++){
        for(i=0;i<5;i++){
            printf("%4d",a[i]);
        }
    }
    return 0;
}
void quicksort(int a[],int low,int high){
    int j;
    if(low<high){
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
int partition(int a[],int low,int high){
    int i,j,temp,key;
    key=a[low];
    i=low+1;
    j=high;
    while(1){
        while(i<high&&key>=a[i])
            i++;
        while(key<a[j])
            j--;
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else{
            temp=a[low];
            a[low]=a[j];
            a[j]=temp;
        }
        return j;
    }
}
