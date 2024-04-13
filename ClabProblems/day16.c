#include <stdio.h>
#include <stdlib.h>

int find_len(char str[50]){
	int count = 0, i=0;
	while(str[i] != '\0'){
		count++;
		i++;
	}
	return(count);
}

char *str_cat(char s1[50], char s2[50]){
	char *s3[100]; int i =0, k=0;
	while(s1[i] != '\0'){
		*s3[k] = s1[i];
		k++;
		i++;
	}
	i=0;
	while(s2[i] != '\0'){
		*s3[k] = s1[i];
		k++;
		i++;
	}
	*s3[k] = '\0';
	return(*s3);
	
}

void main(){
	char str[50];
	int count =0, i =0;
	scanf("%s", str);
	count = find_len(str);
	printf("%d", count);
	
	
	char str1[50], str2[50];
	scanf("%s", str1);
	scanf("%s", str2);
	char *str3[100];
	
	*str3 = str_cat(str1, str2);
	printf("%s", *str3);
}
