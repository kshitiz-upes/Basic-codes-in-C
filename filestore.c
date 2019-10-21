#include <stdio.h>
int main()
{
    FILE *fptr;
    int Book_id,release_year,price;
    char author[30],language[30],book_name[30];
     fptr = fopen("Table", "w");
 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("Enter the Book_id \n");
    scanf("%d", &Book_id);
    fprintf(fptr, "Id    = %d\n", Book_id);

    printf("Enter the book_name \n");
    scanf("%s", book_name);
    fprintf(fptr, "name   = %s\n", book_name);

    printf("Enter the release_year \n");
    scanf("%d", &release_year);
    fprintf(fptr, "Year  = %d\n", release_year);

    printf("Enter the price \n");
    scanf("%d", &price);
    fprintf(fptr, "Price = %d\n", price);

    printf("Enter the author \n");
    scanf("%s", author);
    fprintf(fptr, "Author = %s\n", author);

    printf("Enter the language \n");
    scanf("%s", language);
    fprintf(fptr, "Language = %s\n", language);

    fclose(fptr);
}
