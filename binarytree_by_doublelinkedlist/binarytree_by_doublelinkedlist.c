#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc함수를 이용하기 위한 헤더 파일
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* root;

int main() {
	struct node* temp;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 1;
	temp->left = NULL;
	temp->right = NULL;
	root = temp;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 2;
	temp->left = NULL;
	temp->right = NULL;
	root->left = temp;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 3;
	temp->left = NULL;
	temp->right = NULL;
	root->right = temp;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 4;
	temp->left = NULL;
	temp->right = NULL;
	root->left->left = temp;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 5;
	temp->left = NULL;
	temp->right = NULL;
	root->left->right = temp;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 6;
	temp->left = NULL;
	temp->right = NULL;
	root->right->left = temp;

	for (int i = 0; i < 6; i++) {
		printf
	}
}