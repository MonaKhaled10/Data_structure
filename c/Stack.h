#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef int StackEntry;

typedef struct stack{
	int top;
	StackEntry entry[MAX];
} Stack;



void	Push			(StackEntry , Stack *);
void	Pop				(StackEntry *, Stack *);
int		StackEmpty		(Stack *);
int		StackFull		(Stack *);
void	CreateStack		(Stack *);
void	StackTop		(StackEntry *, Stack *);
int		StackSize		(Stack *);
void	ClearStack		(Stack *);
void	TraverseStack	(Stack *, void (*)(StackEntry));
void    Display         (StackEntry );

