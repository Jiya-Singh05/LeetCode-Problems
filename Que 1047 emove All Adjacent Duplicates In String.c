// You are given a string s consisting of lowercase English letters.
//   A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
char* removeDuplicates(char* s) {
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        if(top!=-1 && s[top]==s[i]) top--;
        else s[++top]=s[i];
    }
    s[++top]='\0';
    return s;
}
