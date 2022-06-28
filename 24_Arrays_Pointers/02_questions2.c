Pointer and Array Questions-2 

1. What will be the output of the following C code?

    #include <stdio.h>
    int main()
    {
        int ary[4] = {1, 2, 3, 4};
        printf("%d\n", *ary);
    }
a) 1
b) Compile time error
c) Some garbage value
d) Undefined variable

2. What will be the output of the following C code?

    #include <stdio.h>
    int main()
    {
        const int ary[4] = {1, 2, 3, 4};
        int *p;
        p = ary + 3;
        *p = 5;
        printf("%d\n", ary[3]);
    }
a) 4
b) 5
c) Compile time error
d) 3


3. What are the different ways to initialize an array with all elements as zero?
a) int array[5] = {};
b) int array[5] = {0};
c)

   int a = 0,  b = 0,  c = 0;
   int array[5] = {a, b, c};
d) All of the mentioned


4. What are the elements present in the array of the following C code?

int array[5] = {5};
a) 5, 5, 5, 5, 5
b) 5, 0, 0, 0, 0
c) 5, (garbage), (garbage), (garbage), (garbage)
d) (garbage), (garbage), (garbage), (garbage), 5


5. Which of the following declaration is illegal?
a)

   int a = 0, b = 1, c = 2;
   int array[3] = {a, b, c};
b)

   int size = 3;
   int array[size];
c)

   int size = 3;
   int array[size] = {1, 2, 3};
d) All of the mentioned


6. An array of similar data types which themselves are a collection of dissimilar data type are ___________
a) Linked Lists
b) Trees
c) Array of Structure
d) All of the mentioned


7. Comment on an array of the void data type.
a) It can store any data-type
b) It only stores element of similar data type to first element
c) It acquires the data type with the highest precision in it
d) You cannot have an array of void data type


8. What will be the output of the following C code?

    #include <stdio.h>
    int main()
    {
        int ary[4] = {1, 2, 3, 4};
        int p[4];
        p = ary;
        printf("%d\n", p[1]);
    }
a) 1
b) Compile time error
c) Undefined behaviour
d) 2

