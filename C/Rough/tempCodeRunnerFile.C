
scanf("%d",&a);
switch(a){
    case 1: push();
    break;
    case 2:pop();
    break;
    case 3: peep();
    break;
    case 4: exit(0);
    default:printf("WRONG INPUT\t RETRY\n");
    } } 
return 0;
}
void push(void){
if (MAX-1 == top) 
printf("STACK OVERFLOW\n");
else {
    int item;
    printf("Enter element to push\n");
    scanf("%d",&item);
stack[top] = item;
top++;
    }}
void pop(void){
if (top == 0)
    printf("STACK UNDERFLOW\n");
    else{
        printf("Popped element is %d\n",stack[top]);
        top--;
    }}
    void peep(void){
for (int i = MAX; i > top; i--)
    printf("\n--");
for (int j = 0; j >= 0; j--)