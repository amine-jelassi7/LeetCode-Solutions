
bool isValid(char* s) {
    int len = strlen(s);
    
    if (len % 2 != 0) {
        return false;
    }
    
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char current = s[i];
        
        if (current == '(' || current == '{' || current == '[') {
            stack[++top] = current;
        } 
        else {
            if (top == -1) {
                free(stack);
                return false;
            }
            
            char open = stack[top--];
            if ((current == ')' && open != '(') ||
                (current == '}' && open != '{') ||
                (current == ']' && open != '[')) {
                free(stack);
                return false;
            }
        }
    }
    
    
    bool result = (top == -1);
    free(stack);
    return result;
}