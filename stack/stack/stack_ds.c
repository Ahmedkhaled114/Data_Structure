#include "stack_ds.h"

unsigned int my_stack[ARRAY_MAX_STACK] ;

int stack_pointer = -1 ;

/**----------------------------------------------------------------------------------------------------***/
return_status_t is_stack_full (void) {

    if (stack_pointer == ARRAY_MAX_STACK-1) {return RETURN_STACK_FULL;}

    else {return RETURN_STACK_NOT_FULL;}

}
/**----------------------------------------------------------------------------------------------------***/
return_status_t is_stack_empty (void) {

    if (stack_pointer < STACK_EMPTY) {return RETURN_STACK_Empty;}

    else {return RETURN_STACK_NOT_FULL;}

}
/**----------------------------------------------------------------------------------------------------***/
return_status_t puch_new_data_at_stack (unsigned int my_stack[] , unsigned int data){

    if (is_stack_full() == RETURN_STACK_FULL) {

        printf ("Error , Stack Is Full .. Cant add This Element !! \n");
        return RETURN_NOK ;
    }

    else {

        stack_pointer++;
        my_stack[stack_pointer] = data ;
        printf("data added : %i \n" , data );
    }

        return RETURN_OK ;
}
/**----------------------------------------------------------------------------------------------------***/
return_status_t pop_data_from_stack(unsigned int my_stack[] , unsigned int *get_data){

     if (is_stack_empty () == RETURN_STACK_Empty) {

            printf ("Error , Stack Is Empty .. Cant Get This Element !! \n ");
            return RETURN_NOK ;
    }
    else {
        *get_data = my_stack[stack_pointer];
        stack_pointer--;
    }

    return RETURN_OK ;

}
/**----------------------------------------------------------------------------------------------------***/
return_status_t modify_data_at_stack(unsigned int my_stack[] , unsigned int data_pos,
                                     unsigned int new_data){


    if (is_stack_empty () == RETURN_STACK_Empty) {

            printf ("Error , Stack Is Empty .. Cant Modify This Element !! \n ");
            return RETURN_NOK ;
    }
    else if (data_pos >= stack_pointer) {

           printf ("Error , Data Position Out Of Range !! \n ");
           return RETURN_NOK ;
    }
    else {
            my_stack[data_pos] = new_data ;
            printf("data num (%i) modified to = %i \n" , data_pos ,new_data );
    }

    return RETURN_OK ;
}
/**----------------------------------------------------------------------------------------------------***/
return_status_t get_number_of_data_at_stack (unsigned int my_stack[],unsigned int *num_elems ){

     if (is_stack_empty () == RETURN_STACK_Empty) {

            printf ("Error , Stack Is Empty !! \n ");
            return RETURN_NOK ;
    }
    else {

      *num_elems = stack_pointer+1;

    }
   return RETURN_OK ;
}
/**----------------------------------------------------------------------------------------------------***/
return_status_t Display_data_at_stack (unsigned int my_stack[]){

     if (is_stack_empty () == RETURN_STACK_Empty) {

            printf ("Error , Stack Is Empty !! \n");
            return RETURN_NOK ;
    }
    else {
            printf("data : \t");
            int counter =0 ;
      for (counter = stack_pointer; counter >= STACK_FIRST_DATA ; counter -- ){

            printf("%i\t" , my_stack[counter] );

      }
      printf("\n");
    }
        return RETURN_NOK ;
}
/**----------------------------------------------------------------------------------------------------***/
