struct student
{
  int rollno,score;
  char name[20];
};
int main()
{
    int n,i,j;
    printf("Enter no of students  ");
    scanf("%d",&n);
    struct student s[n],temp={0,0,"\0"};
     for(i=0;i<n;i++)
    {
        printf("Enter student roll no\n");
        scanf("%d",&s[i].rollno);
        printf("Enter name of the student\n");
        scanf("%s",s[i].name);
        printf("Enter score of %s\n",s[i].name);
        scanf("%d",&s[i].score);

    }
    for(i=0;i<n;i++)
    {
        printf("roll no:%d\n",s[i].rollno);
        printf("name of the student:%s\n",s[i].name);
        printf("score of student is %d\n",s[i].score);
    }
    for(i=0;i<n;i++)
    for(j=1;j<n;j++)
    {
       if(s[i].score<s[j].score) 
       {
           temp=s[j];
           s[j]=s[i];
           s[i]=temp;
       }
    }
    printf("students merit wise list\n");
     for(i=0;i<n;i++)
    {
        printf("roll no:%d\n",s[i].rollno);
        printf("name of the student:%s\n",s[i].name);
        printf("score of student is :%d\n",s[i].score);
    }
}
