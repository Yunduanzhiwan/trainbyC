#include <stdio.h>
#include <string.h>

#define MAXN 20
bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */

bool palindrome( char *s ){
	int size=strlen(s);
	for(int i=0;i<size;++i){
		if((*(s+i))!=(*(s+size-i-1))){
			return false;
			break;
		}
	}
	return true;
	
}
