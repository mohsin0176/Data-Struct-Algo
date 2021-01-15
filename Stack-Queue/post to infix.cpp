int calculate(list<char> characters)
{
    stack<int>stack;
    list<char>::iterator iterator=characters.begin();
    while(iterator!=characters.end())
    {
        char c=*iterator;
        if(isdigit(c))
        {
            stack.push(c-'0');
        }
        else
        {
            int x=stack.top();
            stack.pop();
            int y=stack.top();
            stack.pop();
            stack.push(operate(y,x,c));
        }
        iterator++;
    }
    return stack.top();
}
int operate(int x,int y,char oper)
{
    int result;
    switch(oper)
    {
    case PLUS:
        result=x+y;
        break;
    case REDUCE:
        result=x-y;
        break;
    case MUL:
        result=x*y;
        break;
    case DIV:
        result=x/y;
        break;
    default:
        break;
    }
    return result;
}
