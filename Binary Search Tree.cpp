#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *Left;
    node *Right;
};

class BST
{
public:
    node *root;

    BST()
    {
        root = NULL;
    }

    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    void BFS()
    {
        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            int l = -1, r = -1;
            if (a->Left != NULL)
            {
                l = a->Left->value;
                q.push(a->Left);
            }

            if (a->Right != NULL)
            {
                r = a->Right->value;
                q.push(a->Right);
            }

            cout << "Node value = " << a->value << " Left Child = " << l;
            cout << " Right Child = " << r << "\n";
        }
    }

    void Insert(int value)
    {
        node *newnode = CreateNewNode(value);

        if (root == NULL)
        {
            root = newnode;
            return;
        }
        node *cur = root;
        node *prv = NULL;
        while (cur != NULL)
        {
            if (newnode->value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else
            {
                prv = cur;
                cur = cur->Left;
            }
        }
        if (newnode->value > prv->value)
        {
            prv->Right = newnode;
        }
        else
            prv->Left = newnode;
    }

    bool Search(int value)
    {
        node *cur = root;
        while (cur != NULL)
        {
            if (value > cur->value)
            {
                cur = cur->Right;
            }
            else if (value < cur->value)
            {
                cur = cur->Left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    void Delete(int value)
    {
        node *cur = root;
        node *prv = NULL;

        while (cur != NULL)
        {
            if (value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else if (value < cur->value)
            {
                prv = cur;
                cur = cur->Left;
            }
            else
                break;
        }

        if (cur == NULL)
        {
            cout << "Value is not Present" << endl;
            return;
        }

        // case 1 : Both child in NULL
        if (cur->Left==NULL && cur->Right == NULL)
        {
            if (prv->Left!=NULL && prv->Left->value == cur->value)
            {
                prv->Left = NULL;
            }
            else
            {
                prv->Right = NULL;
            }
            delete cur;
            return;
        }

        // case 2 : node has only one child
        if (cur->Left == NULL && cur->Right != NULL)
        {
            if (prv->Left!=NULL && prv->Left->value == cur->value)
            {
                prv->Left = cur->Right;
            }
            else
            {
                prv->Right = cur->Right;
            }
            delete cur;
            return ;
        }

        if (cur->Left != NULL && cur->Right == NULL)
        {
            if (prv->Left!=NULL && prv->Left->value == cur->value)
            {
                prv->Left = cur->Left;
            }
            else
            {
                prv->Right = cur->Left;
            }
            delete cur;
            return ;
        }

        //Case 3: Node has two Child
        node *tmp = cur ->Right;
        while(tmp->Left != NULL)
        {
            tmp = tmp->Left;
        }
        int saved = tmp ->value;
        Delete(saved);
        cur->value = saved;
    }
};

int main()
{
    BST bst;
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);

    bst.Delete(8);
    bst.BFS();

    cout << bst.Search(1) << endl;

    cout << bst.Search(7) << endl;

    return 0;
}