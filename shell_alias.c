struct alias_node
{
    char *str;
    char *strnew;
    struct alias_node *next;
};

struct alias_node *head = NULL;
struct alias_node *cur = NULL;

int shell_alias(char **arguments)
{
    if (arguments[1] == NULL || arguments[2] == NULL)
    {
        printf("Shell : expected arguments after \"alias\"\n");
    }
    else
    {
        int index = 3;

        char *key = arguments[1];
        char *temp = arguments[2];
        while (arguments[index] != NULL)
        {
            // temp += arguments[index];
            strcat(temp, arguments[index]);
            index++;
        }
        if (head == NULL)
        {
            // struct alias_node *temp_node = (struct alias_node*)malloc(sizeof(struct alias_node));
            // temp_node->str = temp;
            // temp_node->strnew = key;
            head = (struct alias_node *)malloc(sizeof(struct alias_node));
            head->str = (char*)malloc(0x1000);
            head->strnew = (char*)malloc(0x1000);
            strcpy(head->str,temp);
            strcpy(head->strnew,key);
            // printf("%s %s\n",temp, key);

            // head = temp_node;
            head->next = NULL;
            cur = head;
            // printf("%s %s\n",head->strnew, head->str);
            // free(temp_node);
        }
        else
        {
            struct alias_node *temp_node = (struct alias_node *)malloc(sizeof(struct alias_node));
            temp_node->str = (char*)malloc(0x1000);
            temp_node->strnew = (char*)malloc(0x1000);
            strcpy(temp_node->str,temp);
            strcpy(temp_node->strnew,key);
            // temp_node->str = temp;
            // temp_node->strnew = key;
            cur->next = temp_node;
            cur = cur->next;
            cur->next = NULL;
        }
        printf("%s is set to %s\n", key, temp);
    }
}

void check_alias(char **argurments)
{
    char *temp = argurments[0];
    struct alias_node *temp_node = head;

    while (temp_node != NULL)
    {
        // printf("checker\n");
            // printf("%s %s\n",temp_node->strnew, temp_node->str);
        if (strcmp(temp_node->strnew, temp) == 0)
        {
            argurments[0] = temp_node->str;
            return;
        }
        temp_node = temp_node->next;
    }
    return;
}