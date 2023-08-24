#include<stdio.h>
struct Books{
    int bookNo;
    char bookName[100];
    char author[50];
};

int main(){
    struct Books book[5];
    printf("\n***** Enter The Book Details *****\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n** Book No.%d **\n", (i+1));
        printf("Enter Book Name : ");
        fgets(book[i].bookName,100,stdin);
        printf("Enter Author Name : ");
        fgets(book[i].author,100,stdin);
        book[i].bookNo=i+1;
    }
    printf("\n\n************* All Books Details *************\n");
    for (int j = 0; j < 5; j++)
    {
        printf("\nBook No. %d\n", book[j].bookNo);
        printf("Enter Book Name : %s", book[j].bookName);
        printf("Enter Author Name : %s\n", book[j].author);
    }
    return 0;
}