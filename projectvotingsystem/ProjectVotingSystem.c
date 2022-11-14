// to get election details from management first
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// software system variables (global variables)

int mon=0;
int yr=0;
int pin=0;
char can1_name[30];
char can2_name[30];

int count1=0;
int count2=0;
int NOTA=0;
int num_voters=0;
int reffarray_g[5000];


// major screens (major functions)
void for_voters();
void elec_management();
void first_screen();

// minor screens (sub functions)
void elec_mon_yr();
void to_add_can();
void reset_pin();
void voter_details();
void results();

// utility functions
void printmonthyear();



void printmonthyear()
{
    for (int i = 0; i < 59; i++)
    {
        printf(" ");
    }
    if (mon != 0 && yr != 0)
    {
        switch (mon)
        {
        case 1:
            printf("Jan");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("Mar");
            break;
        case 4:
            printf("Apr");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("Jun");
            break;
        case 7:
            printf("Jul");
            break;
        case 8:
            printf("Aug");
            break;
        case 9:
            printf("Sep");
            break;
        case 10:
            printf("Oct");
            break;
        case 11:
            printf("Nov");
            break;
        case 12:
            printf("Dec");
            break;
        default:
            break;
        }
        printf(" ");
        printf("%d", yr);
        printf("\n");
        printf("\n");
    }

}




















