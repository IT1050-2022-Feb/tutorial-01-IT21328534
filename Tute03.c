#include <stdio.h>
int main() {

int n_number, count=0;

printf("Enter the N number : ");
scanf("%d",&n_number);

for(int i=1;i<=n_number;i++){

count = count+i;

}

printf("Total count is : %d",count);
  
  return 0;
}
