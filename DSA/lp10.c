#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *llink,*rlink; 
    int info;
};
typedef struct node * NODE;
NODE getnode()
{
	NODE temp=(NODE)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
    temp->llink=NULL;
    temp->rlink=NULL;
	return temp;
}
NODE insert(NODE root, int item)
{
	NODE temp=getnode();
	temp->info=item;
	if(root==NULL)
		return temp;
	NODE cur=root,prev=NULL;
	while(cur!=NULL)
	{
		prev=cur;
		if(item==cur->info)
		{
			printf("Element already exists\n");
			return root;
		}
		if(item>cur->info)
			cur=cur->rlink;
		else	
			cur=cur->llink;
	}
	if(prev->info>item)
		prev->llink=temp;
	else
		prev->rlink=temp;
	return root;
}
void preorder(NODE root)
{
	if(root==NULL)
		return;
	printf("%d\t",root->info);
	preorder(root->llink);
	preorder(root->rlink);
}
void postorder(NODE root)
{
	if(root==NULL)
		return;
	postorder(root->llink);
	postorder(root->rlink);
	printf("%d\t",root->info);
}
void inorder(NODE root)
{
	if(root==NULL)
		return;
	inorder(root->llink);
	printf("%d\t",root->info);
	inorder(root->rlink);
}
NODE search(NODE root, int item)
{
	NODE cur=root;
	while(cur!=NULL)
	{
		if(cur->info==item)
			return cur;
		if(item>cur->info)
			cur=cur->rlink;
		else if(item<cur->info)
			cur=cur->llink;
	}
	return NULL;
}
int main()
{
	int i,ch,ele;
	NODE BST=NULL;
	printf("Enter number of elements in BST\n");
	scanf("%d",&i);
	printf("Enter the elements of BST\n");
	while(i-->0)
	{
		scanf("%d",&ele);
		BST=insert(BST,ele);
	}
	printf("1. Inorder Traversal\n2. Preorder Traversal\n3. Postorder traversal\n4. Search an element\n5. Exit\n");
	for(;;)
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Inorder\n");
				inorder(BST);
				printf("\n");
			break;
			case 2:
				printf("Preorder\n");
				preorder(BST);
				printf("\n");
			break;
			case 3:
				printf("Postorder\n");
				postorder(BST);
				printf("\n");
			break;
			case 4:
				printf("Enter element to search\n");
				scanf("%d",&ele);
				if(search(BST,ele)==NULL)
					printf("Element does not exist\n");
				else
					printf("Element exists\n");
			break;
			default:
				exit(0);
		}
	}
	return 0;
}