#include <stdio.h>
#include <stdlib.h>

struct Stack
{

    int top;
    int size;
    int *S;
};

void create(struct Stack *st)
{

    printf("enter the size : ");
    scanf("%d", &st->size);

    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void display(struct Stack st)
{

    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%d ", st.S[i]);
    }
    printf("\n");
}

void push(struct Stack *st, int val)
{

    if (st->top == st->size)
    {
        printf("stack full \n");
    }
    else
    {
        st->top++;
        st->S[st->top] = val;
    }
}

int pop(struct Stack *st)
{
    int x = -1;

    if (st->top == -1)
    {
        printf("empty stack");
    }

    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(struct Stack st, int index)
{

    int x = -1;

    if (st.top - index + 1 < 0)
    {
        printf("invalid index \n");
    }

    else
    {
        x = st.S[st.top - index + 1];
    }
    return x;
}

int is_empty(struct Stack st)
{
    if (st.top == -1)
    {
        printf("Empty stack \n ");
    }
    else
    {
        printf("data can be entered \n");
    }
}

int is_full(struct Stack st)
{
    if (st.top == st.size - 1)
    {
        printf("stack full ");
    }
    else
    {
        printf("data can be enterd \n");
    }
}

int stack_top(struct Stack st){
    if( ! is_empty(st)){
        return st.S[st.top];
    }
    else {
        return -1;
    }

}

int main()
{
    struct Stack st;

    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    

    peek(st, 1);

    display(st);

    return 0;
}

