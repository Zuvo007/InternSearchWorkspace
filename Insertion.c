//Insertion generalized framework
//{10,20,40,50,60}
//{10,20, ,40,50,60}

#include<stdio.h>
int main()
{
    int number[10]={10,20,40,50,60};
    int size=20/sizeof(number[0]);
    int position;
    int value;
    printf("enter a position from where you start Insertion :");
    scanf("%d",&position);
    printf("enter a value you want to insert :");
    scanf("%d",&value);
    if(position<=0||position>size)
        printf("invalid position");
    else{
    for(int i=size-1;i>=position-1;i--)//{10,20,40,40,50,60}
    {
        number[i+1]=number[i];
    }
    number[position-1]=value;//{10,20,30,40,50,60}
    size++;//size=size+1

    for(int i=0;i<size;i++)
    {
        printf("%d ",number[i]);
    }
}
}
