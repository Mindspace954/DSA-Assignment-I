#include<stdio.h>

int main()
{
    char id[1000];
    printf("Enter the ID: \n");
    scanf("%s",id);
    int i=0;
    int check=0;
    int count=0;
    int idx1=-1,idx2=-1;
    while(id[i]!='\0')
    {
        if((id[i]>='a' && id[i]<='z') || (id[i]>='A' && id[i]<='Z') || (id[i]>='0' && id[i]<='9'))
            check=1;

        else if((id[i]=='.' || id[i]=='-'  || id[i]=='_' || id[i]=='@') && (i!=0 && id[i+1]!='\0'))
            check=1;

        else
        {
            check=-1;
            break;
        }
        if(id[i]=='@')
        {
            count++;
            idx1=i;
        }
        if(count>1)
        {
            check=-1;
            break;
        }
        if(id[i]=='.')
        {
            idx2=i;
        }
        i++;
    }

    if(idx2-idx1<2)
        check=-1;

    if(check==1)
        printf("Valid ID\n");

    else
        printf("Invalid ID\n");
}
