### Question:
+ What is the output of code below?
+ Do you like challenges?
+ We have not learned "Maximal munch rule" in our lessons yet. You can learn and try your best.
+ Or we can learn it in our next lesson
+ https://www.quora.com/How-does-C-handle-ambiguity-such-as-int-x-a-b-which-is-a-valid-statement
+ https://en.wikipedia.org/wiki/Maximal_munch

### 1-)

```
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;

	int a = x+++y;

	printf("%d\n", -x + y + a);
}
```

### 2-)
```
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;

	int a = x+++++y;

	printf("%d\n", -x + y + a);
}
```