#include<iostream>
using namespace std;
class stack
{
    int *arr;
    int top;
    
    public:
        stack();
        int push(int,int);
        int pop();
        int isempty();
        int isfull();

};

stack:: stack()
{
    int m=20;
    arr=new int[m];
    top=-1;
}
int stack :: isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stack :: isfull()
{
    if(top==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stack :: push(int val)
{
    if(isfull()==1)
    {
        return 0;
    }
    else
    {
        ++top;
        arr[top]=val;
        return val;
    }
}
int stack :: pop()
{
    if(isempty()==1)
    {
        return 0;
    }
    else
    {
        arr[top]=val;
        top--;
        return val;
    }
}
class queue
{
    int *arr2;
    int front; 
    int rear;

    public:
        queue();
        int enqueue(int);
        int dequeue();
};

queue:: queue()
{
    arr2=new int[m];
    front=-1;
    rear=-1;
}

int queue :: enqueue(int val)
{
    if(rear==size-1)
    {
        return 0;
    }
    else
    {
        rear++;
        arr[rear]=val;
        if(front==-1)
        {
            front=0;
        }
        return val;
    }
}

int queue :: dequeue()
{
  int store_data;
  if(front==-1)
  {
      cout<<"Queue is empty";
      return 0;
  }
  else
  {
      store_data=arr2[front];
      arr2[front]=0;
      if(front==rear)
      {
          front=front-1;
      }
      else
      {
          front++;
          return store_data;
      }     
  }
}
int main()
{
    stack s;
    queue q;
    int choice,data,n,size;
    size=20;
    while(1)
    {
        cout<<"Enter choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                    cout<<"Enter Data to push: ";
                    cin>>data;
                    n=s.push(data);
                    if(n==0)
                    {
                        cout<<"Stack is full";
                    }
                    else
                    {
                        cout<<"Value is inserted succesfully";
                    }
                    break;
            case 2:
                    n=s.pop();
                    if(n==0)
                     {
                        cout<<"Stack is empty";
                     }
                    else
                    {
                        cout<<"Poped Element";
                        cout<<n;
                    }
                    break;
            case 3:
                    cout<<"Enter data to enqueue: ";
                    cin>>data;
                    n=q.enqueue(data);
                    if(n==0)
                    {
                        cout<<"Queue is full";
                    }
                    else
                    {
                        cout<<"Value is inserted succesfully";
                    }
                    break;
            case 4:
                    n=q.dequeue();
                    if(n==0)
                     {
                        cout<<"Queue is empty";
                     }
                    else
                    {
                        cout<<"Poped Element";
                        cout<<n;
                    }
                    break;

            default:
                    cout<<"Enter valid choice";    
                    break;
        }
    }
}