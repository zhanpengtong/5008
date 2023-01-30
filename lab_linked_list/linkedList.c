// Modify this file
// compile with: gcc linkedlist.c -o linkedlist.out

#include <stdio.h>
#include <stdlib.h> // contains the functions free/malloc

// TODO: Create your node_t type here

// TODO: Write your functions here
// There should be 1.) create_list 2.) print_list 3.) free_list
// You may create as many helper functions as you like.

// node defined above, assume defined as node_t
typedef struct node_t{
   int num_wins;
   int year;
   struct node_t* next;
}node_t;

node_t* new_node(int wins, int year, node_t* next) {

   node_t* newNode = (node_t*) malloc(sizeof(node_t));

   newNode->num_wins = wins;
   newNode->year = year;
   newNode->next = next; 

   return newNode;
}

node_t* build_list(int* wins, int* years, int size){
   node_t* current;
   node_t* head;
   for (int i = 0; i < size; i++){
      node_t* new = new_node(wins[i], years[i], NULL);
      if (i == 0){
         head = new;
         current = new;
      }
      else{
         current->next = new;
         current = new;
      }
   }
   return head;
}

void print_list(node_t* head, int size){
   for(int i = 0; i < size; i++){
   printf("%d %d wins\n", head->year, head->num_wins);
   head = head->next;
  } 
}

int main()
{
   int test_years[5] = {2018, 2017, 2016, 2015, 2014};
   int test_wins[5] = {108, 93, 93, 78, 71};
   node_t* head = build_list(test_wins, test_years, 5);
   print_list(head, 5);

    // TODO: Implement me!

    return 0;
}