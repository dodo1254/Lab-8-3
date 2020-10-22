#include <stdio.h>
#include <string.h>
int main(void) {
  char password[20],daopassword[20];
  int j=1;  
  do {
      if(j==1) {
          printf("Enter new password (max 10) : ");
          gets(password);
          while(strlen(password)>10 && j==1) {
        printf("Enter new password (max 10) : ");
        gets(password);
        }
      }
    printf("%d Enter password : ",j);
    gets(daopassword);
    if(strcmp(password,daopassword)==0) {
      printf("Password correct !!!");
      printf("\nPlease setup new password\n");
        j = 1;
    }
    else if(strcmp(password,daopassword)!=0) {
      printf("Password Not correct !!!\n");
      if(j==3) printf("Close Program.");
      j++;
    }
  }while(j<=3);
  return 0;
}