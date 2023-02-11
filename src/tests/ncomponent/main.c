#include <assert.h>
#include <stdio.h>
#include "../../lib/ncomponent/ncomponent.h"

void test_component_create(){
  Component component = component_new(position_default());
  assert(component.position.x == 0 && component.position.y == 0);
  printf("Test %s passed\n", "test_component_create");
}

void test_empty_component_tree(){
  ComponentTree ct = component_tree_empty();
  assert(ct->child_nodes == NULL);
  printf("Test %s passed\n", "test_empty_component_tree");
}

int main(){
  test_component_create();
  test_empty_component_tree();
}