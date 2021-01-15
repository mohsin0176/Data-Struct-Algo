list<char>getPostfixCharList(string s)
{
    stack<char>stack;
    list<char>list;
    for(int i=0;i<s.length();i++)
    {
        char c=s.at(i);
        if(isdigit(c))
        {
            list.push_back(c);
        }
        else
        {
            if(!stack.empty())
            {
                while(!stack.empty()&&priority(c,stack.top()))
                {


                    if(judgeAngle(c,stack.top()))
                {
                    stack.pop();
                    break;
                }
                list.push_back(stack.top());
                stack.pop();
            }
            if(c !=CLOSE_ANGLE)
            {
                stack.push(c);
            }
        }
    else
    {
        stack.push(c);
    }
    }
    }
    while(!stack.empty())
    {
        list.push_back(stack.top());
        stack.pop();
    }
    return list;
    }
