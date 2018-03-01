/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include "general.h"

struct CaravanImplementation {
    struct Node* head;
    int length = 0;
};

Caravan new_caravan()
{
  struct CaravanImplementation* list;
  list = (struct CaravanImplementation*)malloc(sizeof(struct CaravanImplementation));
  return list;
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  sfree(caravan);
}


void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(caravan != 0)
  {
    caravan->head = (struct Node*)malloc(sizeof(struct Node));
    caravan->head->data = animal;
    caravan->length++;
  }

}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
void optimize_load(Caravan caravan)
{
}
