#include <stdio.h>

int main()
{
  printf("Starting array cheat sheet...\n");

  int array2d[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

  printf("\nAccess row 1 column 2:\n");
  printf("\tarray2d[1][2] = %d\n", array2d[1][2]);

  printf("\nAddresses of individual elements:\n");
  printf("\t&array2d[0][0] = %p\n", &array2d[0][0]);
  printf("\t&array2d[0][1] = %p\n", &array2d[0][1]);
  printf("\t&array2d[0][2] = %p\n", &array2d[0][2]);
  printf("\t&array2d[0][3] = %p\n", &array2d[0][3]);
  printf("\t&array2d[1][0] = %p\n", &array2d[1][0]);
  printf("\t&array2d[2][0] = %p\n", &array2d[2][0]);

  printf("\nIncrementing the array name gives you pointers to ");
  printf("subsequent rows (the types here are pointers to arrays ");
  printf("of 4 integers):\n");
  printf("\tarray2d     = %p\n", array2d);
  printf("\tarray2d + 1 = %p\n", array2d + 1);
  printf("\tarray2d + 2 = %p\n", array2d + 2);

  printf("\nDereferencing the array name gives you the same pointers, ");
  printf("but now the type is a pointer to an int (int*):\n");
  printf("\t*array2d       = %p\n", *array2d);
  printf("\t*(array2d + 1) = %p\n", *(array2d + 1));
  printf("\t*(array2d + 2) = %p\n", *(array2d + 2));

  printf("\nDouble-dereferencing the array name:\n");
  printf("\t**array2d       = %d\n", **array2d);
  printf("\t**(array2d + 1) = %d\n", **(array2d + 1));
  printf("\t**(array2d + 2) = %d\n", **(array2d + 2));

  printf("\nUsing dereferenced, incremented array names to ");
  printf("get pointers to each element in a row:\n");
  printf("\t*(array2d + 2)     = %p\n", *(array2d + 2));
  printf("\t*(array2d + 2) + 1 = %p\n", *(array2d + 2) + 1);
  printf("\t*(array2d + 2) + 2 = %p\n", *(array2d + 2) + 2);
  printf("\t*(array2d + 2) + 3 = %p\n", *(array2d + 2) + 3);

  printf("\nThose pointers can be dereferenced:\n");
  printf("\t*(*(array2d + 2))     = %d\n", *(*(array2d + 2)));
  printf("\t*(*(array2d + 2) + 1) = %d\n", *(*(array2d + 2) + 1));
  printf("\t*(*(array2d + 2) + 2) = %d\n", *(*(array2d + 2) + 2));
  printf("\t*(*(array2d + 2) + 3) = %d\n", *(*(array2d + 2) + 3));
  
  printf("\n\nArray cheat sheet done.\n");
    
  return 0;
}
