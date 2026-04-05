#include <iostream>

using namespace std;

int* mergeSorted(int a[], int b[], int m, int n){
    int i=0,j=0,k=0;
    int *result = new int[m+n];
    while (j < n && i < m){
        if (a[i] > b[j]){
            result[k++]=b[j++];
        }else{
            result[k++]=a[i++];
        }
    }

    while (i < m){
        result[k++] = a[i++];
    }

    while (j < n){
        result[k++] = b[j++];
    }
    return result;
}

int* mergeSort(int array[], int l, int h, int& finalSize){
    
    if(l==h){
        int* base = new int[1];
        base[0] = array[l];
        finalSize =1;
        return base;
    }

    int fhSize, shSize;
    int mid = l + (h - l) / 2;
    int* firstHalf = mergeSort(array, l, mid, fhSize);
    int* secondHalf = mergeSort(array, mid+1, h, shSize);
    finalSize = fhSize + shSize;
    int *result = mergeSorted(firstHalf,secondHalf, fhSize, shSize);
    delete[] firstHalf;
    delete[] secondHalf;
    return result;
}

int main(){
    int unsorted[] = {40,-5,7,34,-20,50,-10,70,58,36,-4};
    int unsortedSize = sizeof(unsorted)/sizeof(unsorted[0]);

    int finalSize;
    int* res = mergeSort(unsorted, 0, unsortedSize-1, finalSize);
    for (int p=0;p<finalSize;p++){
    std::cout << res[p] << std::endl;
    }
    delete[] res;
    return 0;
}