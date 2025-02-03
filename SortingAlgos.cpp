#include<iostream>
#include<string>
#include<ctime>
#include<math.h>
#include<chrono>
#include<fstream>
#include<random>

using namespace std;
using namespace std::chrono;

void insertion(int arr[],int size){
    for(int i=1;i<size;i++) {
        int key=arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void bubble(int *arr,int n){
    for(int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selection(int *numbers,int size){
    for(int j=0; j<size-1;j++) {
        int smallest=j;
        
        for(int i=j+1; i < size; i++) {
            if(numbers[i]<numbers[smallest]) {
                smallest=i;
            }
        }
                int temp=numbers[j];
        numbers[j]=numbers[smallest];
        numbers[smallest]=temp;
    }
}

void merge(int* arr, int left, int right) {
    int mid=(left+right)/2;
    int n1 =mid-left+1;
    int n2 =right-mid;
    vector<int>L(n1),R(n2);
    for (int i=0;i<n1;i++) L[i]=arr[left+i];
    for (int j=0;j<n2;j++) R[j]=arr[mid+1+j];
    int i=0,j=0,k=left;
    while (i<n1 && j<n2) {
        if (L[i]<=R[j]) {
            arr[k]=L[i];
            i++;
        } else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2) {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int *arr,int left,int right) {
    if(left<right) {
        int mid=left+(right-left) /2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,right);
    }
}

int partition(int* arr,int low,int high) {
    int pivot=arr[high];
    int i=low-1;
    for (int j=low;j<high;j++) {
        if (arr[j]<pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int* arr,int low,int high) {
    if (low<high) {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}



void random(int *arr,int l){
    for(int i=0;i<l;i++){
        arr[i]=rand()%l+1;
    }
}

int main(){
    int length[8];
    int time[8];

    int n=7;
    for(int i=0;i<8;i++){
        length[i]=n;
        int *arr=new int[n];
        random(arr,n);
        auto s = high_resolution_clock::now();
        merge(arr,0,n);
        auto e= high_resolution_clock::now();
        auto timetaken = duration_cast<microseconds>(e-s);
        double duration= static_cast<long double>(timetaken.count());
        time[i]=duration;
        n=n*6;
        delete []arr;
        cout<<length[i]<<" : "<<time[i]<<endl;
    }
    for(int i=0;i<8;i++){
        cout<<length[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<8;i++){
        cout<<time[i]<<"  ";
    }

    return 0;
}
