#include <stdio.h>
int main()
{
        char *name;
        int i;
        int n = 0;

        name= (char *)calloc(80, sizeof(char));

        if(name == NULL) {
            printf("\nOut of memory!\n");
            return 1;
        }
        else {
            printf("The name you enter is: ");
            scanf("%79[0-9a-zA-Z ]", name);
        }

        i = 0;
        while ( (i < 80) && name[i])  {
            if(name[i] != ' ') {
                n += 1;
            }
            i++;
        }
        printf("\nThe number of characters in the user's name is %d\n", n);

        free(name);
}
