typedef int StDataType;

typedef struct Stack
{
	StDataType* a;
	int top;
	int capacity;
}Stack;
//栈的初始化：
void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = (StDataType*)malloc(sizeof(StDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc error");
		return;
	}
	ps->top = 0;
	ps->capacity = 4;
}
//进行压栈
void StackPush(Stack* ps, StDataType data)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		StDataType* tep = (StDataType*)realloc(ps->a, sizeof(StDataType) * ps->capacity * 2);
		if (ps->a == NULL)
		{
			perror("realloc error");
			return;
		}
		ps->a = tep;
		ps->capacity *= 2;
	}
	ps->a[ps->top] = data;
	ps->top++;
}
//判断栈是否为空：
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}
//进行出栈
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}
//返回栈顶的元素
StDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}
//返回栈里面的元素
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}
//销毁栈
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}


typedef struct {
	Stack q1;
	Stack q2;
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* qst = (MyQueue*)malloc(sizeof(MyQueue));
	if (qst == NULL)
	{
		perror(" malloc error");
		return NULL;
	}
	StackInit(&qst->q1);
	StackInit(&qst->q2);
	return qst;
}

void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->q1, x);
}

int myQueuePop(MyQueue* obj) {
	if (StackEmpty(&obj->q2))
	{
		while (!StackEmpty(&obj->q1))
		{
			StackPush(&obj->q2, StackTop(&obj->q1));
			StackPop(&obj->q1);
		}
	}
	int head = StackTop(&obj->q2);
	StackPop(&obj->q2);
	return head;
}

int myQueuePeek(MyQueue* obj) {
	if (StackEmpty(&obj->q2))
	{
		while (!StackEmpty(&obj->q1))
		{
			StackPush(&obj->q2, StackTop(&obj->q1));
			StackPop(&obj->q1);
		}
	}
	return StackTop(&obj->q2);
}

bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->q1) && StackEmpty(&obj->q2);
}

void myQueueFree(MyQueue* obj) {
	StackDestroy(&obj->q1);
	StackDestroy(&obj->q2);
	free(obj);
}