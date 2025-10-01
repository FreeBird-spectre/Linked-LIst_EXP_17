🧵 Linked List Basics in C++

This repository contains simple and clear C++ implementations of singly linked list concepts. It is designed for beginners who want to understand how nodes and links work in dynamic memory using classes and pointers.

📌 Contents

Node: Basic node creation and output

Link: Linked list with head insertion

Display: Display function for linked list

Multiple examples with output

📂 Files and Description

1. node_basic.cpp

Creates a single node and prints its value and next pointer.

cpp

Node* n1 = new Node(5);

cout << "Node value: " << n1->val << endl;

cout << "Next value: " << n1->next << endl;

Output:

Code

Node value: 5

Next value: 0

2. linked_list_insert_head.cpp
   
Implements a linked list with insertion at the head and displays the list after each insertion.

cpp

insert_head(head, 30);

disp(head);

insert_head(head, 32);

disp(head);

insert_head(head, 35);

disp(head);

Output:

Code

30 -> NULL

32 -> 30 -> NULL

35 -> 32 -> 30 -> NULL

3. single_link_node.cpp
   
Creates a single link node and prints its data and next pointer.

cpp

Link* l1 = new Link(9);

cout << l1->data << " " << l1->next;

Output:

Code

9 0

🎯 Purpose

This project is aimed at helping new programmers understand:

How dynamic memory allocation works in C++

How to build and traverse linked lists

How pointers and classes interact
