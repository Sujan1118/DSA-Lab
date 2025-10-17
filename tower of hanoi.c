#include <stdio.h>
#include <stdlib.h>


void towerofhanoi(int n,char source,char temp,char destination)
{
    if(n==1)
    {
        printf("move disc 1 from %c --> %c \n",source,destination);
        return;
    }
    towerofhanoi(n-1,source,destination,temp);
    printf("move disk %d from %c --> %c\n",n,source,destination);
    towerofhanoi(n-1,temp,source,destination);
}

int main()
{
  int n;
  printf("enter numbet of discs : ");
  scanf("%d",&n);
  printf("\n sequence of moves :\n");
  towerofhanoi(n,'S','T','D');
  int totalmoves = (1<<n)-1;
  printf("\n total number of moves = %d\n",totalmoves);
  return 0;
}
