#include <math.h>
#include <stdio.h>
#include <stdlib.h>



// Q1---------------------------------------------------------------------------------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
 // int poe(char a[]) {
 //   int arr[100], top = -1;
 //   for (int i = 0; a[i] != '\0'; i++) {
 //     if (a[i] >= 49 && a[i] <= 57) {
 //       arr[++top] = a[i] - 48;
 //     } else if ((a[i] == '+') || (a[i] == '-') || (a[i] == '*') ||
 //                (a[i] == '/') || (a[i] == '^')) {
 //       if (top < 1) {
 //         printf("Invalid Expression");
 //         return 0;
 //       }
 //       int x = arr[top--];
 //       int y = arr[top--];
 //       if (a[i] == '+') {
 //         arr[++top] = y + x;
 //       } else if (a[i] == '-') {
 //         arr[++top] = y - x;
 //       } else if (a[i] == '/') {
 //         if (x == 0) {
 //           printf("division by 0 not possible");
 //           return 0;
 //         }
 //         arr[++top] = y / x;
 //       } else if (a[i] == '*') {
 //         arr[++top] = y * x;
 //       } else {
 //         arr[top++] = pow(y, x);
 //       }
 //     }
 //   }
 //   if (top != 0) {
 //     printf("Invalid postfix expression");
 //     return 0;
 //   } else {
 //     return arr[top];
 //   }
 // }
 // int pre(char a[], int n) {
 //   int arr[100], top = -1;
 //   for (int i = n - 1; i >= 0; i--) {
 //     if (a[i] >= '0' && a[i] <= '9') {
 //       arr[++top] = a[i] - '0';
 //     } else if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' ||
 //                a[i] == '^') {
 //       if (top < 1) {
 //         printf("Invalid Expression\n");
 //         return 0;
 //       }
 //       int y = arr[top--];
 //       int x = arr[top--];
 //       switch (a[i]) {
 //       case '+':
 //         arr[++top] = y + x;
 //         break;
 //       case '-':
 //         arr[++top] = y - x;
 //         break;
 //       case '*':
 //         arr[++top] = y * x;
 //         break;
 //       case '/':
 //         if (x == 0) {
 //           printf("Division by zero not possible\n");
 //           return 0;
 //         }
 //         arr[++top] = y / x;
 //         break;
 //       case '^':
 //         arr[++top] = (int)pow(y, x);
 //         break;
 //       default:
 //         printf("Invalid operator\n");
 //         return 0;
 //       }
 //     }
 //   }
 //   if (top != 0) {
 //     printf("Invalid prefix expression\n");
 //     return 0;
 //   } else {
 //     return arr[top];
 //   }
 // }
 // int main( ) {
 //   char s[100];
 //   printf("enter the expression:");
 //   fgets(s, sizeof(s), stdin);
 //   int b;
 //   printf("enter the 1 if postfix or 2 if prefix expression:");
 //   scanf("%d", &b);
 //   switch (b) {
 //   case 1:
 //     printf("%d", poe(s));
 //     break;
 //   case 2:
 //     printf("%d", pre(s, strlen(s) - 1));
 //   }
 //   return 0;
 // }


// Q2-------------------------------------------------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------


