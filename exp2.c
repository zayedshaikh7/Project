#include <stdio.h>
#define size 10
int stack[size], choise,value,top=-1;
int push();
int pop();
int display();
int push(){
if (top==size-1){
    printf("stack id full can't push\n");
    return 1;

}else {
printf("enter element to insert\n");
scanf("%d",&value);
top++;
stack[top]=value;

}
}
int pop(){
if (top==-1){
    printf("stcak is emty ,cant pop\n");
    return 1;

}else {
printf("element deleted\n");
top--;
}
}
int display (){
if (top==-1){
    printf("stack is emty, nothing to display");
}else { printf("ement are\n");
for (int i=top;i>=0;i--){
    printf("|%d|\n",stack[i]);
}
}
}
 main (){
while(1){
 printf("\n\n select operations\n");
 printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter choise\n");
scanf("%d",&choise);
switch(choise){
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    printf("exiting the program");
  return 0;
  break;
default :
printf("invalid option");
break;

}}}
/*select operations
1.push
2.pop
3.display
4.exit
enter choise
1
enter element to insert
1


 select operations
1.push
2.pop
3.display
4.exit
enter choise
1
enter element to insert
2


 select operations
1.push
2.pop
3.display
4.exit
enter choise
1
enter element to insert
3


 select operations
1.push
2.pop
3.display
4.exit
enter choise
1
enter element to insert
4


 select operations
1.push
2.pop
3.display
4.exit
enter choise
3
ement are
|4|
|3|
|2|
|1|


 select operations
1.push
2.pop
3.display
4.exit
enter choise
2
element deleted


 select operations
1.push
2.pop
3.display
4.exit
enter choise
3
ement are
|3|
|2|
|1|*/