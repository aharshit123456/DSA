#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Leetcode Problems

DONE
https://leetcode.com/problems/reorder-list/ DONE
https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/ DONE
https://leetcode.com/problems/rotate-list/ DONE
https://leetcode.com/problems/reverse-linked-list/ DONE
https://leetcode.com/problems/reverse-linked-list-ii/
https://leetcode.com/problems/palindrome-linked-list/
https://leetcode.com/problems/intersection-of-two-linked-lists/


PENDING

https://leetcode.com/problems/linked-list-cycle/
https://leetcode.com/problems/take-k-of-each-character-from-left-and-right
https://leetcode.com/problems/split-linked-list-in-parts/
https://leetcode.com/problems/odd-even-linked-list/description/
https://leetcode.com/problems/swap-nodes-in-pairs/
https://leetcode.com/problems/merge-two-sorted-lists/
https://leetcode.com/problems/merge-k-sorted-lists/
https://leetcode.com/problems/linked-list-cycle-ii/
https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
*/

struct ListNode
{
    int val;
    struct ListNode *next;
};

void rotate(int *nums, int numsSize, int k)
{
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    int temp = nums[0];
    for (int i = 1; i != (numsSize - 1); i++)
    {
        // nums[i + 2] = nums[i + 1];
        // nums[i + 1] = nums[i + 2];
        nums[i + 1] = temp;
        printf("%d ", nums[i]);
        temp = nums[i];
    }
    printf("\n");
    nums[0] = nums[numsSize - 1];

    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
}

struct ListNode *deleteMiddle(struct ListNode *head)
{
    // EDGE CASE
    if (head->next == NULL)
    {
        head = NULL;
        return head;
    }

    // FIND MID
    struct ListNode *slow = head->next;
    struct ListNode *fast = head->next;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        // printf("SLOW : %d FAST : %d \n", slow->val, fast->val);
        slow = slow->next;
        fast = fast->next->next;
    }

    // DELETE MID
    struct ListNode *prev = head;
    while (prev->next != slow)
    {
        prev = prev->next;
    }
    prev->next = slow->next;
    slow->next = NULL;
    slow = NULL;
    free(slow);

    return head;
}

void reorderList(struct ListNode *head)
{
    // FIND MID
    struct ListNode *slow = head->next;
    struct ListNode *fast = head->next;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        // printf("SLOW : %d FAST : %d \n", slow->val, fast->val);
        slow = slow->next;
        fast = fast->next->next;
    }

    // NEW HEAD AFTER MID
    struct ListNode *new_head = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_head->next = slow->next;
    slow->next = NULL;

    // REVERSE NEW LIST
    // REVERSE_LIST(new_head);
    struct ListNode *prev = NULL;
    struct ListNode *current = new_head->next;
    struct ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    new_head->next = prev;
    // ADD FROM NEW TO OLD AFTER EVERY NODE
    // struct ListNode *temp = head->next;
    struct ListNode *p = head->next;
    struct ListNode *q = new_head->next;

    // DISPLAY_NODES(head);
    // DISPLAY_NODES(new_head);

    while (p != NULL && q != NULL)
    {
        struct ListNode *temp1 = p->next;
        struct ListNode *temp2 = q->next;
        printf("P : %d Q : %d \n", p->val, q->val);
        p->next = q;
        q->next = temp1;
        p = temp1;
        q = temp2;
        // DISPLAY_NODES(head);
    }

    // DISPLAY_NODES(head);
}

void REVERSE_LIST(struct ListNode *head)
{
    struct ListNode *prev = NULL;
    struct ListNode *current = head->next;
    struct ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head->next = prev;
}

struct ListNode *INSERT_NEW_NODE(struct ListNode *head, int data)
{
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = data;
    head->next = new_node;
    return new_node;
}

void DISPLAY_NODES(struct ListNode *head)
{
    struct ListNode *temp = head;
    while (temp != NULL)
    {
        printf("%d \n", temp->val);
        temp = temp->next;
    }
    printf("______________\n");
}

struct ListNode *oddEvenList(struct ListNode *head)
{
    // declare odd and even tail
    struct ListNode *odd_tail = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *even_head = (struct ListNode *)malloc(sizeof(struct ListNode));

    odd_tail->next = NULL;
    even_head->next = NULL;
    odd_tail = head;
    even_head = head->next;
    struct ListNode *temp = head;
    // iterate through the list
    while (temp->next != NULL)
    {
        even_head->next = even_head->next->next;
    }

    // if odd, add to odd tail

    // if even, add to even tail

    // connect odd tail to even head

    // return head
}

struct ListNode *rotateRight(struct ListNode *head, int k)
{
    // printf("K : %d \n", k);
    // EDGE CASE
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    if (k > 100)
    {
        int count = 0;
        struct ListNode *temp = head;
        while (temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }

        k = count % k;
    }
    // printf("K : %d \n", k);

    struct ListNode *tail = head;
    while (k != 0)
    {
        struct ListNode *prev_tail = head;
        tail = head->next;
        while (tail->next != NULL)
        {
            prev_tail = prev_tail->next;
            tail = tail->next;
        }
        // printf("TAIL : %d \n", tail->val);
        // printf("PREV TAIL : %d \n", prev_tail->val);
        prev_tail->next = NULL;
        tail->next = head;
        head = tail;
        k--;
    }
    head = tail;
    return head;
}

struct ListNode *reverseList(struct ListNode *head)
{
    // EDGE CASE
    if (head == NULL)
    {
        return head;
    }
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

struct ListNode *reverseBetween(struct ListNode *head, int left, int right)
{
    printf("LEFT : %d RIGHT : %d \n", left, right); // 2 4
    // EDGE CASE
    if (head == NULL)
    {
        return head;
    }
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *next = NULL;