// int isEmpty(int front, int rear) {
//  return front == -1 || front > rear;
// }
//
// int isFull(int rear) {
//  return rear == 99;
// }
//
// void enqueue(int arr[], int *front, int *rear, int n) {
//  if (isFull(*rear)) {
//   printf("queue overflow\n");
//  } else {
//   if (*front == -1) {
//    *front = 0;
//   }
//   arr[++(*rear)] = n;
//  }
// }
//
// void dequeue(int arr[], int *front, int *rear) {
//  if (isEmpty(*front, *rear)) {
//   printf("queue underflow\n");
//  } else {
//   (*front)++;
//  }
// }
//
// void display(int arr[], int front, int rear) {
//  if (isEmpty(front, rear)) {
//   printf("queue is empty\n");
//  } else {
//   for (int i = front; i <= rear; i++) {
//    printf("%d ", arr[i]);
//   }
//   printf("\n");
//  }
// }
//
// int main(void) {
//  int queue[100];
//  int front = -1, rear = -1;
//  int c = 1;
//
//  while (c) {
//   printf("enter your choice: 0-end, 1-enqueue, 2-dequeue, 3-display: ");
//   scanf("%d", &c);
//
//   switch (c) {
//    case 0:
//     printf("ending the simulation\n");
//    break;
//    case 1:
//     printf("enter the element to be inserted: ");
//    int n;
//    scanf("%d", &n);
//    enqueue(queue, &front, &rear, n);
//    break;
//    case 2:
//     dequeue(queue, &front, &rear);
//    break;
//    case 3:
//     display(queue, front, rear);
//    break;
//    default:
//     printf("enter a correct choice\n");
//    break;
//   }
//  }
//
//  return 0;
// }



// Q3------------------------------------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------

// int isEmpty(int front, int rear) {
//  return front == -1;
// }
//
// int isFull(int front, int rear) {
//  return (rear + 1) % 100 == front;
// }
//
// void enqueue(int arr[], int *front, int *rear, int n) {
//  if (isFull(*front, *rear)) {
//   printf("Circular queue overflow\n");
//  } else {
//   if (*front == -1) {
//    *front = 0;
//   }
//   *rear = (*rear + 1) % 100;
//   arr[*rear] = n;
//  }
// }
//
// void dequeue(int arr[], int *front, int *rear) {
//  if (isEmpty(*front, *rear)) {
//   printf("Circular queue underflow\n");
//  } else {
//   printf("Dequeued element: %d\n", arr[*front]);
//   if (*front == *rear) {
//    *front = *rear = -1;
//   } else {
//    *front = (*front + 1) % 100;
//   }
//  }
// }
//
// void display(int arr[], int front, int rear) {
//  if (isEmpty(front, rear)) {
//   printf("Queue is empty\n");
//  } else {
//   int i = front;
//   while (i != rear) {
//    printf("%d ", arr[i]);
//    i = (i + 1) % 100;
//   }
//   printf("%d\n", arr[rear]);
//  }
// }
//
// int main(void) {
//  int queue[100];
//  int front = -1, rear = -1;
//  int c = 1;
//
//  while (c) {
//   printf("enter your choice: 0-end, 1-enqueue, 2-dequeue, 3-display: ");
//   scanf("%d", &c);
//
//   switch (c) {
//    case 0:
//     printf("Ending the simulation\n");
//    break;
//    case 1:
//     printf("Enter the element to be inserted: ");
//    int n;
//    scanf("%d", &n);
//    enqueue(queue, &front, &rear, n);
//    break;
//    case 2:
//     dequeue(queue, &front, &rear);
//    break;
//    case 3:
//     display(queue, front, rear);
//    break;
//    default:
//     printf("Enter a correct choice\n");
//    break;
//   }
//  }
//
//  return 0;
// }


// Q4------------------------------------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------


// void bubbleSort(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       if (arr[j] > arr[j + 1]) {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
// }
//
// int main() {
//   int n;
//   printf("enter the size of array:");
//   scanf("%d", &n);
//   int arr[n];
//   printf("enter the elements of array\n");
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
//   }
//   bubbleSort(arr, n);
//   printf("displaying the sorted array\n");
//   for (int i = 0; i < n; i++) {
//     printf("%d  ", arr[i]);
//   }
// }




// Q5------------------------------------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------


