void preOrderTraversal(BiNode* biNode)
{
    if(biNode==NULL)
    {
        return;
    }
    cout<<biNode->data;
    preOrderTraversal->(biNode->leftChild);
    preOrderTraversal->(biNode->rightChild);
}