// for results
void results()
{   if(count1==0&&count2==0&&NOTA==0)
    {
    
    system("cls");
    system("color 80");
    

    printf("\n\n\n");
    printf("          ****************************************************************************************************\n");
    printf("          ****************************************************************************************************\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("\n");
    printf("\n");
    printf("                                  Welcome to presidential elections, Republic of India.                       ");
    printf("\n");
    printf("\n");

    // for printing month and year

    printmonthyear();

    printf("\n");
    printf("\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****************************************************************************************************\n");
    printf("          ****************************************************************************************************\n");
    printf("\n");
    printf("\n");


   
   
    printf("\n");
    printf("\n");
    printf("                                       Elections are yet to be conducted wait!!!");

    getch();
    first_screen();

  } 
  
  else
  {
    
    system("cls");
    system("color 80");

    printf("\n\n\n");
    printf("          ****************************************************************************************************\n");
    printf("          ****************************************************************************************************\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("\n");
    printf("\n");
    printf("                                  Welcome to presidential elections, Republic of India.                       ");
    printf("\n");
    printf("\n");

    // for printing month and year

   printmonthyear();

    printf("\n");
    printf("\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****                                                                                            ****\n");
    printf("          ****************************************************************************************************\n");
    printf("          ****************************************************************************************************\n");
    printf("\n");
    printf("\n");


    if(count1>count2)
    { printf("\n");
      printf("\n");
      printf("                                   %s got- %d      and     %s got- %d   votes",can1_name,count1,can2_name,count2);
      printf("\n");
      printf("                                   Congratulations to %s for winning the elections",can1_name);
    }

    else 
    { printf("\n");
      printf("\n");
      printf("                                   %s got- %d      and     %s got- %d   votes",can1_name,count1,can2_name,count2);
      printf(" \n                                  Congratulations to %s for winning the elections",can2_name);
    }
   
    printf("\n");
    printf("\n");
    printf("                                  There were total of %d NOTA votings this elections!!!",NOTA);

    getch();

    FILE* votings;
    votings = fopen("Election_Details.txt", "a");
    fprintf(votings,"\n\n\n\n\n");
    fprintf(votings,"Presidential Elections, Republic of India\n");
    fprintf(votings,"Month/Year : ");
    if (mon != 0 && yr != 0)
    {
        switch (mon)
        {
        case 1:
            fprintf(votings,"Jan");
            break;
        case 2:
            fprintf(votings,"Feb");
            break;
        case 3:
            fprintf(votings,"Mar");
            break;
        case 4:
            fprintf(votings,"Apr");
            break;
        case 5:
            fprintf(votings,"May");
            break;
        case 6:
            fprintf(votings,"Jun");
            break;
        case 7:
            fprintf(votings,"Jul");
            break;
        case 8:
            fprintf(votings,"Aug");
            break;
        case 9:
            fprintf(votings,"Sep");
            break;
        case 10:
            fprintf(votings,"Oct");
            break;
        case 11:
            fprintf(votings,"Nov");
            break;
        case 12:
            fprintf(votings,"Dec");
            break;
        default:
            break;
        }
        fprintf(votings,"/");
        fprintf(votings,"%d", yr);
  }
  fprintf(votings,"\n");

  if(count1>count2)
    { fprintf(votings,"\n");
      fprintf(votings,"\n");
      fprintf(votings,"           %s got- %d      and     %s got- %d   votes",can1_name,count1,can2_name,count2);
      fprintf(votings,"\n");
      fprintf(votings,"           Congratulations to %s for winning the elections",can1_name);
    }

    else 
    {fprintf(votings,"\n");
      fprintf(votings,"\n");
      fprintf(votings,"           %s got- %d      and     %s got- %d   votes",can1_name,count1,can2_name,count2);
      fprintf(votings,"\n           Congratulations to %s for winning the elections",can2_name);
    }
   
    fprintf(votings,"\n");
   fprintf(votings,"\n");
    fprintf(votings,"           There were total of %d NOTA votings this elections!!!\n",NOTA);

fprintf(votings,"           Voter details are as follows:\n");
 fprintf(votings,"                voter ID - Weight \n");
for(int i=0;i<num_voters;i++)
{fprintf(votings,"                   %d    -   %d   \n",reffarray_g[i],reffarray_g[num_voters+i]);}



}
}





















// for voters details


void voter_details()
{
    
    system("cls");
    system("color 80");
    printf("\n");
    printf("\n************************************************************************************************************************");
    printf("\n");
    printf("\n");
    printf("                     Enter total num of voters possible with one Manager ID for this elections ->");
     scanf("%d",&num_voters);

    int voter_arr[(2*num_voters)];
    
    
   int j =1;
    
    for(int i=0;i<num_voters;i++) 
    {   
        printf("                       Enter voter id (can't start from 0 (zero))  of voter no. %d : ",i+1);
        scanf("%d",&reffarray_g[i]);
        
    }
    for(int i=num_voters ;i<2*num_voters;i++)
    {   
        printf("                                       Enter weight for voter no. %d  : ",j++);
        scanf("%d",&reffarray_g[i]);
    }
 
    elec_management();
}

























// for entering candidate details

void to_add_can()
{
    
    system("cls");
    system("color 80");
    printf("\n");
    printf("\n************************************************************************************************************************");
    printf("\n");
    printf("\n");
    printf("           Enter candidates name it should have less then 30 char(more than that and rest will be discarded)              ");
    printf("\n");
    printf("\n");
    printf("\n************************************************************************************************************************");
    printf("\n");
    printf("\n");
    printf("\n                              Enter candidate one's name: ");
    scanf(" %s",&can1_name);
    printf("\n");
    printf("\n");
    printf("\n                              Enter candidate two's name: ");
    scanf(" %s",&can2_name);
    elec_management();
    

 
    
    
    
}






























//  for entering mon and year of elections

void elec_mon_yr()
{

    int mon_num;
    int yr_num;
    char cntrlemy='1';

        do
        {
            
            system("cls");
            system("color 80");
            if (cntrlemy != '0' && cntrlemy != '1')
            {
            printf("\n");  
            printf("\n");
            printf("                                         INVALID INPUT TRY AGAIN!                                                         ");}
            printf("\n");
            printf("\n");
            printf("\n************************************************************************************************************************");
            printf("\n");
            printf("\n");
            printf("                                  To set month and year for elections enter        -> 1                                   ");
            printf("\n");
            printf("                                  To return to main menu enter                     -> 0                                   ");
            printf("\n");
            printf("\n");
            printf("\n************************************************************************************************************************");
            printf("\n");
            printf("\n");
            printf("                                                    Enter here -> ");
            scanf(" %c", &cntrlemy);
            printf("\n");

        } while (cntrlemy != '0' && cntrlemy != '1');
    

    if(cntrlemy=='1')
    {
        // for taking year as input
        do
        {
            
            printf("                                        Enter year of election in YYYY format  : ");
            scanf("%d",&yr_num);
            printf("\n");
            if(yr_num<=1950)
            {
                printf("\n");
                printf("                                               Enter valid year!!!!                               \n");
                printf("\n");
            }
    
        }while(yr_num<=1950);
 
        yr=yr_num;

        // for taking months number as  input
        do
        {
            
            printf("                                Enter num of month(from 1-12) when elections are to be held: ");
            scanf("%d",&mon_num);
            printf("\n");
             printf("\n");
            if(mon_num!=1 &&mon_num!=2 &&mon_num!=3 &&mon_num!=4 &&mon_num!=5 &&
            mon_num!=6 &&mon_num!=7 &&mon_num!=8 &&mon_num!=9 &&mon_num!=10 &&mon_num!=11 &&mon_num!=12 )
            {
                printf("\n");
                printf("\n");
                printf("                                    Enter valid month number!!!                                         \n");
                printf("\n");
            }
    
        }while(mon_num!=1 &&mon_num!=2 &&mon_num!=3 &&mon_num!=4 &&mon_num!=5 &&
        mon_num!=6 &&mon_num!=7 &&mon_num!=8 &&mon_num!=9 &&mon_num!=10 &&mon_num!=11 &&mon_num!=12 );

        //assigning  month    
        mon=mon_num;

        elec_management();
    }

    else
    {
        elec_management();
    }
    

 
}























// for resetting pin

void reset_pin()
{
        char in_cntrl='1';
            do
            {
                
                system("cls");
                system("color 80");
                if(in_cntrl!='0' && in_cntrl!='1'){
                printf("\n"); 
                printf("\n"); 
                printf("                                           INVALID INPUT TRY AGAIN!                               ");}
                printf("\n"); 
                printf("\n"); 
                printf("\n************************************************************************************************************************");
                printf("\n"); 
                printf("\n"); 
                printf("                                   To change pin                              -> 1                                        ");
                printf("\n");
                printf("\n");
                printf("                                   To return to main menu enter               -> 0                                        ");
                printf("\n");
                printf("\n");
                printf("\n************************************************************************************************************************");
                printf("\n"); 
                printf("\n");
                printf("                                                Enter here ->      ");
                scanf(" %c",&in_cntrl);
            
            }while (in_cntrl!='0' && in_cntrl!='1');
        

        if (in_cntrl=='1')   
        {
            
            system("cls");
            system("color 80");
            printf("\n"); 
            printf("\n"); 
            printf("\n************************************************************************************************************************");
            printf("\n"); 
            printf("\n"); 
            printf("                          Enter pin of 8 digit that uses numbers(0-9) and nothing else,                                   ");
            printf("\n                [Enter as directed as this will control program access from here on out!!]                              ");
            printf("\n");
            printf("\n");
            printf("\n************************************************************************************************************************");
            printf("                                            Enter new pin here-> ");
            scanf("%d",&pin);
            first_screen();
                
        }

        else
        {
            first_screen();
        }


}








































// for Voting console
void for_voters()
{
    int pin_entrd;
    int *p_yr=&yr;

    // initially when somone tries to enter the system and pin is not set
    if(pin==0)
    {
        
        system("cls"); 
        system("color 80");
        char in_cntrl_1='0';
        
  
            do
            {
                
                system("cls");
                system("color 80");
                if(in_cntrl_1!='0'){
                printf("\n"); 
                printf("\n"); 
                
                printf("                                            INVALID INPUT TRY AGAIN!                                                    ");}
                printf("\n"); 
                printf("\n"); 
                printf("************************************************************************************************************************");
                printf("\n"); 
                printf("\n"); 
                printf("\n"); 
                printf("                                No pin set, Set the pin first from election management menu                             ");
                printf("\n");
                printf("\n");
                printf("\n"); 
                printf("                                       To return to main menu enter       -> 0                                          ");
                printf("\n");
                printf("\n");
                printf("\n"); 
                printf("************************************************************************************************************************");
                printf("\n"); 
                printf("\n"); 
                printf("\n"); 
                printf("                                                 Enter here -> ");
                scanf(" %c",&in_cntrl_1);
     
     
            }while (in_cntrl_1!='0');

        

        if(in_cntrl_1=='0')
        {
          first_screen();
        }


    }

    else
    {
        
        system("cls");
        system("color 80");
        printf("\n"); 
        printf("\n"); 
        printf("************************************************************************************************************************");
        printf("\n"); 
        printf("\n");
        printf("           Enter pin to go to Voter console for voting [if entered wrong, you'll be redirected to main menu]            ");
        printf("\n");
        printf("\n"); 
        printf("************************************************************************************************************************");
        printf("\n"); 
        printf("\n"); 
        printf("                 Enter here -> ");
        scanf("%d",&pin_entrd);
    

        if(pin_entrd==pin)
        {   
            char cntrl_fv='1';

            do{
            
            system("cls");
            system("color 80");

            printf("\n\n\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("\n");
            printf("\n");
            printf("                                  Welcome to presidential elections, Republic of India.                       ");
            printf("\n");
            printf("\n");
            
            // for printing month and year
            
         printmonthyear();

            printf("\n");
            printf("\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("\n");
            printf("\n");
            
            printf("                                 Enter 1 to vote                       -> ");
            printf("\n");
            printf("\n");
            printf("                                 Enter 0 to return to main menu        -> ");
            printf("\n");
            printf("\n");
            printf("************************************************************************************************************************");
            printf("\n");
            printf("\n");
            if(cntrl_fv!='0'&&cntrl_fv!='1')
            {
                printf("                                      [INVALID INPUT TRY AGAIN!!]                                     ");
                printf("\n");
                printf("\n");
                printf("************************************************************************************************************************");
                printf("\n");
                printf("\n");
            }
            printf("                                             Enter here   ->  " );
            scanf(" %c",&cntrl_fv);
            }while(cntrl_fv!='0'&&cntrl_fv!='1');
            
            if(cntrl_fv=='0')
            {
             first_screen();
            }


            else
            {
                
                system("cls");
                system("color 80");
                
                
                for (int i = 0; i < num_voters ; i++)
                {
                    int current_weight;
                    int l_voterId;
                    
                    
                    system("cls");
                    system("color 80");

                    printf("\n\n\n");
                    printf("          ****************************************************************************************************\n");
                    printf("          ****************************************************************************************************\n");
                    printf("          ****                                                                                            ****\n");
                    printf("          ****                                                                                            ****\n");
                    printf("          ****                                                                                            ****\n");
                    printf("\n");
                    printf("\n");
                    printf("                                  Welcome to presidential elections, Republic of India.                       ");
                    printf("\n");
                    printf("\n");
                    
                    // for printing month and year
                    
                   printmonthyear();

                    printf("\n");
                    printf("\n");
                    printf("          ****                                                                                            ****\n");
                    printf("          ****                                                                                            ****\n");
                    printf("          ****                                                                                            ****\n");
                    printf("          ****************************************************************************************************\n");
                    printf("          ****************************************************************************************************\n");
                    printf("\n");
                    printf("\n");
                    printf("************************************************************************************************************************");
                    
                    int id_check=0;
                    do
                    {
                        
                        
                    printf("\n");
                    printf("\n");
                    printf("                                        Enter your voter Id ->");
                    scanf("%d",&l_voterId);

                    for(int i=0;i<num_voters;i++)
                    {
                        if(reffarray_g[i]==l_voterId)
                        {
                            id_check=1;

                        }
                    }
                   
                    if(id_check==0)
                    {printf("\n\n                              Enter valid voter id!!!         ");} 
                    

                    }while(id_check==0);

                    if(id_check==1)
                    {   
                        char in_cntrl='1';
                        do{
                    printf("\n");
                    printf("\n");
                    printf("************************************************************************************************************************\n");
                    printf("                                         press 1 to vote %s                                                   ",can1_name);
                    printf("\n");
                    printf("\n");
                    printf("                                         press 2 to vote %s                                                   ",can2_name);
                    printf("\n");
                    printf("\n");
                    printf("                                         press 0 to vote NOTA                                                 ");
                    printf("\n");
                    printf("\n");
                    printf("************************************************************************************************************************");
                    if(in_cntrl!='0'&&in_cntrl!='1'&&in_cntrl!='2')
                    {printf("                                           [INVALID INPUT TRY AGAIN!!!]                                                       ");
                    printf("\n");  
                    printf("\n");
                    printf("************************************************************************************************************************");
                    }
                    printf("\n");
                    printf("\n");
                    printf("                                         Enter you choice here -> "); 
                    scanf(" %c",&in_cntrl);
                       
                        }while(in_cntrl!='0'&&in_cntrl!='1'&&in_cntrl!='2');

                        if (in_cntrl=='1')
                        {
                            count1=count1+reffarray_g[num_voters+i];
                        }
                        else if(in_cntrl=='2')
                        {
                            count2=count2+reffarray_g[num_voters+i];
                        }
                        else
                        {
                            NOTA=NOTA+1;
                            
                        }

                         

                    }
                    
                  
                  

                    
                }
                
                
                
                first_screen();  



            }

        }
       
        else
        {
            first_screen();
        }


    }
}





































// for Election management portal console
void elec_management()
{ 
    int pin_entrd;

    if(pin==0)
    {
       
        char in_cntrl='1';
        

       
            do
            {
                
                system("cls");
                system("color 80");
                if (in_cntrl!='0' && in_cntrl!='1'){
                printf("\n"); 
                printf("\n"); 
                printf("                                           INVALID INPUT TRY AGAIN!                                                       ");}
                printf("\n"); 
                printf("\n"); 
                
                printf("\n************************************************************************************************************************");
                printf("\n"); 
                printf("\n"); 
                printf("                                   No pin has been set, To Set the pin enter  -> 1                                        ");
                printf("\n");
                printf("\n");
                printf("                                   To return to main menu enter               -> 0                                        ");
                printf("\n");
                printf("\n");
                printf("\n************************************************************************************************************************");
                printf("\n"); 
                printf("\n");
                printf("                                                Enter here ->      ");
                scanf(" %c",&in_cntrl);
            
            }while (in_cntrl!='0' && in_cntrl!='1');
        

        if (in_cntrl=='1')   
        {
            
            system("cls");
            system("color 80");
            printf("\n"); 
            printf("\n"); 
            printf("\n************************************************************************************************************************");
            printf("\n"); 
            printf("\n"); 
            printf("                          Enter pin of 8 digit that uses numbers(0-9) and nothing else,                                   ");
            printf("\n                [Enter as directed as this will control program access from here on out!!]                              ");
            printf("\n");
            
            printf("\n************************************************************************************************************************");
            printf("\n\n                                            Enter new pin here-> ");
            scanf("%d",&pin);
            first_screen();
                
        }

        else
        {
            first_screen();
        }




    }

    else
    {
        
        system("cls");
        system("color 80");
        printf("\n"); 
        printf("\n************************************************************************************************************************");
        printf("\n"); 
        printf("\n");
        for(int i=0;i<10;i++){printf(" ");}
        printf("Enter pin to go to election management menu [if entered wrong, you'll be redirected to main menu]");
        for(int i=0;i<10;i++){printf(" ");}
        printf("\n");
        printf("\n************************************************************************************************************************");
        printf("\n"); 
        for(int i=0;i<49;i++){printf(" ");}
        printf("\n\n                                               Enter here ->      ");
        scanf("%d",&pin_entrd);
        
        if(pin_entrd==pin)
        { 
            char in_cntrl='1';
            do
            {

                
                system("cls");
                system("color 80");
                //  welcome sign
                printf("\n\n\n");
                printf("          ****************************************************************************************************\n");
                printf("          ****************************************************************************************************\n");
                printf("          ****                                                                                            ****\n");
                printf("          ****                                                                                            ****\n");
                printf("          ****                                                                                            ****\n");
                printf("\n");
                printf("\n");
                printf("                                   EVM for presidential elections, Republic of India.                         ");
                printf("\n");
                printf("                                                ELECTION MANAGEMENT MENU                                      ");

                printf("\n");
                printf("\n");
                printf("          ****                                                                                            ****\n");
                printf("          ****                                                                                            ****\n");
                printf("          ****                                                                                            ****\n");
                printf("          ****************************************************************************************************\n");
                printf("          ****************************************************************************************************\n");
                printf("\n");
                printf("\n");
                if (in_cntrl != '0' && in_cntrl != '1' && in_cntrl != '2' && in_cntrl != '3' && in_cntrl != '4' && in_cntrl != '5' && in_cntrl != '6')
                {

                    printf("\n");
                    printf("\n");
                    printf("                                                [INVALID INPUT TRY AGAIN!!]                                     ");
                }
                // showing all the options

                printf("\n************************************************************************************************************************");
                printf("\n");
                printf("\n");
                printf("                                         To Change System pin               -> 1                                             ");
                printf("\n");
                printf("\n");
                printf("                                         Voter details                      -> 2                                             ");
                printf("\n");
                printf("\n");
                printf("                                         To change month/year of elections  -> 3                                             ");
                printf("\n");
                printf("\n");
                printf("                                         To enter candidate details         -> 4                                             ");
                printf("\n");
                printf("\n");
                printf("                                         To calculate results               -> 5                                             ");
                printf("\n");
                printf("\n");
                printf("                                         To exit to main menu               -> 0                                             ");
                printf("\n");
                printf("\n");
                printf("\n************************************************************************************************************************");
                printf("\n");
                printf("\n");
                printf("                                                 Enter here -> ");
                scanf(" %c", &in_cntrl);
            } while (in_cntrl != '0' && in_cntrl != '1' && in_cntrl != '2' && in_cntrl != '3' && in_cntrl != '4' && in_cntrl != '5' && in_cntrl != '6');

            switch (in_cntrl)
            {
            case '1':
            reset_pin();
                break;
            case '2':
            voter_details();
                break;
            case '3':
            elec_mon_yr();
                break;
            case '4':
            to_add_can();
                break;
            case '5':
            results();
                break;
            case '0':
            first_screen();
                break;
            default:
                break;
            }
            

        }

        else
        {
            first_screen();
        }


    }



}
































// for First screen (Program console)

void first_screen()
{
   

    char cntrl_fs='1';
    

    
        do
        {   
            
            system("cls");
            system("color 80");
            printf("\n\n\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("\n");
            printf("\n");
            printf("                                  Welcome to presidential elections, Republic of India.                       ");
            printf("\n");
            printf("\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("\n");
            printf("\n");
            if(cntrl_fs!='0' && cntrl_fs!='1' && cntrl_fs!='2' ){
            printf("                                                 [INVALID INPUT TRY AGAIN!]                                     ");
            printf("\n");
            printf("\n");}


            printf("\n************************************************************************************************************************");
            printf("\n");
            printf("\n");
            printf("                                         For election management menu enter -> 1                                           ");
            printf("\n");
            printf("\n");
            printf("                                         To vote enter                      -> 2                                           ");
            printf("\n");
            printf("\n");
            printf("                                         To exit the application            -> 0                                           ");
            printf("\n");
            printf("\n");
            printf("\n************************************************************************************************************************");
            printf("\n");
            printf("\n");
            printf("                                                   Enter here -> ");
            scanf(" %c", &cntrl_fs);

        }while(cntrl_fs!='0' && cntrl_fs!='1' && cntrl_fs!='2' );
    

    if(cntrl_fs=='0')
    { main();}
    else if (cntrl_fs=='1')
    {
        elec_management();
    }
    else
    {
        for_voters();
    }
}

// for Entry console


void main()
{
    
    // main control
    char cntrl_m='1';

   
    
        do
        { 
            
            system("cls");
            system("color 80");
            // Welcome sign
            printf("\n\n\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("\n");
            printf("\n");
            printf("                                  Welcome to presidential elections, Republic of India.                       ");
            printf("\n");
            printf("\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****                                                                                            ****\n");
            printf("          ****************************************************************************************************\n");
            printf("          ****************************************************************************************************\n");
            printf("\n");
            printf("\n");
             if(cntrl_m!='0' && cntrl_m!='1')
            {
            printf("                                             [INVALID INPUT TRY AGAIN!!]                                     ");
            printf("\n");
            printf("\n");}
            // To enter into program
            printf("                                        Enter 1 to get started and 0 to exit - ");
            scanf(" %c",&cntrl_m);
            printf("\n");
            printf("\n");
            
        }while (cntrl_m!='0'&&cntrl_m!='1');

    

    // to exit program
    if(cntrl_m=='0')
    {
     return;
    }
    // to go further into the program 

    else
    {   
        
        system("cls");
        system("color 80");
        first_screen();

    }


}

