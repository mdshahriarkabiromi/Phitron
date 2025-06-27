#include<stdio.h>
int main()
{
    FILE *pFile =fopen("output.txt","w");

    char text[]="This is a code for writing a file\nLater I will read a file";

    if (pFile==NULL)
    {
        printf("Error in opening file\n");
        return 1;
    }
    else
    {
        fprintf(pFile,"%s",text);
        printf("Succesfully Write a file\n");
    }
    


    fclose(pFile);

    return 0;
}
