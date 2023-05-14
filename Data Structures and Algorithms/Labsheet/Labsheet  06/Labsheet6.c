#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

void inorder(struct node *);
void postorder(struct node *);
void preorder(struct node *);
struct node *delete(struct node *, int);
struct node *search(struct node *, int);


int main()
{
	int choice, num;
	struct node *root = NULL;
		printf("Binary Search Tree Operations:\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Search\n");
		printf("4. Preorder\n");
		printf("5. Postorder\n");
		printf("6. Inorder\n");
		printf("7. Exit\n");
	while (1)
	{
		printf("Enter your choice:\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
				printf("Enter the number to be inserted:\n");
				scanf("%d", &num);
				root = insert(root, num);
		break;
		case 2:
				printf("Enter the number to be deleted:\n");
				scanf("%d", &num);
				root = delete(root, num);
				break;
		case 3:
				printf("Enter the number to be searched:\n");
				scanf("%d", &num);
				if (search(root, num) == NULL)
					printf("%d not found in the tree\n", num);
			else
				printf("%d found in the tree\n", num);
				break;
		case 4:
				preorder(root);
				printf("\n");
				break;
		case 5:
				postorder(root);
				printf("\n");
				break;
		case 6:
				inorder(root);
				printf("\n");
				break;
		case 7:
				exit(1);
				default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}



struct node insert(struct node *root, int data)
{
if (root == NULL)
{
root = (struct node *)malloc(sizeof(struct node));
root->data = data;
root->left = root->right = NULL;
}
else if (data <= root->data)
root->left = insert(root->left, data);
else
root->right = insert(root->right, data);

return root;
}


void inorder(struct node *root)
{
  if (root == NULL)
    return;

  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void postorder(struct node *root)
{
  if (root == NULL)
    return;

  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
}

void preorder(struct node *root)
{
  if (root == NULL)
    return;

  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}

struct node delete(struct node *root, int key)
{
  if (root == NULL)
    return root;

  if (key < root->data)
    root->left = delete(root->left, key);

  else if (key > root->data)
    root->right = delete(root->right, key);

  else
  {
    if (root->left == NULL)
    {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp = root->right;
    while (temp->left != NULL)
      temp = temp->left;

    root->data = temp->data;
    root->right = delete(root->right, temp->data);
  }
  return root;
}

struct node search(struct node *root, int key)
{
  if (root == NULL || root->data == key)
    return root;

  if (root->data < key)
    return search(root->right, key);

  return search(root->left, key);
}

