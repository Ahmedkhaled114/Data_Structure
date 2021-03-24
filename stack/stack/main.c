#include <stdio.h>
#include <stdlib.h>

#include "stack_ds.h"
unsigned int my_data ;
int main()
{
    return_status_t STATUS = RETURN_NOK ;
    STATUS = Display_data_at_stack (my_stack);
    STATUS = puch_new_data_at_stack(my_stack ,11 );
    STATUS = puch_new_data_at_stack(my_stack ,22 );
    STATUS = puch_new_data_at_stack(my_stack ,33 );
    STATUS = puch_new_data_at_stack(my_stack ,44 );
    STATUS = Display_data_at_stack (my_stack);
    printf("--------------------------------------\n");
    STATUS = pop_data_from_stack (my_stack , &my_data);
    printf ("my_data = %i \n" , my_data );
    STATUS = pop_data_from_stack (my_stack , &my_data);
    printf ("my_data = %i \n" , my_data );
    STATUS = Display_data_at_stack (my_stack);
    printf("--------------------------------------\n");
    STATUS = pop_data_from_stack (my_stack , &my_data);
    printf ("my_data = %i \n" , my_data );
    STATUS = pop_data_from_stack (my_stack , &my_data);
    printf ("my_data = %i \n" , my_data );
    STATUS = Display_data_at_stack (my_stack);
    printf("--------------------------------------\n");
    STATUS = puch_new_data_at_stack(my_stack ,11 );
    STATUS = puch_new_data_at_stack(my_stack ,22 );
    STATUS = puch_new_data_at_stack(my_stack ,33 );
    printf("--------------------------------------\n");
    STATUS = modify_data_at_stack(my_stack , 0 ,99);
    STATUS = modify_data_at_stack(my_stack , 1 ,66);
    STATUS = Display_data_at_stack (my_stack);


    return 0;
}
