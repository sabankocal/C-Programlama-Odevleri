// Asagidaki ornegi DYNAMIC MEMORY kullanarak tekrardan yaziniz. 

#include <stdio.h>
#include <string.h>

struct Book {
	char title[50];
	char author[50];
	int page_count;
};

void save(struct Book my_books[], int arrsize);

int main()
{
	char answer = 'y';
	int count = 0;
	struct Book my_books [100] ;

	do
	{
		//Set the title
		printf("Enter the book's title : ");
		(void)scanf("%[^\n]s", &my_books[count].title);
		(void)getchar();

		//Set the author
		printf("\nEnter the book's author : ");
		(void)scanf("%[^\n]s", &my_books[count].author);
		(void)getchar();

		//Set page count
		printf("\nEnter the how many pages the book has : \n");
		(void)scanf("%d", &my_books[count].page_count);
		(void)getchar();

		//Asks the user if they want to continue
		printf("\nDo you want to continue? (Y/y)");
		(void)scanf("%c", &answer);
		(void)getchar();
		count++;
	} while (answer == 'y' || answer == 'Y');

	//Creating and opening file
	save(my_books, count);
	
}

 void save(struct Book my_books[], int arrsize)
{
	FILE* myfile;
	const char* myfile_name = "Library.txt";
	myfile = fopen(myfile_name, "a");
	char string[256];
	//Printing the books into the file
	for (int i = 0; i < arrsize; i++)
	{
		sprintf(string, "Title\t:\t%s\nAuthor\t:\t%s\nPages\t:\t%d\n\n\n", my_books[i].title, my_books[i].author, my_books[i].page_count);
		//Printing in the console
		printf("%s", string);
		//Printing in the file
		fprintf(myfile, "%s", string);
	}
	fclose(myfile);
} 