    prev = head;
    for (int i = 0; i < left - 1; i++)
    {
        // printf("PREV : %d \n", prev->val);
        prev = prev->next;
    }
    printf("PREV : %d \n", prev->val);
    current = prev->next;

    for (int i = 0; i < right - left; i++)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    DISPLAY_NODES(prev);
    return head;
}

bool isPalindrome(struct ListNode *head)
{

    // EDGE CASE
    if (head->next == NULL)
    {
        return true;
    }

    if (head->next->next == NULL)
    {
        if (head->val == head->next->val)
        {
            return true;
        }
        return false;
    }

    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->next = head;

    int count = 0;
    struct ListNode *temp2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp2->next = head;
    while (temp2->next != NULL)
    {
        count += 1;
        temp2 = temp2->next;
    }

    // printf("COUNT : %d \n", count);
    // temp->next = head;
    // FIND MID
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        // printf("SLOW : %d FAST : %d \n", slow->val, fast->val);
        slow = slow->next;
        fast = fast->next->next;
    }

    // NEW HEAD AFTER MID
    struct ListNode *new_head = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_head->next = slow->next;
    slow->next = NULL;

    // REVERSE NEW LIST
    // REVERSE_LIST(new_head);
    struct ListNode *prev = NULL;
    struct ListNode *current = new_head->next;
    struct ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    new_head->next = prev;

    // DISPLAY_NODES(new_head);
    // DISPLAY_NODES(head);

    // COMPARE
    head = temp->next;
    if (count % 2 != 0)
    {
        while (head->next != NULL && new_head->next != NULL)
        {
            // printf("HEAD : %d NEW HEAD : %d \n", head->val, new_head->next->val);
            if (head->val != new_head->next->val)
            {
                return false;
            }
            head = head->next;
            new_head = new_head->next;
        }
    }
    else
    {
        while (head != NULL && new_head != NULL)
        {
            printf("HEAD : %d NEW HEAD : %d \n", head->val, new_head->next->val);
            if (head->val != new_head->next->val)
            {
                return false;
            }
            head = head->next;
            new_head = new_head->next;
        }
    }
    return true;
}

bool isPalindrome2(struct ListNode *head)
{

    // EDGE CASE
    if (head->next == NULL)
    {
        return true;
    }

    if (head->next->next == NULL)
    {
        if (head->val == head->next->val)
        {
            return true;
        }
        return false;
    }

    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->next = head;

    int count = 0;
    struct ListNode *temp2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp2->next = head;
    while (temp2->next != NULL)
    {
        count += 1;
        temp2 = temp2->next;
    }

    // printf("COUNT : %d \n", count);
    // temp->next = head;
    // FIND MID
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        // printf("SLOW : %d FAST : %d \n", slow->val, fast->val);
        slow = slow->next;
        fast = fast->next->next;
    }

    // NEW HEAD AFTER MID
    struct ListNode *new_head = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_head->next = slow->next;
    slow->next = NULL;

    // REVERSE NEW LIST
    // REVERSE_LIST(new_head);
    struct ListNode *prev = NULL;
    struct ListNode *current = new_head->next;
    struct ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    new_head->next = prev;

    // DISPLAY_NODES(new_head);
    // DISPLAY_NODES(head);

    // COMPARE
    head = temp->next;
    if (count % 2 != 0)
    {
        while (head->next != NULL && new_head->next != NULL)
        {
            // printf("HEAD : %d NEW HEAD : %d \n", head->val, new_head->next->val);
            if (head->val != new_head->next->val)
            {
                return false;
            }
            head = head->next;
            new_head = new_head->next;
        }
    }
    else
    {
        while (head != NULL && new_head != NULL)
        {
            printf("HEAD : %d NEW HEAD : %d \n", head->val, new_head->next->val);
            if (head->val != new_head->next->val)
            {
                return false;
            }
            head = head->next;
            new_head = new_head->next;
        }
    }
    return true;
}

int main()
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    // head->val = NULL;
    head->val = 1;
    struct ListNode *n1 = INSERT_NEW_NODE(head, 1);
    struct ListNode *n2 = INSERT_NEW_NODE(n1, 2);
    struct ListNode *n3 = INSERT_NEW_NODE(n2, 1);
    // struct ListNode *n4 = INSERT_NEW_NODE(n3, 3);
    // n4->next = NULL;
    // struct ListNode *n5 = INSERT_NEW_NODE(n4, 2);
    // struct ListNode *n6 = INSERT_NEW_NODE(n5, 1);

    // DISPLAY_NODES(head);
    // struct ListNode *middle = deleteMiddle(head);
    // printf("MIDDLE NODE IS : %d \n", middle->val);

    // struct ListNode *n7 = INSERT_NEW_NODE(n6, 7);
    // struct ListNode *middle2 = deleteMiddle(head);
    // printf("MIDDLE NODE IS : %d \n", middle2->val);
    // DISPLAY_NODES(head);
    // REVERSE_LIST(head);
    // DISPLAY_NODES(head);
    // reorderList(head);
    DISPLAY_NODES(head);
    // struct ListNode *new = rotateRight(head, 200);
    // DISPLAY_NODES(new);

    // head = reverseBetween(head, 2, 4);
    // int nums[] = {1, 2, 3, 4, 5, 6, 7};
    // int numsSize = sizeof(nums) / sizeof(nums[0]);
    // rotate(nums, numsSize, 3);
    // DISPLAY_NODES(head);

    isPalindrome(head) ? printf("TRUE \n") : printf("FALSE \n");

    return 0;
}
