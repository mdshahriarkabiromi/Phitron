#include<stdio.h>
#include<string.h>

void morning_Message(char name[],char place1[],char place2[]){
    printf("Hello %s, GoodMorning!\n",name);
    printf("How are you today?\n");
    printf("Aren't you from %s ?\n",place1);
    printf("Ow I see, I am from %s.\n",place2);
}
int main()
{
    char name[50]="";
    char place1[50]="";
    char place2[50]="";

    printf("Enter Your Name:");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("Enter place1:");
    fgets(place1,sizeof(place1),stdin);
    place1[strlen(place1)-1]='\0';
    printf("Enter place2:");
    fgets(place2,sizeof(place2),stdin);
    place2[strlen(place2)-1]='\0';

    morning_Message(name,place1,place2);

    return 0;
}