// void selectionSort(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     int minIndex = i;
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] < arr[minIndex]) {
//         minIndex = j;
//       }
//     }
//     int temp = arr[minIndex];
//     arr[minIndex] = arr[i];
//     arr[i] = temp;
//   }
// }
//
// int main() {
//   int n;
//   printf("enter the size of array: ");
//   scanf("%d", &n);
//   int arr[n];
//   printf("enter the elements of array\n");
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
//   }
//   selectionSort(arr, n);
//   printf("displaying the sorted array\n");
//   for (int i = 0; i < n; i++) {
//     printf("%d  ", arr[i]);
//   }
//
//   return 0;
// }


// Q6------------------------------------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------

// void insertionSort(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     int key = arr[i];
//     int j = i - 1;
//     while (j >= 0 && arr[j] > key) {
//       arr[j + 1] = arr[j];
//       j--;
//     }
//     arr[j + 1] = key;
//   }
// }
//
// int main() {
//   int n;
//   printf("enter the size of array: ");
//   scanf("%d", &n);
//   int arr[n];
//   printf("enter the elements of array\n");
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
//   }
//   insertionSort(arr, n);
//   printf("displaying the sorted array\n");
//   for (int i = 0; i < n; i++) {
//     printf("%d  ", arr[i]);
//   }
//
//   return 0;
// }




// Q7------------------------------------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------


// void lins(int arr[], int n, int k) {
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == k) {
//       printf("Element found at index %d\n", i);
//       return;
//     }
//   }
//   printf("element not found\n");
// }
//
// int bins(int arr[], int n, int k) {
//   if (k > arr[n - 1] || k < arr[0]) {
//     printf("element not found in the array\n");
//     return 0;
//   }
//   int s = 0, e = n - 1;
//   while (s <= e) {
//     int mid = (s + e) / 2;
//     if (arr[mid] == k) {
//       printf("element found at the index %d\n", mid);
//       return 1;
//     } else if (k > arr[mid]) {
//       s = mid + 1;
//     } else {
//       e = mid - 1;
//     }
//   }
//   printf("element not found in the array\n");
//   return 0;
// }
//
// int main() {
//   int n;
//   printf("enter the size of the array:");
//   scanf("%d", &n);
//   int arr[n];
//   printf("enter the elements\n");
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &arr[i]);
//   }
//   int c = 1;
//   int k;
//   while(c){
//     printf("enter the elemet to be searched");
//     scanf("%d", &k);
//     printf("enter the 1-linear search,2-binary search,0-end");
//     scanf("%d", &c);
//     switch (c) {
//       case 0:
//         printf("ending simulation");
//         break;
//       case 1:
//         lins(arr, n, k);
//         break;
//       case 2:
//         bins(arr, n, k);
//         break;
//       default:
//         printf("enter correct choice");
//         break;
//     }
//   }
//   return 0;
// }




//queue using stack----------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// int isEmpty(int arr[], int *top) {
//  if (*top == -1) {
//   return 1;
//  } else {
//   return 0;
//  }
// }
//
// void push(int arr[], int *top, int n) {
//  if (*top == 99) {
//   printf("overflow");
//  } else {
//   arr[++(*top)] = n;
//  }
// }
//
// void pop(int arr[], int *top) {
//  if (isEmpty(arr, top)) {
//   printf("underflow");
//  } else {
//   top--;
//  }
// }
//
// void enqueue(int arr[], int *top, int n) {
//  if (*top == 99) {
//   printf("queue overflow");
//  } else {
//   arr[++(*top)] = n;
//  }
// }
//
// void dequeue(int arr[], int *top) {
//  int arr1[100], top1 = -1;
//  while (!isEmpty(arr, top)) {
//   arr1[++top1] = arr[(*top)--];
//  }
//  top1--;
//  while (!isEmpty(arr1, &top1)) {
//   arr[++(*top)] = arr1[top1--];
//  }
// }
//
// void display(int arr[], int *top) {
//  for (int i = 0; i <= *top; i++) {
//   printf("%d ", arr[i]);
//  }
//  printf("\n");
// }
//
// int main(void) {
//  int stk1[100], top1 = -1;
//  int c = 1;
//  while (c) {
//   printf("enter your choice: "
//          "0-end,1-enqueue,2-dequeue,3-display,4-empty,5-overflow:");
//   scanf("%d", &c);
//   switch (c) {
//    case 0:
//     printf("ending the simulation");
//    break;
//    case 1: // enqueue
//     printf("enter the element to be inserted:");
//    int n;
//    scanf("%d", &n);
//    enqueue(stk1, &top1, n);
//    break;
//    case 2: // dequeue
//     if (isEmpty(stk1, &top1)) {
//      printf("queue is empty\n");
//     } else {
//      dequeue(stk1, &top1);
//     }
//    break;
//    case 3: // display
//     display(stk1, &top1);
//    break;
//    case 4: // empty
//     if (isEmpty(stk1, &top1)) {
//      printf("queue is empty\n");
//     }
//    break;
//    case 5: // overflow
//     if (top1 == 99) {
//      printf("queue overflow\n");
//     }
//    break;
//    default:
//     printf("enter a corect choice\n");
//    break;
//   }
//  }
// }


