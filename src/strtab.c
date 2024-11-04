#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
#include<../src/strtab.h>

/* You should use a linear linklist to keep track of all parameters passed to a function. The working_list_head should point to the beginning of the linklist and working_list_end should point to the end. Whenever a parameter is passed to a function, that node should also be added in this list. */
param *working_list_head = NULL;
param *working_list_end = NULL;

table_node* current_scope = NULL; // A global variable that should point to the symbol table node in the scope tree as discussed in lecture 13 and 14.

void print_sym_tab() {
  printf("TODO: define print_sym_tab()\n");
}

/* TODO: Define remaining functions from strtab.h. */