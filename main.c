/*
 * �������
 */

#include <stdio.h>
#include <malloc.h>
#include "List.h"

int main() {
    DoublyNode* WordListTail = (DoublyNode*)malloc(sizeof (DoublyNode));

/*!
 * ˫��������ͷ���
 */
    DoublyLinkList* WordListHead = (DoublyLinkList*)malloc(sizeof(DoublyLinkList));
    WordListHead->length = 1;
    WordListHead->next = WordListTail;

    printf("��������\n");
    Word word1 = {"abandon","v.","����"};
    Word word2 = {"abstract","adj.","�����"};
    Word word3 = {"absent","adj.","ȱϯ��"};

    InsertDoublyLinkList(WordListHead,1,word1);
    PrintDoublyLinkList(WordListHead);

    InsertDoublyLinkList(WordListHead,1,word2);
    PrintDoublyLinkList(WordListHead);

    DeleteDoublyLinkList(WordListHead,2);
    PrintDoublyLinkList(WordListHead);

    InsertDoublyLinkList(WordListHead,1,word3);
    GetDoublyLinkListElement(WordListHead,1);
    PrintDoublyLinkList(WordListHead);

    InsertDoublyLinkList(WordListHead,2,word2);
    PrintDoublyLinkList(WordListHead);

    ChangeDoublyLinkElement(WordListHead,2,word1);
    PrintDoublyLinkList(WordListHead);

    return 0;
}