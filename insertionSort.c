#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void *insertionSort(int *vector, int len_vector);
   
int main(void){
    int *p;
    int i;
    srand(time(NULL));
    
    p = (int*)malloc(sizeof(int)*10);
    for(i = 0; i<10; i++){
        p[i] = rand() %100 + 1; // numbers from 1 to 100
    }    
    insertionSort(p, 10);
    for(i = 0; i< 10; i++){
        printf("%d ", p[i]);
    }

    return 0;
}

void *insertionSort(int *vector, int len_vector){
    int i = 0, key = 0, j = 0;
    for(j = 1; j<len_vector; j++ ){
        key = vector[j];
        i = j - 1;
        while(i>= 0 && vector[i] >= key){
            vector[i+1] = vector[i];
            i = i -1;
        }
        vector[i+1] = key;
    }

}
