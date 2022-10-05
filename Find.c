//7         1,2,5,7,6,9,5       5    1,2
#include<stdio.h>
int main()
{
    int no;
    printf("Enter no:\n");
    scanf("%d",&no);

    int a[no];

    
    for(int i=1;i<=no;i++)
    {
        printf("Enter No: %d\n",i);
        scanf("%d",&a[i]);
    }

    printf("Entered numbers are:\n");
    for(int i=1;i<=no;i++)
    {
        printf("%d ",a[i]);
    }

    int ele;
    printf("\nEnter No to search below no\n");
    scanf("%d",&ele);

    for(int i=1;i<=no;i++)
    {
        if(a[i] < ele)
        {
            printf("%d ",a[i]);
        }
    }
}