//circular queue using stack-----------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------


// int isEmpty(int arr[], int *top) {
//   if (*top == -1) {
//     return 1;
//   } else {
//     return 0;
//   }
// }

// void push(int arr[], int *top, int n) {
//   if (*top == 99) {
//     printf("Stack overflow\n");
//   } else {
//     arr[++(*top)] = n;
//   }
// }

// int pop(int arr[], int *top) {
//   if (isEmpty(arr, top)) {
//     printf("Stack underflow\n");
//     return -1;
//   } else {
//     return arr[(*top)--];
//   }
// }

// void enqueue(int stk1[], int *top1, int stk2[], int *top2, int *front,
//              int *rear, int n) {
//   if ((*rear + 1) % 100 == *front) {
//     printf("Circular queue overflow\n");
//     return;
//   }

//   while (!isEmpty(stk1, top1)) {
//     push(stk2, top2, pop(stk1, top1));
//   }

//   push(stk1, top1, n);

//   while (!isEmpty(stk2, top2)) {
//     push(stk1, top1, pop(stk2, top2));
//   }

//   *rear = (*rear + 1) % 100;
// }

// void dequeue(int stk1[], int *top1, int *front, int *rear) {
//   if (isEmpty(stk1, top1)) {
//     printf("Circular queue underflow\n");
//     return;
//   }

//   int dequeuedElement = pop(stk1, top1);

//   *front = (*front + 1) % 100;

//   printf("Dequeued element: %d\n", dequeuedElement);
// }

// void display(int stk1[], int *top1) {
//   for (int i = 0; i <= *top1; i++) {
//     printf("%d ", stk1[i]);
//   }
//   printf("\n");
// }

// int main(void) {
//   int stk1[100], stk2[100];
//   int top1 = -1, top2 = -1;
//   int front = 0, rear = 0;
//   int c = 1;

//   while (c) {
//     printf("enter your choice: 0-end, 1-enqueue, 2-dequeue, 3-display, "
//            "4-empty, 5-overflow: ");
//     scanf("%d", &c);

//     switch (c) {
//     case 0:
//       printf("Ending the simulation\n");
//       break;
//     case 1: {
//       printf("Enter the element to be inserted: ");
//       int n;
//       scanf("%d", &n);
//       enqueue(stk1, &top1, stk2, &top2, &front, &rear, n);
//       break;
//     }
//     case 2:
//       if (isEmpty(stk1, &top1)) {
//         printf("Queue is empty\n");
//       } else {
//         dequeue(stk1, &top1, &front, &rear);
//       }
//       break;
//     case 3:
//       display(stk1, &top1);
//       break;
//     case 4:
//       if (isEmpty(stk1, &top1)) {
//         printf("Queue is empty\n");
//       }
//       break;
//     case 5:
//       if ((rear + 1) % 100 == front) {
//         printf("Queue overflow\n");
//       }
//       break;
//     default:
//       printf("Enter a correct choice\n");
//       break;
//     }
//   }

//   return 0;
// }