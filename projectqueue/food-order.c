// headers for functionalities like current time console in out and system commands
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<time.h>
#include<conio.h>

// global variables
int a,i,j,item;
float total_1,total_2,total_3,total_4,total_5,total_6,total_7,total_8,total_9,total_10,total_11,total_12,total_13,total_14,total_15;


// struct define
struct que{
int front, rear ,size;
unsigned actual_size;
float *arr;

};



struct que* createque(unsigned actual_size)
{
 struct que* que =(struct que*)malloc(sizeof(struct que));
que->actual_size= actual_size;
que->front =que->rear=-1;
que->size=0;
que->arr=(int*)malloc(que->actual_size*sizeof(int));
return que;
};


int isempty(struct que*que)
{
    return(que->size=0);

}


void enque(struct que*que,int item)
{
     if(isfull(que))
        return;
     que->rear=que->rear+1;
     que->arr[que->rear]= item;
     que->size=que->size+1;
     if(que->front== -1)
        que->front++;
     printf("%d item added to queue \n",item);
}

int isfull(struct que*que)
{
    return(que->size==que->actual_size);
}


int  deque(struct que* que)
{
    if(isempty(que))
     return INT_MIN;
    int item =que->arr[que->front];
    if(que->front==que->rear){
        que->front =que->rear=-1;

    }
    else
        que->front=que->front+1;
    que->size=que->size-1;



printf("\n=========== BILL ========================          ");
switch(item)
{
case 1:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_1);
     break ;
case 2:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_2);
    break ;
case 3:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_3);
    break ;

case 4:
    printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_4);
    break ;

case 5:
      printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_5);
      break ;

case 6:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_6);
       break ;

case 7:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_7);
       break ;
case 8:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_8);
       break ;
case 9:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_9);
       break ;
case 10:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_10);
       break ;
case 11:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_11);
       break ;
case 12:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_12);
       break ;
case 13:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_13);
       break ;
case 14:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_14);
       break ;
case 15:
       printf("\nYour total bill amount for order %d is Rs.%.2f,\nPayment: CASH\n",item,total_15);
       break ;
default:
    printf("\nnot yet ordered...order first\n");
}
printf("\n order %d is deleted \n",item);
printf("===================================          ");
    return item;


}




void display(struct que*que)
{

   if(isempty(que))
    printf("__queue is empty__");
    printf("\n>>> Displaying food orders in a queue");
     for(item=que->front;item<=que->rear;item++)
     printf("\n=====order queue is %.f======",que->arr[item]);

}





