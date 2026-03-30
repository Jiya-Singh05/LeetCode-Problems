/*Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.*/

bool backspaceCompare(char* s, char* t) {
    int tops=-1,topt=-1, arr1[200],arr2[200];
    for(int i=0;i<strlen(t);i++) {
         if(t[i]=='#'){
            if(topt>=0) topt--;
        }
        else arr2[++topt]=t[i];
    }
     for(int i=0;i<strlen(s);i++) {
         if(s[i]=='#'){
            if(tops>=0) tops--;
        }
        else arr1[++tops]=s[i];
    }
    for(int i=0;i<=tops;i++){
        if(arr1[i]!=arr2[i])
        return 0;
    }
    if(topt!=tops) return 0;
    return 1;

}
