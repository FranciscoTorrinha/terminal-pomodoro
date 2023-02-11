#include "ncomponent.h"
#include <uuid/uuid.h>
#include <stdlib.h>

Position position_new(unsigned int x, unsigned int y){
  return (Position) {
    .x = x,
    .y = y
  };
}


Position position_default(){
  return (Position) {
    .x = 0,
    .y = 0
  };
}

ComponentID component_id_new(){
  ComponentID id;
  uuid_generate_random(id.id);
  return id;
}

Component component_new(Position position){
  ComponentID id = component_id_new();

  return (Component){
    .id = id,
    .position = position
  };
}

ComponentTree component_tree_empty(){
  ComponentTree final = malloc(sizeof(struct ComponentNode));
  final->base = component_new(position_default());
  final->child_nodes = NULL;

  return final;  
 }