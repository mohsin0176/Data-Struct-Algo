void inOrderTraversal(BiNode*biNode)
{
    if(biNode==NULL)
    {
        return;
    }
    inOrderTraversal(biNode->leftChild);
    cout<<biNode->data;
    inOrderTraversal(biNode->rightChild);
}
