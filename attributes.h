#ifndef HW2_ATTRIBUTES_H
#define HW2_ATTRIBUTES_H

typedef union
{
    // semantic attribute for each token- use in hw3
    int int_val;
    char* string;  // hw3: can be changed to string[MAX_STR_LEN]
    bool bool_val;
    char* id_name; // hw3: can be changed to id_name[MAX_ID_LEN]

    // semantic attributes for non terminals
    /* hw3: complete for: Exp (struct),Type, ect. */

} STYPE;

// Tell Bison to use STYPE as the stack type
#define YYSTYPE STYPE

#endif //HW2_ATTRIBUTES_H
