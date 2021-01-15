list<PolynomialItem>add(list<PolynomialItem>itemListA,list<PolynomialItem>itemListB)
{
    list<PolynomialItem>results;
    while(!itemListA.empty()&&!itemListB.empty())
    {
        PolynomialItem itemA=itemListA.front();
        PolynomialItem itemB=itemListB.front();

    }
    if(itemA.expn<itemB.expn)
    {
        results.push_back(itemA);
        itemListA.pop_front();
    }
    else if(itemA.expn>itemB.expn)
    {
        results.push_back(itemB);
        itemListB.pop_front();
    }
    else
    {
        PolynomialItem temp;
        temp.coef=itemA.coef+itemB.coef;
        temp.expn=itemA.expn;
        if(temp.coef !=0)
        {
            temp.coef=itemA.coef+itemB.coef;
            temp.expn=itemA.expn;
            if(temp.coef!=0)
            {
                results.push_back(temp);
            }
        itemListA.pop_front();
        itemListB.pop_front();
        }

    }
}

if(!itemListA.empty())
{
    results.splice(results.begin(),itemListA);
}
else if(!itemListB.empty())
{
     results.splice(results.begin(),itemListB);
}

return results;
}
