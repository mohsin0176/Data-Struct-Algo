string convert(int num,int system)
{
    stack<string> stack;
    while(num>0)
    {
        string numstr=getNumber(num,system)
        {
            stack.push(numStr);
            num=num/system;
        }
        string output;
        while(!stack.empty())
        {
            output.append(stack.top());
            stack.pop();
        }
        return output;
    }
    string getNumber(int num,int system)
    {
        int mod=num%system;
        if(system==SYSTEM_HEX&&mod>=10)
        {
            return dic.at(mod);
        }
        else
        {
            return to_string(mod);
        }
    }
}
