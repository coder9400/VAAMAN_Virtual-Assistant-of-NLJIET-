#include<stdio.h>
#include<string.h>
int main()
{
    printf("\n\n");
    printf("Hi, I am VAAMAN the Virtual Assistance of NEW LJ Institute Of Engineering & Technology (NLJIET)\n");
    char que[1000],ch;
    while(1)
    {
        printf("How can I help you ?\n(Press 1 to exit) : ");
        fflush(stdin);
        scanf("%[^\n]s",que);
        
        if(strcmp(que,"1")==0)
        {
            printf("Thank You & Have a Nice Day!!!\nByee.......\n\n");
            return 0;
        }
        else
        { 
            
            if((strstr(que,"Contact Number"))  || (strstr(que,"contact number")) || (strstr(que,"contactnumber")) || (strstr(que,"ContactNumber")) || (strstr(que,"Contact")) || (strstr(que,"contact")))
            {
                printf("Contact Number -> 18001210082\n\n");
                
            }
                
            else if((strstr(que,"EMAIL")) || (strstr(que,"Email")) || (strstr(que,"email")))
            {
                printf("info@ljku.edu.in\n");
                printf("\n\n");
            }
            else if( (strstr(que,"ADDRESS")) ||  (strstr(que,"address")))
            {
                printf("Pakwan,\nBehind Rajpath Club Gate to Sindhu Bhavan Road,\nSarkhej - Gandhinagar Hwy,\nAEC Char Rasta,\nAhmedabad,\nGujarat 380054\n");
                printf("\n\n");
            }
               
            else if( (strstr(que,"fees")) || (strstr(que,"FEES")) || (strstr(que,"fee structure")) || (strstr(que,"fees structure")) || (strstr(que,"FEE STRUCTURE")) || (strstr(que,"FEES STRUCTURE")))
            {
                printf("Fees -> ₹1,00,000 /peryear\n");
                printf("\n\n");
            }
            else if((strstr(que,"Admission")) || (strstr(que,"admission")) || (strstr(que,"ADMISSIOM")))
            {
                printf("NLJIET Provides 3 Branchech of Computer Science & Engineering (CSE)\n\n");
            printf("Press A -> CSE\n");
            printf("Press B -> CSE-AIML\n");
            printf("Press C -> CSE-DS\n");
            printf("Enter the Alphabet -> ");
            fflush(stdin);
            scanf("%c",&ch);printf("\n");
                if(ch=='A')
                {
                    printf("*************CSE****************\n");
                printf("->It's a 4 year duration Programm\n->In which 2 Semesters are there in a year && total 8 Semester are there suring 4 Year\n");
                printf("->It is a Core Computer Branch\n");
                printf("->The Type of Degree We are providing -> B.E  (Bachelors Of Engineering)\n");
                printf("->The Degree will be provided from GTU (Gujarat Technical Uiversity)\n");
                printf("\n\n");
                }
                else if(ch=='B')
                {
                    printf("*************CSE-AIML****************\n");
                printf("->It's a 4 year duration Programm\n->In which 2 Semesters are there in a year && total 8 Semester are there suring 4 Year\n");
                printf("->It is Computer Branch Affilated with AI-ML (Aritificial Intelligenc & Machine Learning)\n");
                printf("->The Type of Degree We are providing -> B.E  (Bachelors Of Engineering)\n");
                printf("->The Degree will be provided from GTU (Gujarat Technical Uiversity)\n");
            printf("\n\n");
                }
                else if(ch=='C')
                {
                    printf("*************CSE-DS****************\n");
                printf("->It's a 4 year duration Programm\n->In which 2 Semesters are there in a year && total 8 Semester are there suring 4 Year\n");
                printf("->It is Computer Branch Affilated with DS (Data Science)\n");
                printf("->The Type of Degree We are providing -> B.E  (Bachelors Of Engineering)\n");
                printf("->The Degree will be provided from GTU (Gujarat Technical Uiversity)\n");
                    printf("\n\n");
                }
            }
                

        }
        
        
        
    }
    return 0;
}