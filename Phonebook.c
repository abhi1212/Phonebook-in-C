#include<stdio.h>
#include<stdlib.h>
#define SIZE 26	//Alphabets of a letter

void init();
void add(char *name, char *phonenumber);
void print(char *name);

struct Node
{
	struct Node* next;
	char* user;
	char* number;
};
struct Node *phonebook[26];




void add(char *name, char *phonenumber)
{
	//printf("Name is %  \n",name[0]);
	
	int index=(int)((name[0]-65)%26); // Hash 
	//printf("index is %d",index);
	
	struct Node *temp=(struct Node*) malloc (sizeof(struct Node));
	temp->next=NULL;
	temp->user=name;
	temp->number=phonenumber;
	
	if(phonebook[index] == NULL)
	{
		phonebook[index]=temp;
	}
	
	else
	{	
		temp->next=phonebook[index];
		phonebook[index]=temp;
	}	
		
}


void print(char *name)
{
	int index=(int)((name[0]-65)%26); 
	struct Node *traverse=phonebook[index];
	//traverse=traverse->next;
	
	while(traverse!=NULL && traverse->user!=name)
	{
		traverse=traverse->next;
	}
	
	if(traverse!=NULL)
	{
		printf("Name is %s\n", traverse->user);
		printf("Number is %s\n",traverse->number);
	}
	
}



int main()
{
	add("Aditya","9805857850");
	add("Abhishek","9805857850");
	add("Akash","9805857850");
	add("Byju","98898908808");
	print("Akash");

	//print function


}


#include<stdio.h>
#include<stdlib.h>
#define SIZE 26	//Alphabets of a letter

void init();
void add(char *name, char *phonenumber);
void print(char *name);

struct Node
{
	struct Node* next;
	char* user;
	char* number;
};
struct Node *phonebook[26];




void add(char *name, char *phonenumber)
{
	//printf("Name is %  \n",name[0]);
	
	int index=(int)((name[0]-65)%26); // Hash 
	//printf("index is %d",index);
	
	struct Node *temp=(struct Node*) malloc (sizeof(struct Node));
	temp->next=NULL;
	temp->user=name;
	temp->number=phonenumber;
	
	if(phonebook[index] == NULL)
	{
		phonebook[index]=temp;
	}
	
	else
	{	
		temp->next=phonebook[index];
		phonebook[index]=temp;
	}	
		
}


void print(char *name)
{
	int index=(int)((name[0]-65)%26); 
	struct Node *traverse=phonebook[index];
	//traverse=traverse->next;
	
	while(traverse!=NULL && traverse->user!=name)
	{
		traverse=traverse->next;
	}
	
	if(traverse!=NULL)
	{
		printf("Name is %s\n", traverse->user);
		printf("Number is %s\n",traverse->number);
	}
	
}



int main()
{
	add("Aditya","9805857850");
	add("Abhishek","9805857850");
	add("Akash","9805857850");
	add("Byju","98898908808");
	print("Akash");

	//print function


}


