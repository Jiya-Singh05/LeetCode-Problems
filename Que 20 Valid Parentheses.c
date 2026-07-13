// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
bool isValid(char* s) {
    char stack[10000];
    int top=-1;
    for(int i=0;i<strlen(s);i++) {
        char a=s[i];
        if(a=='(' ||a=='[' ||a=='{') stack[++top]=a;
        else {
            if (top==-1) return 0;
            if  ((a==')' && stack[top]!='(')||(a==']' && stack[top]!='[')||(a=='}' && stack[top]!='{')) return false;
            top--;
        }
    }
    return top==-1;
}
