#include<stdio.h>
struct field
{
    char sname[10];
    int distr;
};
struct poppulation
{
    int men,women;
};
struct state
{
    struct field f;
    struct poppulation p;
};
int main()
{
    int n,i;
    printf("Enter no of states  ");
    scanf("%d",&n);
    struct state s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter state name  ");
        scanf("%s",s[i].f.sname);
        printf("Enter no of districts  ");
        scanf("%d",&s[i].f.distr);
        printf("Enter men poppulation in state  ");
        scanf("%d",&s[i].p.men);
        printf("Enter women poppulation in state  ");
        scanf("%d",&s[i].p.women);
    }
    for(i=0;i<n;i++)
    {
        printf("state name:%s\n",s[i].f.sname);
        printf("no of districts:%d\n",s[i].f.distr);
        printf("men poppulation in state:%d\n",s[i].p.men);
        printf("men poppulation in state:%d\n",s[i].p.women);
    }
    for(i=0;i<n;i++)
    {
       if(s[i].p.women>s[i].p.men)
      { 
       printf("%s state having more women poppulation than men \n",s[i].f.sname);
      }
    }
    return 0;
}
