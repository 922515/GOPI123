1 #include<stdio.h>
2 #include <string.h>
3 int main(){
4    int i,j;
5    char str[10][50],temp[50];
6    printf("Enter 10 words:\n");
7    for(i=0;i<10;++i)
8        gets(str[i]);
9    for(i=0;i<9;++i)
10        for(j=i+1;j<10 ;++j){
11            if(strcmp(str[i],str[j])>0)
12            {
13                strcpy(temp,str[i]);
14                strcpy(str[i],str[j]);
15                strcpy(str[j],temp);
16            }
17        }
18    printf("In lexicographical order: \n");
19    for(i=0;i<10;++i){
10        puts(str[i]);
21    }
22    return 0;
23 }
