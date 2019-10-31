#include<stdio.h>  
#include<stdlib.h>  
void insert(int);  
struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
};  
struct node *root;  
void main ()  
{  
    int choice,element;  
    do   
    {  
        printf("\nEnter the element which you want to insert\n");  
        scanf("%d",&element);  
        insert(item);  
        printf("\n Press 0 to insert more elements \n");  
        scanf("%d",&choice);  
    }while(choice == 0);  
}  
void insert(int element)  
{  
    struct node *temp, *p , *crrnt;  
    temp = (struct node *) malloc(sizeof (struct node));  
    if(temp == NULL)  
    {  
        printf("can't insert");  
    }  
    else   
    {  
    temp -> data = element;  
    temp -> left = NULL;  
    temp -> right = NULL;   
    if(root == NULL)  
    {  
        root = temp;  
        root -> left = NULL;  
        root -> right = NULL;  
    }  
    else   
    {  
        p = NULL;  
        crrnt = root;   
        while(crrnt)  
        {  
            p = crrnt;   
            if(element < crrnt->data)  
            {  
                crrnt = crrnt -> left;   
            }   
            else   
            {  
                crrnt = crrnt -> right;  
            }  
        }  
        if(element < p -> data)  
        {  
            p -> left = temp;   
        }  
        else   
        {  
            p -> right = temp;   
        }  
    }  
    printf("Node Inserted");  
    }  
}  
