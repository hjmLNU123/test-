/*输入三个字符串，找出其中最大者*/ 

#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100],str2[100],str3[100];
  scanf("%s %s %s",&str1,&str2,&str3);
  //str本身就代表这个字符串的首地址，所以用指针方便且简洁
  char *max=str1;
  /*不用指针的方法
  char max[100];
  strcpy(max,str1);
  */
  if(strcmp(str2,max)>0){
    max=str2;
  }
  if(strcmp(str3,max)>0){
    max=str3;
  }
  printf("%s\n",max);
  return 0;
}