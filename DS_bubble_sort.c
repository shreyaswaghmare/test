#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int a;
    struct list *next;
}LIST;

LIST *head;
print_list()
{
    LIST *temp;
    temp = head;
    printf("\nList elements are:");
    while (temp) {
        printf("\t%d",temp->a);
        temp = temp->next;
    }
    printf("\n");
}

insert_list(int num)
{
    LIST *temp;
    temp = (LIST *)malloc (sizeof(LIST));
    temp->a = num;
    temp->next = head;
    head = temp;
}

append_list(int num)
{
    if (head == NULL) {
        printf ("\nEmpty list, cannot append");
        return -1;
    }
    LIST *temp, *temp1;
    temp = (LIST *)malloc (sizeof(LIST));
    temp->a = num;
    temp->next = NULL;
    
    temp1 = head;
    while(temp1->next != NULL) {
        temp1 = temp1->next;
    }
    temp1->next = temp;    
}
    
delete_list(int num)
{
    LIST *temp, *prev;
    temp = prev = head;
    
    while(temp != NULL) {
        if (temp->a == num) {
            if (temp == head) {
                head = head->next;
            }
            prev->next = temp->next;
            free(temp);
            return 0;
        }
        prev = temp;
        temp = temp->next;
    }
    
    printf("\nElement %d does not exist in list\n",num);
    return -1;
    
}

void swap(int *a, int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}

void bubble_sort(void)
{
    // bubble sort the list.
    int flag = 0;
    LIST *temp = head;
    while(temp->next != NULL) {
        if(temp->a > temp->next->a) {
            swap(&(temp->a), &(temp->next->a));
            flag = 1;
        }
        temp = temp->next;
    }
    if(flag == 1){
        print_list();
        bubble_sort();
    }
}
main()
{
   insert_list(10);
   insert_list(20);
   append_list(30);
   print_list();
   delete_list(100);
   delete_list(30);
   print_list();
   delete_list(20);
   print_list();
   delete_list(10);
   print_list();
   delete_list(10);
   insert_list(1000);
   append_list(10);
   append_list(15);
   append_list(900);
   append_list(900);
   append_list(30);
   append_list(700);
   append_list(355);
   print_list();

   bubble_sort();
   print_list();
}

