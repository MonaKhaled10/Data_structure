#include "Stack.h"


void CreateStack (Stack *ps){
    ps->top=0;

}
void ClearStack(Stack*ps)
{
    ps->top=0;
}

void Push( StackEntry e,Stack *ps)
{
    ps->entry[ps->top]=e;
    ps->top++;

}
int StackTop(StackEntry *pe, Stack *ps){
    *pe = ps->entry[ps->top-1];
    //Pop(pe,ps);//pop takes a pointer to the element and a pointer to the stack;
    //Push (*pe,ps); //takes the element itself and a pointer to the stack;
 return ps->top;
}
int StackFull(Stack *ps)
{
    if(ps->top== MAX)
        return 1;
    else
        return 0;
}



int StackEmpty(Stack *ps)
{
    if (ps->top==0)
        return 1;
    else
        return 0;
}
void Pop(StackEntry *pe,Stack *ps)
{

    *pe=ps->entry[ps->top];
    ps->top--;
}
int StackSize(Stack *ps)
{
    return ps->top;
}
void TraverseStack(Stack* ps, void(*pf)(StackEntry))
{
    for (int i = ps->top;i > 0;i--)
    {
        (*pf)(ps->entry[i - 1]);
    }
}


