int main(){
    create();
    while(TRUE){
    int n,item,loc=0;
    printf("\n\tDOUBLE LINKED LIST MENU\n");
    printf("1> INSERT MENU 2> DELETE MENU 3> DISPLAY FORWARD 4> DISPLAY BACKWARD 5>COUNT 6>SEARCH 7>REVERSE .... 10> EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    printf("\n");
    switch(n){
        case 1: printf("\nINSERTION MENU\n");
        printf("1> INSERT AT BEGINNING 2> INSERT AT END 3>INSERT AT POSITION\n");
        printf("Enter your choice :");
        scanf("%d",&n);
        switch (n){
            case 1: printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_head(item);
        break;
            case 2: 
        printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_end(item);
        break;
            case 3: 
        printf("Enter node location: ");
        scanf("%d",&loc);
        printf("Enter item to insert: ");
        scanf("%d",&item);
        insert_pos(loc,item);
        break;  
        default: printf("Wrong Input\n");
        break;
        }
        case 2: printf("\nDELETION MENU\n");
        printf("1> DELETE AT BEGINNING 2> DELETE AT END 3>DELETE AT POSITION 4> DELETE ITEM\n");
        printf("Enter your choice :");
        scanf("%d",&n);
        switch (n){
            case 1: delete_head();
        break;
            case 2: 
        delete_end();
        break;
            case 3: 
        printf("Enter node location: ");
        scanf("%d",&loc);
        delete_bet(loc);
        break;  
            case 4: 
        printf("Enter item: ");
        scanf("%d",&item);
        delete(item);
        break;  
        default: printf("Wrong Input\n");
        break;
        }
        case 3: display(1);
        break;
        case 4: display(2);
        break;
        case 5: printf("Number of nodes = %d\n",count());
        break;
        case 6: 
        printf("Enter item to search: ");
        scanf("%d",&item);
        search(item);
        break;
        case 10: 
        printf("EXITTING>>>\n");
        exit(0);
        default: printf("WRONG INPUT, TRY AGAIN\n");
    }
    }
}