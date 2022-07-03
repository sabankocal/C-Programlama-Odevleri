Interview Questions on Structure in C Programming:

Question: 1

Can we declare function inside structure of C Programming?


(A) Yes
(B) No
(C) Depends on Compiler
(D) Yes but run time error

Question: 2

#include <stdio.h>
#include <string.h>

int main()
{
struct xyz{
    char * n;
    int eos;
};

struct xyz x = {"cppbuzz", 2017};
struct xyz y=x;
printf("%d", printf("%s",y.n));

return 0;
}
(A) cppbuzz
(B) 7cppbuzz
(C) 8cppbuzz
(D) cppbuzz7


Question: 3

#include "stdio.h"
#include "string.h"

int main()
{
struct xyz{
    char * n;
    int eos;
};

struct xyz x = {"cppbuzz", 2017};
struct xyz y=x;
printf("%i", printf("%s",y.n));

return 0;
}
(A) cppbuzz7
(B) 7cppbuzz
(C) cppbuzz8
(D) 8cppbuzz


Question: 4

#include "stdio.h"
#include "string.h"

int main()
{
struct xyz{
   char * n;
   int eos;
};

struct xyz x = {"cppbuzz", 2017};
struct xyz y=x;
printf(printf("%s",y.n), printf("%s",y.n));

return 0;
}



(A) cppbuzz
(B) cppbuzzcppbuzz
(C) cppbuzz7
(D) None of the above

Question: 5

What is important difference between structure & union?

 
(A) There is no difference
(B) Union takes less memory
(C) Union is faster
(D) Structure is faster


Question: 6

Is it necessary that all elements of structure should be different in size?
(A) Yes
(B) No


Question: 7

Can we use access specifiers(private, public, protected) with structures?
(A) Yes
(B) No


Question: 8

Are self referential structures are possible in C?
(A) Yes
(B) No


Question: 9

#include <stdio.h>

int main()
{
struct xyz{
int a;
};

struct xyz obj1={1};
struct xyz obj2 = obj1;
printf("%d", obj2.a);
obj2.a = 100;
printf("%d", obj1.a);
return 0;
}
(A) 1100
(B) 11
(C) 0100
(D) 10


Question: 10

Can we compare two structures using any built in operator?

 
(A) Yes
(B) No


Question: 11

Which predefined function is used to write whole structure into a file ?
(A) write()
(B) fwrite()
(C) swrite()
(D) None of the above


Question: 12

Find the output of below code -

#include <stdio.h>

struct cppbuzz{
    
};

int main()
{
    printf("%d",sizeof(struct cppbuzz));
    return 0;
}


(A) 0
(B) 1
(C) 2
(D) 4


Question: 13

Find the output of below code -

#include <stdio.h>

struct cppbuzz{
    struct xyz{
        
    };
};

int main()
{
    printf("%d",sizeof(struct cppbuzz));
    return 0;
}

(A) Compilation Error
(B) 0
(C) 1
(D) 2

