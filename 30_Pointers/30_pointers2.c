Question 1: 

#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	
	int *p=a;
	printf("%d", *p);
	return 0;
	
}


***********************************************************
Question 2:

void f(int *p, int *q)
{
	p=q; //p ve q ayni adresi gosteriyor. p ve q j=1 adresini gosterir
	*p=2; //j'ye 2 degeri atandi. i'nin degeri hala 0
}

int i=0, j=1;

int main()
{
	f(&i,&j);
	printf("%d %d\n",i,j);
	return 0;
}


******************************************************************
Question 3:

#include>stdio.h>

int f(int *a, int n)
{
	if(n<=0) return 0;
	else if(*a%2==0) return *a+ f(a+1, n-1); //12+f(a+1,5)=12+7-f(a+2,5)=12+7-13-4+11-6=7
	else return *a- f(a+1, n-1);
}

int main()
{
	int a[]={12,7,13,4,11,6};
	printf("%d",f(a,6));
	getchar();
	return 0;
	
}

***************************************************************************
Question 4:

int f(int x, int *py, int **ppz)
{
	int y,z;
	**ppz +=1;
	z=**ppz;
	*py += 2;
	x += 3;
	return x+y+z;
	
}

void main()
{
	int c, *b, **a;
	c=4, b=&c, a=&b; ->
	printf(" %d", f(c,b,a));

}

 
 ***************************************************************************
Question 5:

void swap(int *x, int *y)
{
	static int *temp;
	temp=x;
	x=y;
	y=temp;
}

void printab()
{
	static int i, a= -3, b=-6;
	i=0;
	
	while(i <= 4)
	{
		if((i++)%2==1) continue;
		a=a+i;
		b=b+i;
	}
	
	swap(&a,&b);
	printf("a=%d, b=%d\n",a,b);
}

int main()
{
	printab();
	printab();
}


 ***************************************************************************
Question 6:

#include<stdio.h>

int main()
{
	int i, j;
	char a[2][3]={{'a','b','c'},{'d','e','f'}};
	char b[3][2];
	char *p,=*b;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			*(p+2*j+i)=a[i][j];
		}
	}
}