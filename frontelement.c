#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
int Front(){
    if (front==-1)
        return -1;  
    return queue[front];
}
int main(){
    queue[0]=10;
    queue[1]=20;
    queue[2]=30;
    front=0;
    rear=2;
int frontelement=Front();
if (frontelement==-1)
    printf("Queue is empty\n");
else
    printf("Front element= %d\n",frontelement);
    return 0;
}