int main()
{
   int val,n,quantity;

   struct que*que =createque(1000);
   do
   {      printf("\n");
printf("            ##################################        \n");
printf("                 Restaurant Order Delivery              \n");
printf("            ##################################        \n");
  time_t t;   // not a primitive datatype
  time(&t);
  printf("\t\t %s", ctime(&t));
printf("             _________________________________         \n");

       printf("[1].Add an order:");
       printf("\n[2].delete an order and to get bill:");
       printf("\n[3].display orders queue: ");
       printf("\n[4].exit");
       printf("\n please enter your choice: ");
       scanf("%d",&n);
       switch(n)
       {
         case 1:
                  printf("\t        ==============================          \n");
                  printf("\t                    Food Menu   \n");
                  printf("\t        ==============================          \n");
printf("..BREAKFAST MENU..... \n");
printf("[1] Pancakes ------------------------------------------- Rs.210 \n");
printf("[2] Veg. Sandwich--------------------------------------- Rs.199 \n");
printf("[3] Aloo Paratha---------------------------------------- Rs.185 \n");
printf("[4] Dhokla-----------------------------------------------Rs.135  \n");
printf("[5] Poha------------------------------------------------- Rs.170 \n");
printf("..Lunch Menu.........   \n");
printf("[6] Paneer Butter Masala with paratha--------------------Rs. 275 \n");
printf("[7] Masala Dosa------------------------------------------ Rs.299 \n");
printf("[8]  Chicken -------------------------------------------- Rs.320 \n");
printf("[9] Sausage and Potato Casserole------------------------- Rs.400 \n");
printf("[10] Spring Rolls---------------------------------------- Rs.365 \n");
printf("..Dinner Menu........   \n");
printf("[11] Veg  Manchurian------------------------------------- Rs.260 \n");
printf("[12] Chili Chicken Tikka--------------------------------- Rs.460 \n");
printf("[13] Veg Biryani----------------------------------------- Rs.275 \n");
printf("[14] Egg cury with Rice --------------------------------- Rs.350 \n");
printf("[15] Sausage Burger-------------------------------------- Rs.300 \n");
            printf("\tchoose  your food item: ");
            scanf("%d",&a);

               switch(a)
               {
case 1:

                a==1 ;

               printf("\nIngredient : All-Purpose Flour,Sugar,Baking Powder,Teaspoon Salt,Ground Nutmeg,Eggs,Unsalted Butter,\n\n");
	       printf("\tEnter Quantity : ");
	       scanf("%d", &quantity);
            total_1 = 210 * quantity ;
            enque(que,a);
           break;
case 2:
           a==2;
            printf("\nIngredient : Bread slices, Boiled sweet corn, chopped Onions and Capsicums, Mayonaise, Butter, Oregano, Red chilli flakes, Processed Cheese\n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		   total_2 =  199 * quantity ;
          enque(que,a);
            break ;
case 3:
                a==3;
                printf("\nIngredient : Mashed potatoes, Chopped Onions and coriander, Ginger-green chilli paste, Flour, Salt, Garam Masala\n\n");
			  printf("Enter Quantity : ");
			  scanf("%d", &quantity);
			  total_3=  185 * quantity ;
              enque(que,a);
            break;
case 4:
            a==4;
            printf("\nIngredient : Atta, Baking soda, Vegetable oil, Ginger, Green chilli, Red chilli, Ajwain, Yogurt, Garlic, Salt \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_4 = 135 * quantity ;
            enque(que,a);
            break ;
case 5:
            a==5;
            printf("\nIngredient : Poha, Onion, Oil, Peanuts, Salt, Turmeric Powder, Green chilli, Mustard seeds, Curry leaves\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_5 = 170 * quantity ;
            enque(que,a);
            break ;
case 6:
            a==6;
            printf("\nIngredient : Paneer, Onion and tomatoes, Cashews, Turmeric, Sugar, Cloves, Ginger, Salt, Red chilli, Cream, Cinnamon, Coriandar powder, Garam masala \n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total_6= 275 * quantity ;
	      enque(que,a); isfull(que);isempty(que);
            break ;
case 7:
            a==7;
            printf("\nIngredient : Long Grain rice, Urad dal, Onions, Green chilli, Mustard seeds, Turmeric powder, coconut chutney, Sambar \n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total_7 = 299 * quantity ;
		  enque(que,a);
            break ;
case 8 :
            a==8;
            printf("\nIngredient : Cumin, Chili Powder, Black Pepper, Olive Oil, Red Onion, Chicken, Quinoa, Black Beans, Avocado, Cheese, Lime Juice, Cilantro \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_8 = 320 * quantity ;
            enque(que,a);
            break;
case 9:
            a==9;
            printf("\nIngredient : Yellow bell peppers,green bell peppers,onion,Sausages,potato,Vegetable oil,salt,pepper,baked beans,Green chilli,Parsley \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_9 = 400 * quantity ;
            enque(que,a); isfull(que);isempty(que);
            break ;
case 10:
            a==10;
            printf("\nIngredient : Olive oil,small Spring onion bulbs,Green bell pepper,Tomato,Bread crumbs,Parmesan cheese,Ginger,Chives,mozzarella cheese,Balsamic vinegar,Corn flour,Basil leaves,Olive oil,Parmesan,Garlic,Chilly,Green olives,Mayonnaise/ yogurt \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_10 = 365 * quantity ;
            enque(que,a);
            break ;
case 11:
            a==11;
           printf("\nIngredient : Corn flour, ginger, Spring onions, garlic, Salt, Soya sauce, Coriander, Vinegar, Chilli \n\n");
	      printf("Enter Quantity : ");
	      scanf("%d", &quantity);
	      total_11 = 260 * quantity ;
	      enque(que,a);
            break;
case 12:
            a==12;
            printf("\nIngredient : Chili Powder, Cumin, Kosher Salt, Cinnamon, Lime Zest, Chicken-Thighs, Acorn Squash, Bell Pepper, Extra-Virgin Olive Oil, Lime Juice, Scallions, Cilantro \n\n");
		  printf("Enter Quantity : ");
		  scanf("%d", &quantity);
		  total_12 = 460 * quantity ;
		  enque(que,a);
            break ;
case 13:
            a==13;
            printf("\nIngredient : Rice, Ginger, Green Chilli, Onion, Cashew, Peas, Mint leaves, Ghee, Carrot, Spices, Ghee \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_13 = 275 * quantity ;
            enque(que,a);
            break ;
case 14:
            a==14;
            printf("\nIngredient : Boiled eggs, Onions, Green chilli, Salt, Turmeric, Red chilli, Oil, Garlic Paste, peppercorns, Tomatoes, Cumin \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_14 = 350*quantity ;
            enque(que,a);
            break ;
case 15:
            a==15;
            printf("\nIngredient : Oil,onion,yellow bell pepper,capsicum,sausages,Salt,ginger,green chilli,soy sauce,chilli sauce,honey,rosemary,Burger buns,olive oil,Pepper,Lettuce leaves, tomato slices, cheese slices, jalapeno, gherkins. \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total_15 = 300*quantity ;
            enque(que,a);
            break ;


            }

         break;
        case 2:

         deque(que);
         break;

        case 3:

            display(que);
            break;
        case 4:
            display(que);
            printf("\n\n\t=================FOS=================          ");
            printf("   \n         Thanks for choosing our restaurant\n\n");
            printf("             We hope to see you again!  \n");
            printf("\t======================================  \n");
            exit(0);
            break ;
        default:
        
        if(n!= 1,2,3,4)
        printf("\n invalid choice...");


    }
    
    
    printf("\n do you  want to continue(press->y)...");
   
   
   }

  
  
  
  
  while('y'==getch());
  display(que);
  printf("\n\n\t=================FOS=================          ");
  printf("   \n         Thanks for choosing our restaurant\n\n");
  printf("             We hope to see you again!  \n");
  printf("\t======================================  \n");

}