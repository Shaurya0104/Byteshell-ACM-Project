struct his_node
{
    char *history_c_command;
    struct his_node *next;
};
struct his_node *history_h = NULL;
struct his_node *history_c = NULL;

void add_history(char **arguments)
{
    if(arguments[0]==NULL){
        return ;
    }
    char *history_c_command = arguments[0];
    char * xx = " ";
    strcat(history_c_command, xx);
    // arguments[arguments]
    int index = 1;
    while (arguments[index] != NULL)
    {
        strcat(history_c_command, arguments[index]);
        strcat(history_c_command, xx);
        // printf("%s\n",arguments[index]);
        index++;
    }
    if (history_h == NULL)
    {
        history_h = (struct his_node *)malloc(sizeof(struct his_node));
        history_h->history_c_command = (char *)malloc(0x1000);
        strcpy(history_h->history_c_command, history_c_command);
        history_h->next = NULL;
        history_c = history_h;
        // printf("%sdfjl\n",history_c->history_c_command);
    }
    else
    {
        struct his_node *temp_node = (struct his_node *)malloc(sizeof(struct his_node));
        temp_node->history_c_command = (char *)malloc(0x1000);
        strcpy(temp_node->history_c_command, history_c_command);
        // temp_node->str = temp;
        // temp_node->strnew = key;
        history_c->next = temp_node;
        history_c = history_c->next;
        history_c->next = NULL;
    }
    return ;
}

int history(){
    struct his_node *temp = history_h;
    // printf("hehe\n");
    int i =1 ;
    while(temp!=NULL){
        printf("%d ",i);
        printf("%s\n", temp->history_c_command);
        i++;
        temp= temp->next;
    }
    return 1;
}