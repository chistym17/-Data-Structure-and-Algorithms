node *DeleteNode(node *head, int value){
node *tmp=head;
while(tmp!=NULL){
    if(tmp->value==value){
        if(tmp==head){
            head=head->next;
            head->prev=NULL;
            delete tmp;
            tmp=head;
        }
        else if(tmp->next==NULL){
            node *temp=tmp;
            temp->prev->next=NULL;
            delete tmp;
            tmp=temp;
        }
        else{
            node *node1=tmp;
            node1->prev->next=node1->next;
            node1->next->prev=node1->prev;
            delete tmp;
            tmp=node1;
        }
    }
    tmp=tmp->next;