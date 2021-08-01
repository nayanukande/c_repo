#include<stdio.h>
struct state
{
    char sname[10];
    int distr;
    int pop;
};
int main()
{
    struct state s[10];
    int i,n,count=0;
    printf("Enter How many states data you want to enter\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter State name");
        scanf("%s",&s[i].state_name);
        printf("Enter No. of districts in state");
        scanf("%d",&s[i].no_districts);
        printf("Enter states population");
        scanf("%d",&s[i].pop);
    }
    printf("\nStates Informations are\n");
    printf("State\t No of Districts \t Population\n");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t  %d \t %d",s[i].state_name,s[i].no_districts,s[i].pop);        
    }
    for(i=0;i<n;i++)
    {
        if(s[i].no_districts>8)
        count++;
    }
    printf("\n%d States have more than 8 districts",count);
}
