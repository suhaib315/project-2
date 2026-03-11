#include <stdio.h>
#include<string.h>


/*{
    int x,y;
    scanf("%d",&x);
    for(y=2;y<x;y++)
    {
        if(x%y==0)
        {
            break;
        } 
    }
    if(y==x)
    {
        printf("number is prime");
    }
    else
    {
        printf("Number is not prime");
    }

}
{
    int x,y;
    
    for(x=2;x<100;x++)
    {
        for(y=2;y<x;y++)
        {
            if(x%y==0)
            {
                break;
            }
            
        }
        if(y==x)
        {
            printf("%d",x);
            printf("\n");
        }
        
    }
    

}
{
    int x,y,z,t;
    printf("enter two numbers in ascending order");
    scanf("%d %d",&x,&y);
    for(z=x+1;z<y;z++)
    {
        for(t=2;t<z;t++)
        {
            if(z%t==0)
              break;

        }
        if(z==t)
        {
            printf("%d",z);
            printf("\n");
        }
        
        
        

    }
}
{
    int x,y;
    y=0;
    scanf("%d",&x);
    for(x=x;x>=0;x--)
    {
        x=x/10;
        y++;
    }
    printf("%d",y);
    
}
{
    int a,a=12;

    switch(a)
    {
        case 11:
         printf("HI");
        case 12:
         printf("HELLO");
        case 0:
         printf("HOLA");
           break;
        default:
         printf("WELCOME");
    }
}
int main()
{
    int x,y,z,w;
    printf("ENTER A THREE DIGIT NUMBER\n");
    scanf("%d",&x);
    if(x>99&&x<1000 || x>-1000&x<-99)
    {
      
      printf("threre digit number is %d\n",x);
      y=x%10;
      x=x/10;
      z=x%10;
      x=x/10;
      w=x+y+z;
      printf("sum of digits of three digit number = %d",w);
      
    }
    else
    {
        printf("ERROR : NUMBER IS NOT THREE DIGIT");
    }
   int main()
   {
    int x,y,z;
    printf("ENTER A NUMBER\n");
    scanf("%d",&x);
    printf("ENTER A DIGIT\n");
    scanf("%d",&z);

    y=(x/10)*10+z;
    printf("%d",y);

   }
int main()
{
    int y,x;
    for(x=1;x<=5;x++)
    {
        printf("ENTER YOUR MARKS IN SUBJECT %d\n",x);
        scanf("%d",&y);
        {
            if(y<33)
            {
                break;
            }
        }
    }
    if(x==6)
    {
        printf("YOU HAD PASSED THE EXAM");
    }
    else
    {
        printf("YOU HAD FAILED THE EXAM ");
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0&&x%2==0)
    {
        printf("number is divisible by both 2 and 3");
    }
    else if(x%3==0)
    {
        printf("number is non divisible by 2");
        
    }
    else if(x%2==0)
    {
        printf("number is non divisible by 3");
    }
    else
    {
        printf("number is non divisible by both 2 nad 3");
    }
    printf("\n");
}

int main()
{
    int a;
    printf("enter the number digit by digit\n");
    printf("enter -1 to stop it\n");
    scanf("%d",&a);
    if(a>0)
     main();
    else
      printf("%d",a);

      
  
}
int main()
{
    int x,a,b,c,d,e;
    printf("ENTER A THREEE DIGIT NUMBER\n");
    scanf("%d",&x);
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x;
    d=c*10+b;
    e=d*10+a;
    printf("%d",b);



}
int main()

{
    int x,s,k,y;
    float m;
    s=0;
    for(y=1;y<=10;y++)
    {
        printf("ENETR  NUMBER %d\n",y);
        scanf("%d",&x);
        k=s+x;
        s=k;
    }
    m=s/10.0;

    printf("AVERAGE IS %f\n ", m);

}
int main()
{
    int a[10],i,s=0,y,z;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        y=s+a[i];
        s=y;


    }
    printf("%d",s);
}
int main()
{
    int a[10],i,y,z;
    float s;
    s=0;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        y=s+a[i];
        s=y;


    }

    printf("%f",s/10.0);
}

int main()
{
    int a[10],x,y;
    for(x=0;x<=9;x++)
    {
        scanf("%d",&a[x]);

    }
    y=a[0];
    for(x=1;x<=9;x++)
    {
        if(y<a[x])
        {
            y=a[x];
        }
    }
    printf("%d",y);
}
int main()
{
    int a[6],x,y,i,z;
    float k;
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(x=0;x<=5;x++)
    {
        a[x];
        for(y=0;y<=5;y++)
        {
            k=a[x]/a[y];
            if(k<1)
            {
                break;
            }
           
        }
        if(y==6)
        {
            printf("%d",a[x]);
        }
        
    }

}
int main()
{
    int a[6],x,y,i,z,c[1],b[1];
    float k;
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(x=0;x<=5;x++)
    {
        for(y=0;y<=5;y++)
        {
            k=a[x]/a[y];
            if(k>=1)
            {
                break;
            }
        }
        if(y==6)
        {
            printf("ans = %d",a[x]);
        }
    } 
}
void F(int *x ,int *y)
{
    int *z;
    *z=*y;
    *y=*x;
    *x=*z;
}
int main()
{
    int a,b;
    a=1,b=2;
    printf("a = %d ,b=%d\n",a,b);
    F(&a,&b);
     printf("a = %d ,b=%d ",a,b);

}*/
