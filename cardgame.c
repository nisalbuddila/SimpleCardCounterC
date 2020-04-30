#include <stdlib.h>
#include <stdio.h>

int main(){
char card_name[3];
int count=0;
puts("$$ CARD GAME $$");
puts("--to Exit Press w");
while(card_name[0]!='x'){
puts("Enter the Card Name:");
scanf("%2s",card_name);
int val=0;
switch(card_name[0]){
case 'K':
case 'Q':
case 'J':
	val=10;
	break;
case 'A':
	val=11;
	break;
case 'X':
	puts("X is not a card name");
	continue;
/*case 'w':
	exit; */
default:
	val=atoi(card_name);
	if((val<1)&&(val>10)){
	puts("Don't understand the value");
	continue;
	}

}
if((val>2) && (val<7)){
count++;
}else if(val==10){
count--;
}
printf("current count : %i\n",count);
}
}