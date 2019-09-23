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
    cout << endl
         << BST<int>::heightOfTree(tree.getRoot())
         << endl
         << "\nMinimum element is "
         << BST<int>::findMin(tree.getRoot())
         << "\n\nMaximum element is "
         << BST<int>::findMax(tree.getRoot())
         << endl
         << "\nSearch for element 44\n";

    if (tree.search(44))
        cout << "Found!";
    else
        cout << "Not Found!";

    cout << "\nSearch for element 99\n";
    if (tree.search(99))
        cout << "Found!";
    else
        cout << "Not Found!";
}