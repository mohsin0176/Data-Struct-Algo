void postOrderTraversal(BiNode* biNode)
{
    if(biNode==NULL)
    {
        return;
    }

    postOrderTraversal()->(biNode->leftChild);
    postOrderTraversal()->(biNode->rightChild);
    cout<<biNode->data;
}

