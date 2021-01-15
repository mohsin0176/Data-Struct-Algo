void path(Path paths[][MAX])
{
    copyArray(paths);
    int rowCount=MAX;
    stack<Path>stack;
    Path curPos;
    Path path;
    int curStep=0;
    curPos=this->mPaths[1][1];
    path=curPos;
    do
    {
        if(canPass(paths,curPos.posX,curPos.posY))
        {
            this->mPaths[curPos.posX]
            [curPos.posY].hasPassBy=true;
            stack.push(curPos);
            curStep++;
            if(curPos.posX==rowCount-2&&curPos.posY==rowCount-2)
            {
                cout<<"Find Exit!"<<endl;
                return;
            }
            curPos=getNext(curPos.posX,curPos.posY,curPos.di);

        }
        else(!stack.empty())
        {
            path=stack.top();
            stack.pop();
            curStep--;
            while(path.di==3&&!stack.empty())
            {
                this->mPath[path.posX][path.posY].hasPassBy=true;
                path=stack.top();
                stack.pop();
                curStep--;
            }
            if(path.di<3)
            {
                path.di++;
                stack.push(path);
                curStep++;
                curPos=getNext(path.posX,path.posY,path.di);
            }
        }
    }

} while(!stack.empty());
cout<<"There is no route to exit"<<endl;
}
bool canPass(Path paths[][MAX],int x,int y)
{
    Path path=this->mPaths[x][y];
    return path.canPass&&!path.hasPassBy;
}
Path getNext(int x,int y,int di)
{
    int posX=x;
    int posY=y;
    if(di==0)
    {
        posY+=1;
    }
    else if(di==1)
    {
        posX+=1;
    }
    else if(di==2)
    {
        posY-=1;
    }
    else if(di==3)
    {
        posX-=1;
    }
    return this->mPaths[posX][posY];
}
