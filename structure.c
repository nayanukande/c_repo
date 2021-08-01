
/*Write a Program to accept records of different states using
array of structures. The structure state should contain
state name, number of engg colleges, 
number of medical colleges,
no. of mgmt colleges and No. of univerisities.
Calculate the total colleges 
and display the state which is having the 
highest no of colleges.
*/
#include<stdio.h>
struct state
{
    char state_name[30];
    int no_engicolleges;
    int no_medicolleges;
    int no_mgmtcolleges;
    int no_universities;
};
int main()
{
    struct state s[10];
    int i,n,count=0;
    printf("Enter how many states colleges data you want to show\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter State name");
        scanf("%s",&s[i].state_name);
        printf("Enter No. of Engineering coleges");
        scanf("%d",&s[i].no_engicolleges);
        printf("Enter No. of Medical colleges");
        scanf("%d",&s[i].no_medicolleges);
        printf("Enter No. of Management colleges");
        scanf("%d",&s[i].no_mgmtcolleges);
        printf("Enter No. of Univerities");
        scanf("%d",&s[i].no_universities);
    }
    printf("\nStates Colleges and Universities informations are\n");
    printf("State\t\t No of Engineering colleges\t\t No of Medical colleges\t\t No of Management colleges\t\t NO of Universities\n");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t  %d \t %d",s[i].state_name,s[i].no_engicolleges,s[i].no_medicolleges,s[i].no_mgmtcolleges,s[i].no_universities);        
    }
}
