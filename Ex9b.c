#include 
int Queue[100];
int front=-1,rear=-1;
void enqueue(int item,int N)
{
  rear=(rear+1)%N;
  if(front==rear)
  {
    return;
  }
  else
  {
    Queue[rear]=item;
    if(front==-1)
    front=rear;
  }
}
void dequeue(int N)
{
  int temp=Queue[front];
  if(front==rear)
  front=rear=-1;
  front=(front+1)%N;
  return;
}
void printQueue()
{
  int i=front;
  for(i;i<=rear;i++)
  {
    printf("%d ",Queue[i]);
  }
}
  
  int main()
  {
    // write your code here
    int N;
    scanf("%d",&N);
    int item;
    for(int i=0;i
