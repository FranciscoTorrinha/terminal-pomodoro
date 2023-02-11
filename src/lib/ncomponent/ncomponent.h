#pragma once

#include <uuid/uuid.h>

typedef struct Position{
  unsigned int x;
  unsigned int y;
}Position;

Position position_new(unsigned int x, unsigned int y);
Position position_default();

typedef struct ComponentID {
  uuid_t id; 
}ComponentID;

ComponentID component_id_new();

typedef struct Component {
  ComponentID id;
  Position position;
}Component;

Component component_new(Position position);

typedef struct ComponentNode{
  Component base;
  struct ComponentNode *child_nodes;
  
}*ComponentTree;

ComponentTree component_tree_empty();

void component_tree_add(ComponentTree tree, Component *c);
void component_tree_remove(ComponentTree tree, ComponentID id);

Component *component_tree_seacrh(ComponentID id);