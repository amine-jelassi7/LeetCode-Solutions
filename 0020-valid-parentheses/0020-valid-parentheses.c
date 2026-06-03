typedef struct
{
    char arr[10000];
    int top;
}Stack;

int is_empty(Stack stack)
{
    return stack.top==-1;
}

void pop(Stack*stack)
{
    (stack->top)--;
}
char peek(Stack  stack)
{
    return stack.arr[stack.top];
}
void add_element(Stack * stack, char val)
{
    stack->arr[++(stack->top)] =  val;
}
void add(Stack * stack, char val)
{
    stack->arr[++(stack->top)] =  val;
}
bool isValid(char* s) {
    Stack stack;
    stack.top= -1;
    int i=0;
    int len=strlen(s);

    while (i<len)
    {
        char curr = s[i];
        if(curr==')' && !is_empty(stack) && peek(stack)=='(')
        {
            pop(&stack);
        }
        else if(curr==']' && !is_empty(stack)&& peek(stack)=='[')
        {
            pop(&stack);
        }
        else if(curr=='}' && !is_empty(stack)&& peek(stack)=='{')
        {
            pop(&stack);
        }
        else
        {
            add(&stack,curr);
        }
        i++;
    }

    return stack.top == -1;
}