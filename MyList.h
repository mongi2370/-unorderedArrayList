#pragma once

typedef  char* DataType;

struct node 
{ DataType data;
  node* next;
};
//202002370
//mndzebele mongi

typedef  node*  List;
           
void Init  (List&);
bool IsEmpty (List );
void  Insert (DataType, List&);
void  Delete (DataType, List&); 
void  ShowData (List);
