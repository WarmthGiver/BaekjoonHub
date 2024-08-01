#include <algorithm>

#include <set>

#include <vector>

using namespace std;

struct Node_Data
{
    int index, x, y;

    bool operator < (const Node_Data& data)
    {
        if (y == data.y)
        {
            return x > data.x;
        }

        return y < data.y;
    }
};

class Node
{
    friend class Tree;

    Node_Data data;

    Node* left = NULL;

    Node* right = NULL;

    Node(Node_Data data)
    {
        this->data = data;
    }

    ~Node()
    {
        if (left != NULL)
        {
            delete left;
        }

        if (right != NULL)
        {
            delete right;
        }
    }

    void push(Node* node)
    {
        if (node->data.x < data.x)
        {
            if (left == NULL)
            {
                left = node;
            }

            else
            {
                left->push(node);
            }
        }

        else
        {
            if (right == NULL)
            {
                right = node;
            }

            else
            {
                right->push(node);
            }
        }
    }

    void preorder(vector<int>& result)
    {
        result.push_back(data.index);

        if (left != NULL)
        {
            left->preorder(result);
        }

        if (right != NULL)
        {
            right->preorder(result);
        }
    }

    void postorder(vector<int>& result)
    {
        if (left != NULL)
        {
            left->postorder(result);
        }

        if (right != NULL)
        {
            right->postorder(result);
        }

        result.push_back(data.index);
    }
};

class Tree
{
private:

    vector<Node_Data> nodes;

    Node* root = NULL;

public:

    Tree(int size)
    {
        nodes.reserve(size);
    }

    ~Tree()
    {
        delete root;
    }

    void push(Node_Data data)
    {
        nodes.push_back(data);
    }

    void extend()
    {
        sort(nodes.begin(), nodes.end());

        int i(nodes.size());

        delete root;

        root = new Node(nodes[--i]);

        while (i)
        {
            root->push(new Node(nodes[--i]));
        }
    }

    void preorder(vector<int>& result)
    {
        if (root != NULL)
        {
            root->preorder(result);
        }
    }

    void postorder(vector<int>& result)
    {
        if (root != NULL)
        {
            root->postorder(result);
        }
    }
};

vector<vector<int>> solution(vector<vector<int>> nodeinfo)
{
    vector<vector<int>> answer(2);

    int nodeinfo_size(nodeinfo.size());

    Tree* tree = new Tree(nodeinfo_size);

    for (int i(nodeinfo_size); --i >= 0 ;)
    {
        tree->push({ i + 1, nodeinfo[i][0], nodeinfo[i][1] });
    }

    tree->extend();

    tree->preorder(answer[0]);

    tree->postorder(answer[1]);

    delete tree;

    return answer;
}