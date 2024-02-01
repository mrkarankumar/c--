#include <stdio.h>

void myFunction(int myNumbers[5]) {
//   for (int i = 0; i < 5; i++) {
//     printf("%d\n", myNumbers[i]);
//   }

for (int i=0; i<10;i++){

printf("%d\n",myNumbers[i]);

}


}

int main() { 
  int myNumbers[5] = {10, 20, 30, 40, 50,60,70,80,90,100,101};  
  myFunction(myNumbers);
  return 0;
}