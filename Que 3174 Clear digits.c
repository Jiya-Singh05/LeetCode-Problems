/*You are given a string s.
Your task is to remove all digits by doing this operation repeatedly:
Delete the first digit and the closest non-digit character to its left.
Return the resulting string after removing all digits.

Note that the operation cannot be performed on a digit that does not have any non-digit character to its left.*/
char* clearDigits(char* s) {
    int n=strlen(s), top=-1;
    char *stack=(char*) malloc((n+1)*sizeof(char));
    for(int i=0;i<n;i++) {
        if(isdigit(s[i])){
            if(top>-1) top--;
        }
        else stack[++top]=s[i];
    }
    stack[++top]='\0';
    return stack;
}
