#include<stdio.h>
void main(){
    char str[20];
    int i;
printf("Enter the string: ");
scanf("%s",&str);

 for(i=0;i<20;i++){
 	if(str[i]>=65 && str[i]<=90){
 		str[i]=str[i]+32;
	 }else if(str[i]>=97 && str[i]<=122){
	    str[i]=str[i]-32;
	 }
	 
 }
 printf("toggle case string is: %s",str);
}
