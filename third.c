#include<stdio.h>
#include<string.h>


/*{
    int a[4],y,i,k;
    
    for(i=0;i<=3;i++)
    {
        printf("HLOO");
    
        scanf("%d",&a[i]);
    }
    for(i=0;i<=3;i++)
    {
        a[i];
        for(y=0;y<=3;y++)
        {
            k=a[i]/a[y];
            if(k>=1 && i!=y)
            {
                break;
            }
            
           
        }
        if(y==4)
        {
            printf("ans = %d ",a[i]);
        }
    }
} 
    
{
    int a[4],x,y,k,z,b;
    
    
    for(x=0;x<=3;x++)
    {
        
        scanf("%d",&a[x]);
    }
    for(x=0;x<=3;x++)
    {
        z=0;
        a[x];
        for(y=0;y<=3;y++)
        {
            
            k=a[x]/a[y]; 
            if(k==0) 
            {
               z++;
            }
        }
        if(z==1)
        {
           printf("%d ",a[x]);

        }    
    }    
}   
{
    int a[4],x,y,k,z,b;
   
    
    
    for(x=0;x<=3;x++)
    {
        
        scanf("%d",&a[x]);
    }
    for(x=0;x<=3;x++)
    {
        z=0;
       
        a[x];
        for(y=0;y<=3;y++)
        {
            
            k=a[x]/a[y]; 
            if(k==0) 
            {
               z++;
            }
        }
       
        if(z==3-b)
        {
           printf("%d ",a[x]);
           b++;

        } 
     break;
    } 
     
} 
void example5()
{
    int a[4],x,y,k,b,z;
    b=0;
   
    for(x=0;x<=3;x++)
    {  
        scanf("%d",&a[x]);
    }
    for(x=0;x<=3;x++)
    {
        z=0;
        a[x];
        for(y=0;y<=3;y++)
        {  
            k=a[x]/a[y]; 
            if(k==0) 
            {
               z++;
            }
        }  
        if(z==3-b)
        {
            printf("%d ",a[x]);
            b++;
            break;
        }    
    } 
}
void example6()
{
    char str[20],a,e,i,o,u;
    int x,y;
    for(x=0;str[x];x++)
    {
        if(str[x]==a||str[x]==e||str[x]==i||str[x]==o||str[x]==u)
        y++;
    }
}
void example7()
{
    char ch1='a',ch2='A',str[40];
    int a1;
    scanf("%s",str);
    for(a1=0;a1<=40;a1++)
    {
        for(ch1='a',ch2='A';ch1<='z',ch2<='Z';ch1++,ch2++)
        {
            if(str[a1]==ch1)
            {
                printf("%c",ch2);
            }
        }
    }
}
void example9()
{
    char c1,str[20];
    int a1;
    scanf("%s",str);
    for(a1=20;a1>=0;a1--)
    {
        for(c1='a';c1<='z';c1++)
          if(str[a1]==c1)
            {
                printf("%c",c1);
            }
    }   
}
void example10()
{
    char str[]="!@#$81hii";
    int b1,c1,d1,a1;
    b1=0,c1=0,d1=0,c1=0;
    for(a1=0;str[a1];a1++)
    {
        if(str[a1]>='a'&&str[a1]<='z' || str[a1]>='A'&&str[a1]<='Z')
        {
            b1++;
        }
        else if(str[a1]>='0' && str[a1]<='9')
        {
            d1++;
        }
        else
        {
            c1++;
        }
    }
    printf("this string contains %d  number of alphabets\n ",b1);
    printf("this string contains %d numbers\n",d1);
    printf("this string contains %d number of constants\n",c1);
   
  
}
void example11()
{
    int a1;
    char str[20];
    fgets(str,20,stdin);
    for(a1=0;str[a1];a1++)
    {

    }
    printf("%d",a1);
 
} 
  
void example12()
{

    char str[20];
    int x;
    fgets(str,20,stdin);
    printf("%s",str);


}
void example13()
{    char str1[50],str[]="suhaib illahi";
    int l;
    l=strlen(str);
    strcpy(str1,str);

    printf("%c",str1[20]);
}
void example14()
{
    char str[50];
    int x,l;
    l=0;
    fgets(str,50,stdin);
    for(x=0;str[x];x++)
    {
        if("%d",str[x]==32)
        {
            l++;
        }
    }
    printf("%d",l);

}
void example15()
{
    char str[]="hello";
    str[1]='!';
    str[3]='@';
    printf("%s",str);
}
void example16()
{
    char str[50]; 
    int x;
    fgets(str+5,50,stdin);
    printf("%d\n",str[5]);
    for(x=5;str[x];x++)
    {
        printf("%d ",str[x]);
    }
}
void example17()
{
    int a[10],x,y,s;
    s=0;
    for(x=0;x<=9;x++)
    {
        scanf("%d",&a[x]);
        y=a[x]+s;
        s=y;
    }
    printf("%d",s);
}
void example18()
{
    int a[10],b[10],x;
    for(x=0;x<=9;x++)
    {
        scanf("%d",&a[x]);
        b[x]=a[x];
    }
    for(x=0;x<=9;x++)
    {
        printf("%d",b[x]);
    }
}

void add2(int a,int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}
float f1(int x)
{
    return 3.14*x*x;
}
int f2(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int f3(int x)
{
    return x;
}

int f4(int a,int b)
{
    while(a)
    {
        if(a%10==b)
        {
            return 1;
        }
        a=a/10;
    }
    return 0;
}

/*void swap(int*x,int*y);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);


}
   
void swap(int*x,int*y)
{
    int c;
    c=*y;
    *y=*x;
    *x=c;
}
swap(int *x,int *y);
int main()
{
    char arr1[]="SUHAIB",arr2[]="ILLAHI";
    printf("%s %s",arr1,arr2);
    swap(arr1,arr2);
}
void swap(int *x,int *y);
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
void example19()
{
    int arr[10],x,y,a,k,c;
    c=0;
    for(x=0;x<=9;x++)
    {
        scanf("%d",&arr[x]);
    }
    for(x=0;x<=8;x++)
    {
        a=1;
        for(y=x+1;y<=9;y++)
        {
            k=arr[x]-arr[y];
            {
                if(k==0)
                {
                    a++;
                }
            }
        } 
        if(a>=2&&arr[x]!=c)
            {
                printf("%d is repeated %d times\n",arr[x],a);
                c=arr[x];
            }  
    } 
}
int main(
{
    example19();
}


int main()
{
    int x,y,a[3][3],b[3][3],c[3][3];
    for(x=0;x<=2;x++)
    {
        for(y=0;y<=2;y++)

        {
            printf("ENTER a[%d][%d] element\n",x,y);
            scanf("%d",&a[x][y]);
        }
    }
    for(x=0;x<=2;x++)
    {
        for(y=0;y<=2;y++)

        {
            printf("ENTER b[%d][%d] element\n",x,y);
            scanf("%d",&b[x][y]);
        }
    }
    for(x=0;x<=2;x++)
    {
        for(y=0;y<=2;y++)
        {
            c[x][y]=a[x][y]+b[x][y];
            printf("%d ",c[x][y]);

        }
        printf("\n");
    }
}
int main()
{
    int x,y,z;
    z=0;
    char V[]="aeiou",A[50];
    fgets(A,50,stdin);
    for(x=0;A[x];x++)
    {
        for(y=0;V[y];y++)
        {
            if(A[x]==V[y])
            {
                z++;
            }
        }
        
    }
    if(z>0)
    {
        printf("this sentence contains %d vovels",z);
    }
     
}
//write a function to calculate length of string
int main()
{
    int x;
    char str[]="suhaib illahi";
    x=strlen(str);
    printf("%d",x);

}
int length(char *STR)
{
    int x;
    for(x=0;STR;x++);
    return x;
}
int main()
{
    int a;
    char str[]="suhaib illahi";
    a=length(str);
    printf("%d",a);
}

//function to calaculate vovels in a given string;


int F1(int a,int b);
int main()
{
    int x,y,z;
    printf("ENTER A NUMBER");
    scanf("%d",&x);
    printf("ENTER A DIGIT");
    scanf("%d",&y);
    z=F1(x,y);
    printf("%d",z);

}
int F1(int a,int b)
{
    while(a>0)
    {
        if(a%10==b)
        {
            break;
        }
        a=a/10;
    }
    if(a==0)
    {
       return 0;
    }
    else
    {
       return 1;
    }
}
void F2(int x)
{
    int y,z;
    for(y=1;y<=x;y++)
    {
        z=2*y-1;
        printf("%d,",z);
    }
}

int F3(int x)
{
    int y;
    for(y=2;y<x;y++)
    {
        if(x%y==0)
        {
            break;
        }
    }
    if(y==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int k,a;
    scanf("%d",&a);
    k=F3(a);
    printf("%d",k);
}
void F1(int n)
{
    if(n==1)
    {
        printf("%d",n);
    }
    else
    {
        F1(n-1);
        printf("%d",2*n-1);
    }
}
void F2(int n)
{
    if(n==1)
    {
        printf("%d",2*n);
    }
    else
    {
        F2(n-1);
        printf("%d ",2*n);
    }

}
int F(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x+F(x-1);
    }


}
int F(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return 2*x-1+F(x-1);
    }
}
int F(int x)
{
    if(x==1)
    {
        return 2;
    }
    else
    {
        return 2*x+F(x-1);
    }
}
int F(int x)
{
   if(x/10==0)
   {
     return x;
   }
   else
   {
     return x%10 + F(x/10);
   }
}
int main()
{
    int y;

    y= F(8623);
    printf("%d",y);
}
int F1(int x)
{
    if(x/10>0)
    {
        F1(x/10);
        return x%10;
    }
    return x;
}
int main()
{
    int y;
    y=F1(246);
    printf("%d",y);
    printf("\n");
}
struct myself
{
    char my_name[20];
    int my_student_id;
    float my_grades;
};
void F()
{
    struct myself x={"suhaib illahi",2020503093,90.5};
}
void F1()
{
    struct myself x;
    x.my_student_id = 202503093;
    strcpy(x.my_name = "suhaib illahi");


}*/

int main()
{
    printf("HELLO");
}


