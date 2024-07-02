#include<iostream>
using namespace std;

int partition(int a[],int lower,int upper){
    int pivot=a[lower];                     // pivot=a[0]=12
    int start=lower,end=upper,temp;
    while(start<end){
        while(a[start]<=pivot)              //
            start ++;
        while(a[end]>pivot)
            end--;
        if(start<end){
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=pivot;
    a[lower]=a[end];
    a[end]=temp;
    return end;
}


void quicksort(int a[],int lower,int upper){
    if(lower<upper){
        int pos=partition(a,lower,upper);
        quicksort(a,lower,pos-1);
        quicksort(a,pos+1,upper);
    }
}

int main()
{
    int ar[6]={12,43,54,2,21,9};

    for (int i=0;i<6;i++){
        cout<<ar[i]<<" ";
    }

    quicksort(ar,0,5);
    cout<<endl;
    for (int i=0;i<6;i++){
        cout<<ar[i]<<" ";
    }

}
