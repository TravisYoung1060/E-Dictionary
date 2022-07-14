/*
 * 程序入口
 */

#include <stdio.h>
#include <malloc.h>
#include "List.h"
#include "admin.h"
#include "public.h"

int main() {
    DoublyNode* WordListTail = (DoublyNode*)malloc(sizeof (DoublyNode));

/*!
 * 双向链表的头结点
 */
    DoublyLinkList* WordListHead = (DoublyLinkList*)malloc(sizeof(DoublyLinkList));
    WordListHead->length = 1;
    WordListHead->next = WordListTail;

    printf("样例测试\n");
    Word word1 = {"abandon","v.","抛弃"};
    Word word2 = {"abstract","adj.","抽象的,不具体的"};
    Word word3 = {"absent","adj.","缺席的"};

    InsertDoublyLinkList(WordListHead,1,word1);
    PrintDoublyLinkList(WordListHead);

    InsertDoublyLinkList(WordListHead,1,word2);
    PrintDoublyLinkList(WordListHead);

    DeleteDoublyLinkListByPos(WordListHead,2);
    PrintDoublyLinkList(WordListHead);

    InsertDoublyLinkList(WordListHead,1,word3);
    GetDoublyLinkListElement(WordListHead,1);
    PrintDoublyLinkList(WordListHead);

    InsertDoublyLinkList(WordListHead,2,word2);
    PrintDoublyLinkList(WordListHead);

    ChangeDoublyLinkElement(WordListHead,2,word1);
    PrintDoublyLinkList(WordListHead);

    Delete(WordListHead,"abandon","v.","抛弃");
    PrintDoublyLinkList(WordListHead);

    Modify(WordListHead,1,"abandon","v.","抛弃");
    PrintDoublyLinkList(WordListHead);

    EnToCn(WordListHead,"abandon");
    CnToEn(WordListHead,"抽象的");

    InsertDoublyLinkList(WordListHead,2,word3);
    FuzzySearch(WordListHead,"abs");
    return 0;
}
