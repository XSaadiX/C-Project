#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char first[100][100] , last[100][100];
int snum=1;
void admin();
void menu();
void admin();
void student();
void add();
void view();
void update();
void delete1(); 



int main(){
menu();
}

void menu(){
    int sc1;
printf("\n\t\t\t\t\tlogin as:\t\t\t\t\t\t\n");
printf("\n\t\t\t\t\t1. admin as:\t\t\t\t\t\t\n");
printf("\n\t\t\t\t\t2. student as:\t\t\t\t\t\t\n");
printf("\n\t\t\t\t\t3. Exit :\t\t\t\t\t\t\n\n");
printf("\n\t\t\t\t\t\t  Enter your choice :\t\t\t\t\t\t\n");
scanf("%d",&sc1);

switch(sc1){
	case 1 : system("cls");
	admin();
	break;
		case 2 : system("cls");
	student();
	break;
		case 3 : system("cls");
		printf("quiting the programme");
	exit(1);
	
	default :
    system("cls");
    menu();
}
}


void admin(){ 
int ad1;
printf("\n\t\t\t\t\t | logged In as Admin |\t\t\t\t\t\t\n");
printf("\n\t\t\t\t\t. 1.Add student record:\t\t\t\t\t\t\n");
printf("\n\t\t\t\t\t2.View all students record \t\t\t\t\t\t\n");
printf("\n\t\t\t\t\t3. update student record\t\t\t\t\t\t\n\n");
printf("\n\t\t\t\t\t4. Delete student record\t\t\t\t\t\t\n\n");
printf("\n\t\t\t\t\t5. Main menu\t\t\t\t\t\t\n\n");
printf("\n\t\t\t\t\t6. Exit\t\t\t\t\t\t\n\n");
printf("\n\t\t\t\t\t\t  Enter your choice :\t\t\t\t\t\t\n");
scanf("%d",&ad1);
switch(ad1){
	case 1 : system("cls");
	add();
	break;
	
	case 2 : system("cls");
	view();
	break;
	
	case 3 : system("cls");
	update();
	break;
	
	case 4 : system("cls");
	delete1();
	break;
	
	case 5 : system("cls");
    menu();
	break;
	
	case 6 : system("cls");
	exit(1);
}

}

void add(){
	printf("Enter the first name :\t");
	scanf("%s",&first[snum]);
	printf("Enter the last name : \t");
	scanf("%s",&last[snum++]);
	system("cls");
	admin();
}	
void view(){
	int num=1,i ,scr4;
	printf("number       name:\n");
	for(i=1;i<snum;i++){
		
		printf("%d           %s %s\n",num++,first[i],last[i]);
		}
		
		printf("\n\n1.Back to Admin\n2.Exit\n\nEnter your choice :");
		scanf("%d",&scr4);
		switch(scr4){
			case 1 : system("cls");
			admin();
			break;
			case 2 : system("cls");
			exit(1);
			break;
			default: system("cls");
			view;
			break;
		}
	
}
void update(){
	int num1;
	printf("Enter the number of student :\t");
	scanf("%d",&num1);
		printf("Enter the new first name : \t");
	scanf("%s",&first[num1]);
	printf("Enter the new last name : \t");
	scanf("%s",&last[num1]);
	system("cls");
	admin();
	
	
}
void delete1(){
	int dele,u;
printf("enter student number");
scanf("%d"  , &dele);
for(u=dele; u<snum-1;u++)
	strcpy(first[u],first[u+1]);
		strcpy(last[u],last[u]);
		snum--;
		system("cls");
		admin();
}


//************************************************************The student screen***********************************************
void student(){
	int std;
	printf(" \t\t\t\t\t\t|student Page|\t\t\t\t\t\t\n\n\n");
		printf(" \t\t\t\t\t\t welcome as student\t\t\t\t\t\t\n\n\n\n");
			printf(" \t\t\t\t\t\t1.Back to main menu\t\t\t\t\t\t\n\n");
			 	printf(" \t\t\t\t\t\t2.Exit\t\t\t\t\t\t\n");
				printf("\t\t\t\t\t\tEnter your choice :\t\t\t\t\t\t\n\n\n\n");	scanf("%d",&std);
			
			switch(std){
				case 1 : system("cls");
				menu();
				break;
				case 2 : system("cls");
				exit(1);
			}	
	
}




