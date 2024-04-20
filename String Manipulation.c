#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
char firststr[100];
char SecondStr[100];
void firststring(){
    printf("Enter the first String");
    firststr=gets();

}
void firststring(){
    printf("Enter the  String B");
    SecondStr=gets();
}
bool stringcom(char arr[],char arr2[],int siz){
    if(strcmp(arr,arr2)==0){
        printf("Both Strings are equal");
    }
    else  if (strcmp(arr,arr2)>0){
        printf("String %s is greater",arr);
    }
    else{
        printf("String %s is greater",arr2);
    }

}
int occurencsubtringB(){
int i, j, l1, l2;
  int count = 0;
  int found = 0;

  l1 = strlen(firststr);
  l2 = strlen(SecondStr);

  for(i = 0; i < l1 - l2 + 1; i++) {
    found = 1;
    for(j = 0; j < l2; j++) {
      if(firststr[i+j] != SecondStr[j]) {
        found = 0;
        break;
      }
    }

    if(found) {
      count++;
      i = i + l2 -1;
    }
  }
    printf("The occurrence of Substring B in a is %d",count);
  return count;
}
void swap(){
    char temp[100];
    for(int i=0;firststr[i]!='\0';i++){
        temp[i]=firststr[i];
    }
    for(int i=0;SecondStr[i]!='\0';i++){
        firststr[i]=SecondStr[i];
    }
    for(int i=0;temp[i]!='\0';i++){
        SecondStr[i]=temp[i];
    }
}
void reverse(){
    char temp[100];
    int j=0;
    int lastchar=0;
    for(int i=0;firststr[i]!='\0';i++){
        if(firststr[i]=='\0')
            lastchar=i;
    }
    for(int i=lastchar;i>=0;i--){
        temp[j]=firststr[i];
        j++;
    }
}
void palindrom(){
    char temp[100];
    int j=0;
    int lastchar=0;
    bool notpalindrome=false;
    for(int i=0;SecondStr[i]!='\0';i++){
        if(SecondStr[i]=='\0')
            lastchar=i;
    }
    for(int i=lastchar;i>=0;i--){
        temp[j]=SecondStr[i];
        j++;
    }
    for(int i=0;SecondStr[i]!='\0';i++){
        if(SecondStr[i]!=temp[i]){
            notpalindrome=true;
        }
            
    }
    if (notpalindrome==true){
        printf("Your entered String is not palindrome");
    }
}
int main()
{
    return 0;
}