#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int guestseats[2]={-1};
int Teacherseats[10]={-1};
int studentseats[30]={-1};
void start(){
    for(int i=0;i<30;i++){
        studentseats[i]=-1;
    }
    for(int i=0;i<20;i++){
        Teacherseats[i]=-1;
    }
    for(int i=0;i<2;i++){
    guestseats[i]=-1;
    }

}
void reserveseatsforstudent(){
    char studentname[100];
    int seatnumber;
    int id;
    int countleft=0;
    for(int i=0;i<30;i++){
        if(studentseats[i]!=-1){
            countleft=countleft+1;
        }
    }
        if (countleft==0){
            printf("No seats left\n");
        }
        else{
            printf("Enter your name:\n");
            fflush(stdin);
            gets(studentname);
            printf("Enter your three digit ID\n");
            scanf("%d",&id);
            while(id<100||id>999){
                printf("\nEnter Id again");
                scanf("%d",&id);
            }
            seatnumber=rand()%30;
            for(int i=0;i<30;i++){
                while(studentseats[i]==seatnumber){
                    seatnumber=rand()%30;
                }
            }
            for(int i=0;i<30;i++){
                if(studentseats[i]==-1){
                    studentseats[i]=seatnumber;
                    i=30;
                }
            }


        }
        printf("Your Seat number is: %d\n",seatnumber);

}
void reserveseatsforteacher(){
    char teachername[100];
    int seatnumber;
    char department[100];
    int countleft=0;
    for(int i=0;i<10;i++){
        if(Teacherseats[i]!=-1){
            countleft=countleft+1;
        }
    }
        if (countleft==0){
            printf("No seats left\n");
        }
        else{
            printf("Enter your name:");
            fflush(stdin);
            gets(teachername);
            printf("Enter your Department name:");
            gets(department);
            seatnumber=rand()%10;
            for(int i=0;i<10;i++){
                while(Teacherseats[i]==seatnumber){
                    seatnumber=rand()%20;
                }
            }
            for(int i=0;i<10;i++){
                if(Teacherseats[i]==-1){
                    Teacherseats[i]=seatnumber;
                    i=10;
                }
            }

        }
        printf("Your Seat number is: %d\n",seatnumber);

}
void reserveseatsforGuest(){
    char Guestname[100];
    int seatnumber;
    char organisation[100];
    int countleft=0;
    for(int i=0;i<2;i++){
        if(guestseats[i]!=-1){
            countleft=countleft+1;
        }
    }
        if (countleft==0){
            printf("No seats left\n");
        }
        else{
            printf("Enter your name:");
            fflush(stdin);
            gets(Guestname);
            printf("Enter your Department name:");
            gets(organisation);
            seatnumber=rand()%2;
            for(int i=0;i<2;i++){
                while(guestseats[i]==seatnumber){
                    seatnumber=rand()%20;
                }
            }
            for(int i=0;i<2;i++){
                if(guestseats[i]==-1){
                    guestseats[i]=seatnumber;
                    i=2;
                }
            }
        }
        printf("Your Seat number is: %d\n",seatnumber);
}
void statusinfo(){
    printf("The Seats left for Student\n");
    for(int i=0;i<30;i++){
        if(studentseats[i]!=-1)
            continue;
        else
            printf("%d\n",i);
    }
    printf("The Seats left for Teacher\n");
    for(int i=0;i<20;i++){
        if(Teacherseats[i]!=-1)
            continue;
        else
            printf("%d\n",i);
    }
    printf("The Seats left for Guests\n");
    for(int i=0;i<2;i++){
        if(guestseats[i]!=-1)
            continue;
        else
            printf("%d\n",i);
    }

}
void remove(){
    int choice=0;
    int seatnumber;
    printf("Enter 1 for student\nEnter 2 for Teacher\nEnter 3 for guest");
    scanf("%d",&choice);
    while(choice<1||choice>3){
        printf("Invalid choice, 1 to 3 inclusive\n");
        scanf("%d",&choice);
    }
    if (choice==1){
        printf("Enter seat number");
        scanf("%d",&seatnumber);
        while(seatnumber<0||seatnumber>30){
            printf("Invalid Seat Number");
            scanf("%d",&seatnumber);
        }
        for(int i=0;i<30;i++){
            if(studentseats[i]==seatnumber){
                for(int k=i;k<30;k++){
                    studentseats[k]=studentseats[k+1];
                }
                i--;
            }
        }
    }
    else if (choice==2){
    printf("Enter seat number");
        scanf("%d",&seatnumber);
        while(seatnumber<0||seatnumber>20){
            printf("Invalid Seat Number");
            scanf("%d",&seatnumber);
        }
        for(int i=0;i<20;i++){
            if(Teacherseats[i]==seatnumber){
                for(int k=i;k<20;k++){
                    Teacherseats[k]=Teacherseats[k+1];
                }
                i--;
            }
        }
    }
    else if(choice==3){
    printf("Enter seat number");
        scanf("%d",&seatnumber);
        while(seatnumber<0||seatnumber>1){
            printf("Invalid Seat Number");
            scanf("%d",&seatnumber);
        }
        for(int i=0;i<2;i++){
            if(guestseats[i]==seatnumber){
                for(int k=i;k<2;k++){
                    guestseats[k]=guestseats[k+1];
                }
                i--;
            }
        }
    }

}
int main()
{
    start();
    statusinfo();
    return 0;
}