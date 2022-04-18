#include <stdio.h>

union student{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main(){
    union student student1, student2;

    student1.letterGrade = 'B';
    student1.roundedGrade = 87;
    student1.exactGrade = 86.5;

    printf("Union record1 values example\n");
    printf("Letter Grade: %c\n", student1.letterGrade);
    printf("Rounded Grade: %d\n",student1.roundedGrade);
    printf("Exact Grade: %f\n", student1.exactGrade);

    printf("\nUnion record2 values example\n");

    student2.letterGrade = 'A';
    printf("Letter Grade: %c\n", student2.letterGrade);

    student2.roundedGrade = 100;
    printf("Rounded Grade: %d\n",student2.roundedGrade);

    student2.exactGrade = 99.5;
    printf("Exact Grade: %f\n", student2.exactGrade);

    return 0;
}