#include "Node.h"
#include "BST.h"

int main()
{
    BST<int> tree;

    tree.insert(55);
    tree.insert(33);
    tree.insert(11);
    tree.insert(44);
    tree.insert(22);
    tree.insert(88);

    BST<int>::inOrder(tree.getRoot());
}