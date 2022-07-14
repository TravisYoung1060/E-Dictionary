/*
 * Created by FallenGemini on 2022/7/14.
 * 链表及相关函数
 */

#ifndef HAOJIXING_ELECTRONIC_DICTIONARY_LIST_H
#define HAOJIXING_ELECTRONIC_DICTIONARY_LIST_H

/*!
 * 记录单词，包含英文、词性与中文
 */
typedef struct word
{
    char En[50];
    char attribute[10];
    char Cn[50];
}Word;

/*!
 * 双向链表的结点，包含一个数据域，两个指针域
 */
typedef struct DoublyNode
{
    Word word;
    struct DoublyNode* prev;   //指向前缀结点
    struct DoublyNode* next;   //指向后继结点
}DoublyNode;

/*!
 * 双向链表
 */
typedef struct DoublyLinkList
{
    int length;     //头结点记录链表长度
    DoublyNode* next;
}DoublyLinkList;

/*!
 * 在链表中指定位置插入一个元素
 * @param dlList 链表头结点
 * @param pos 指定位置
 * @param word 插入的元素
 */
void InsertDoublyLinkList(DoublyLinkList* dlList, int pos, Word word);

/*!
 * 删除链表指定位置的元素
 * @param dlList 链表头结点
 * @param pos 指定位置
 */
void DeleteDoublyLinkList(DoublyLinkList* dlList, int pos);

/*!
 * 查询链表指定位置的元素
 * @param dlList 链表头结点
 * @param pos 指定位置
 */
void GetDoublyLinkListElement(DoublyLinkList* dlList, int pos);

/*!
 * 打印整个链表
 * @param dlList 链表头结点
 */
void PrintDoublyLinkList(DoublyLinkList* dlList);

/*!
 * 修改链表指定位置的元素
 * @param dlList 链表头结点
 * @param pos 指定位置
 * @param word 修改后的单词
 */
void ChangeDoublyLinkElement(DoublyLinkList* dlList, int pos, Word word);
#endif //HAOJIXING_ELECTRONIC_DICTIONARY_LIST_H
