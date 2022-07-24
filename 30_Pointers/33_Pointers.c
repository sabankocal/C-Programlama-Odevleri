
Question 1:

#include <stdio.h>
#include <stdlib.h>

int main()
{
const int *ciData = malloc(1*sizeof (int));
*ciData=7; //assign a value

return 0;

}

Output:?

*******************************************************************
Question 2:

#include <stdio.h>

int main()
{
char *pchar="aticle";
pchar[1]='d';
printf("%c",pchar[1]);

return 0;

}

Output: ?
*******************************************************************
Question 3:

#include <stdio.h>

int main()
{
const char *pcName="aticleworld";
pcName++;
printf("%s", ++pcName);

return 0;
}

Output: ?

*******************************************************************
Question 4:

#include <stdio.h>

int main()
{
const char *pcName="aticleworld";
pcName[0] = 'A' ;
printf("%s", pcName);

return 0;
}

Output: ?

*******************************************************************
Question 5:

#include <stdio.h>

int main()

{
char * const pcName="aticleworld";
pcName++;
printf("%s",pcName);

return 0;
}

Output: ?

*******************************************************************
Question 6:

#include <stdio.h>

int main()

{
const char *const pcName="aticleworld";
pcName++;
printf("%s",pcName);

return 0;
}

Output: ?

*******************************************************************
Question 7:

#include <stdio.h>

int main()

{
const int ciData = 5;
int * piData = NULL;

printf("Value before the change = %d\n\n",ciData);

//assign the constant address to the pointer
piData = (int*)&ciData;
*piData = 6;

printf("Value after the change = %d\n\n",ciData);

return 0;
}
Output: ?

*******************************************************************
Question 8:

#include <stdio.h>

int main()

{
const int a =7;
const int *p=&a;

printf("%d",*p++);

return 0;
}
Output: ?

*******************************************************************
Question 9:

#include <stdio.h>

int main()
{
const int a =7;
const int * p=&a;

printf("%d",*++p);
return 0;
}
Output: ?

*******************************************************************
Question 10:

#include <stdio.h>

int main()

{

const int a =7;
const int * p=&a;
printf("%d",++*p);

return 0;

}
Output: ?

*******************************************************************
Question 11:

#include <stdio.h>

union Information

{
char acName[15];
int iAge;
};

const union Information Info1;

int main()
{
Info1.iAge =24;
printf("%d",Info1.iAge);

return 0;
}

Output: ?
*******************************************************************
Question 12:

#include<stdio.h>
#include <string.h>

union Information
{
char acName[15];
int iAge;
};

const union Information Info1;

int main()
{
strcpy(Info1.acName, "aticleworld");
printf("%s", Info1.acName);

return 0;
}

Output: ?

*******************************************************************
Question 13:

#include<stdio.h>

int ReplaceValue(int *iData)
{
*iData = 11;

return 0;
}

int main()
{
const int arr[5] = {1, 2, 3, 4, 5};

printf("arr[3] before calling function = %d\n\n", arr[3]);
ReplaceValue(&arr[3]);
printf("\narr[3] after calling function = %d\n\n", arr[3]);

return 0;
}

Output: ?

*******************************************************************