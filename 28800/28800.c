//28800 �ܾ��� ����ü�� �����Ҵ� �ٷ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct _worditem {
    char* word; 
    int wtype;   // 0 noun, 1 verb, 2 adjective
}worditem;

typedef struct _itemlist {
    int numWords;  // ��ü �ܾ� ��
    worditem** theList;
}itemlist;
//�ܾ� �ϳ��� �����͸� ����� �Լ�
worditem* getWordItem() {
    worditem* p;
    char wordbuf[100];
    p = (worditem*)malloc(sizeof(worditem));
    scanf("%s", wordbuf);
    //p->word = (char*)malloc(strlen(wordbuf) + 1);
    //strcpy(p->word, wordbuf);
    p->word = _strdup(wordbuf);
    scanf("%d", &p->wtype);
    return p;
}
//getworditem�� ȣ���� �ܾ��� ����Ʈ�� ����� �Լ�
itemlist* getWordList() {
    itemlist* p;
    p = (itemlist*)malloc(sizeof(itemlist));
    scanf("%d", &p->numWords);
    p->theList = (worditem**)malloc(sizeof(worditem*) * p->numWords);
    for (int i = 0; i < p->numWords; i++) {
        p->theList[i] = getWordItem();
    }
    return p;
}

void printAll(itemlist* p) {
    for (int i = 0; i < p->numWords; i++) {
        printf("%s %d\n", p->theList[i]->word, p->theList[i]->wtype);
    }
}

int main() {
    itemlist* myList;
    myList = getWordList(); 
    printAll(myList);
    return 0;
}
