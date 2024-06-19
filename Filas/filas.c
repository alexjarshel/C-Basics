#include <stdio.h>
#include <stdlib.h>

#define size 3

struct queue_type{
    int data [size];
    int ini;
    int end;
};

struct queue_type queue;

void push_back(int element){
    if(queue.end == size){
        printf("FULL QUEUE\n");
        system("pause");
    }else{
        queue.data[queue.end] = element;
        queue.end ++;
    }
}

int pop(){
    int element;
    if(queue.end == queue.ini){
        printf("EMPTY QUEUE\n");
        system("pause");
    }else{
        element = queue.data[queue.ini];
        for(int i=0; i<size; i++){
            queue.data[i] = queue.data[i+1];
            queue.data[queue.end] = 0;
            queue.end--;
            return element;
        }
    }
}