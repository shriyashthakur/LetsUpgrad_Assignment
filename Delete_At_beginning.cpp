//Logic to delete at beginning Circular Link list
void beg_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW\n");      
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nNode Deleted\n");   
    }  
      
    else  
    {     
        ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nNode Deleted\n");   
    }  
}  

