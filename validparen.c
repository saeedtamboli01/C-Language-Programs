bool isValid(char* s){
    int len = strlen(s);
    char stack[len+1]; int top = -1;
    for(int i=0; i<len; i++){
        char c = s[i];
        if(c=='('||c=='['||c=='{') stack[++top]=c;
        else {
            if(top<0) return false;
            char t = stack[top--];
            if ((c==')' && t!='(') || (c==']' && t!='[') || (c=='}' && t!='{')) return false;
        }
    }
    return top==-1;
}
