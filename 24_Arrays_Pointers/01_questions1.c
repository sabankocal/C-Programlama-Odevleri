Pointer and Array Questions-1

1.What will be the output of the following C code?
#include <stdio.h>
    void main()
    {
        int a[3] = {1, 2, 3};
        int *p = a;
        printf("%p\t%p", p, a);
    }
a) Same address is printed
b) Different address is printed
c) Compile time error
d) Nothing

2.What will be the output of the following C code?
#include <stdio.h>
    void main()
    {
        char *s = "hello";
        char *p = s;
        printf("%p\t%p", p, s);
    }
a) Different address is printed
b) Same address is printed
c) Run time error
d) Nothing

3. What will be the output of the following C code?

    #include <stdio.h>
    void main()
    {
        char *s= "hello";
        char *p = s;
        printf("%c\t%c", p[0], s[1]);
    }
a) Run time error
b) h h
c) h e
d) h l

4. What will be the output of the following C code?

    #include <stdio.h>
    void main()
    {
        char *s= "hello";
        char *p = s;
        printf("%c\t%c", *(p + 3),  s[1]);
    }
a) h e
b) l l
c) l o
d) l e

5. What will be the output of the following C code?

    #include <stdio.h>
    void main()
    {
        char *s= "hello";
        char *p = s;
        printf("%c\t%c", 1[p], s[1]);
    }
a) h h
b) Run time error
c) l l
d) e e


6. What will be the output of the following C code?

    #include <stdio.h>
    void foo( int[] );
    int main()
    {
        int ary[4] = {1, 2, 3, 4};
        foo(ary);
        printf("%d ", ary[0]);
    }
    void foo(int p[4])
    {
        int i = 10;
        p = &i;
        printf("%d ", p[0]);
    }
a) 10 10
b) Compile time error
c) 10 1
d) Undefined behaviour


7. What will be the output of the following C code?

    #include <stdio.h>
    int main()
    {
        int ary[4] = {1, 2, 3, 4};
        int *p = ary + 3;
        printf("%d\n", p[-2]);
    }
a) 1
b) 2
c) Compile time error
d) Some garbage value


8. What will be the output of the following C code?

    #include <stdio.h>
    int main()
    {
        int ary[4] = {1, 2, 3, 4};
        int *p = ary + 3;
        printf("%d %d\n", p[-2], ary[*p]);
    }
a) 2 3
b) Compile time error
c) 2 4
d) 2 somegarbagevalue
