// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    /* FILE *fp=fopen("test.txt","w");
//     char name[20];
//     gets(name);
//     fputs(name,fp);
//     fclose(fp);*/

//     FILE *fp=fopen("test.txt","r");
//     char ch;   

//     while(!feof(fp))
//     {
//         ch=fgetc(fp);
//         putchar(ch);
//     }
//     fclose(fp);
// }


#include <stdio.h>
#include <stdlib.h>

struct students{
	char name[20];
    int roll;
    float cgpa;
}s;

void userinput(struct students *ptr);
void print(struct students *ptr);

int main(){

	int numbers = 2;
    struct students *ptr = (struct students*)malloc(numbers * sizeof(struct students));
    int i=0;
    while(i!=numbers){
        
        printf("Enter %d student details: \n", i+1);
        userinput(&ptr[i]);
        i++;
    }

    i=0;
    while(i!=numbers){
        print(&ptr[i]);
        i++;
    }
	
return 0;
}

void userinput(struct students *ptr){

    printf("Enter name: ");
    scanf("%s", &ptr->name);

    printf("Enter roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter cgpa: ");
    scanf("%f", &ptr->cgpa);
}

void print(struct students *ptr){

    printf("Name : %s\n", ptr->name);
    printf("Roll : %d\n", ptr->roll);
    printf("CGPA : %.2f\n\n", ptr->cgpa);
}

