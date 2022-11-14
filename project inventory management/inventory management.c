#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//Implementation of singly linked list
//The inventory management has attributes => id , name and quantity
//The functionality of this application includes =>
//                                                  Inserting Data and multiples of data
//                                                  Ability to search => Implementing search
//                                                  Update the data , Here primary key allotted is ID i.e The partNo
//                                                  Access all elements of linked list and display
//

typedef struct node{ 
    //definition of struct attributes
	int partNo;
	char partName[50];
	int quantity;
	struct node *nextNode; //pointer to next node creator 
}Node;

//Initial condition

Node *inventory=NULL;

//GUI for inventory application

int displayMenu()
{
	int choice;
	printf("%40s-------------------------------------------\n","");
	printf("%40s|%10sPROGRAM INSTRUCTION%12s|\n","",""," ");
	printf("%40s-------------------------------------------\n","");
    printf("%40s|%1s1>%7s|%1.1sInsert Into the Inventory%4s|\n"," "," "," "," "," ");
   	printf("%40s-------------------------------------------\n","");
   	printf("%40s|%1s2>%7s|%1.1sSearch the Inventory%9s|\n"," "," "," "," "," ");
   	printf("%40s-------------------------------------------\n","");
   	printf("%40s|%1s3>%7s|%1.1sUpdate the Inventory%9s|\n"," "," "," "," "," ");
   	printf("%40s-------------------------------------------\n","");
   	printf("%40s|%1s4>%7s|%1.1sDisplay the Inventory%8s|\n"," "," "," "," "," ");
   	printf("%40s-------------------------------------------\n","");
   	printf("%40s|%1s5>%7s|%1.1sTerminate the Program%8s|\n"," "," "," "," "," ");
   	printf("%40s-------------------------------------------\n","");
    printf("%40s| Enter Your Choice  %21s|\n "," "," ");
    printf("%40s                    \n","");
	scanf("%d",&choice);

	return choice;
}

//Code to generate linked list

Node* createNode()
{
	Node *newNode=(Node*)malloc(sizeof(Node));
	if(newNode==NULL)
	{
		printf("\nOUT OF DISK STORAGE CANNOT CREATE NEW INVENTORY"); //Check for extreme point
	}
	else
	{
		return newNode;
	}
}

//function to enter details

void insertInventory()
{
	int partNo,quantity;
	char partName[50];
	printf("\nEnter the Part Number\t");
	scanf("%d",&partNo);
	printf("\nEnter the Part Name\t");
	scanf("%s",&partName);
	printf("\nEnter the Quantity On Hand\t");
	scanf("%d",&quantity);
	Node *newInventory= createNode(); 
	newInventory->partNo=partNo;                  // Here the newInventory is parent or root => points to partNo creating a primary key for linked list
	strcpy(newInventory->partName,partName);      //PartNo is succeeded by partName  
	newInventory->quantity=quantity;
	if(inventory==NULL) //first / parent elemt check
	{
		inventory=newInventory;
		newInventory->nextNode=NULL;
	}
	else
	{
		Node *temp=inventory;     //intermediate element thus temp is pointing to new value
		Node *prev=temp;
		if(newInventory->partNo<temp->partNo)
		{
			inventory=newInventory;
			newInventory->nextNode=temp;
			
		}
		else
		{
		
		while(temp->nextNode!=NULL)
		{
			
		     
		      if(temp->partNo>newInventory->partNo) // Comparing temp value of node to newInventory , if Yes proceed to point newInventory to next node or assign previous value to temp
		      {
		      	newInventory->nextNode=prev->nextNode;
		      	prev->nextNode=newInventory;
		      	return;
			  }
			  else
			  {
			  	    prev=temp;
			  		temp=temp->nextNode;
			  }
			 
		
		}
		temp->nextNode=newInventory;
		newInventory->nextNode=NULL;
	
	}
}
	

	printf("\n Inventory added Successfully !\n");
}

//Function to search through elements of the list

void searchInventory()
{
	int partNo;
	if(inventory==NULL)
	{
		printf("\nSorry the inventory is empty cannot do search operation on empty inventory!\n"); //Checking for Null value
	}
	else
	{
		printf("\n Enter the Part Number \t"); //Primary key for accessing all values
		scanf("%d",&partNo);
		Node *temp=inventory;
		while(temp!=NULL)
		{
			if(partNo==temp->partNo)//Comparing the input to any temp value pointing to a partNo from inventory
			{
				printf("\nPart Number: %d\nName %s\nQuantity on Hand %d\n",temp->partNo,temp->partName,temp->quantity); //Assigning and printing values
				return;
			}
			else
			{
				temp=temp->nextNode;
			}
		}
		printf("\nSearch cannot find Part number\n");
   }
	
}

//Updating values of inventory

void updateInventory()
{
	int partNo,quantity;
	if(inventory==NULL)
	{
		printf("\nSorry the inventory is empty cannot do update operation on empty inventory!\n"); 
	}
	else
	{
		printf("\n Enter the Part Number \t");  //Primary key for accessing all values
		scanf("%d",&partNo);
		Node *temp=inventory;
		while(temp!=NULL)
		{
			if(partNo==temp->partNo) //Comparing the input to any temp value pointing to a partNo from inventory
			{
				printf("\nEnter the Quantity on Hand\t");
				scanf("%d",&quantity);
				temp->quantity=quantity;
				printf("\nPart Number: %d\nName %s\nQuantity on Hand %d\n",temp->partNo,temp->partName,temp->quantity);  //Assigning and printing values
				return;
			}
			else
			{
				temp=temp->nextNode;
			}
		}
		printf("\nSearch cannot find Part number\n");
   }	
}

//Code accessing all elements of linked list

void displayInventory()
{
	Node *temp;
	temp=inventory;
	if(temp==NULL)
	{
		printf("\nTheir is nothing in the inventory !\n"); //Condition of empty linked list
		
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\nPart Number: %d\nName %s\nQuantity on Hand %d\n",temp->partNo,temp->partName,temp->quantity); //Print all elemnts designated by a temp variable
			temp=temp->nextNode;
		}
		printf("\n");
	}
}

//Driver code
int main()
{
	do
	{
		
		system("color 72");
		 printf("\n\n\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("\n");
            printf("\n");
            printf("                                    Welcome to inventory management of stark warehouse                          ");
            printf("\n");
            printf("\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("\n");
            printf("\n");
		int choice=displayMenu();
		switch(choice)
		{
			case 1:insertInventory();
					break;
			case 2: searchInventory();
					break;
			case 3: updateInventory();
					break;
			case 4: displayInventory();
					break;
			case 5: exit(1);
				
		}
	}while(1);
	return 1;
}