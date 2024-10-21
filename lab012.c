#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub[5];
} typedef S;

S STD[3];

void data();
void Grade();

int main() {
    data();
    Grade();
    return 0;
} // end main function

void data() {
    for (int i = 0; i < 3; i++) {
        printf("Enter the details of Student %d:\n", i + 1);
        printf("Name: ");
        fgets(STD[i].Name, 20, stdin);
        STD[i].Name[strcspn(STD[i].Name, "\n")] = 0;

        printf("ID: ");
        scanf("%4s", STD[i].ID); // จำกัดขนาด ID ให้พอดี
        getchar(); // กำจัด newline ที่เกิดจากการกด Enter

        for (int j = 0; j < 5; j++) {
            printf("Scores in Subject %d: ", j + 1);
            scanf("%f", &STD[i].ScoreSub[j]);
        } // end for กรอกคะแนน
        getchar(); // กำจัด newline หลังจากกรอกคะแนนสุดท้าย
    } // end function data
}

void Grade() {
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", STD[i].Name);
        printf("ID: %s\n", STD[i].ID);
        printf("Scores: ");

        for (int j = 0; j < 5; j++) {
            printf(" %2.0f", STD[i].ScoreSub[j]);
        } // end for แสดงคะแนน
        printf("\nGrades: ");

        for (int j = 0; j < 5; j++) {
            if (STD[i].ScoreSub[j] >= 80) {
                printf(" A");
            } else if (STD[i].ScoreSub[j] >= 75) {
                printf(" B+");
            } else if (STD[i].ScoreSub[j] >= 70) {
                printf(" B");
            } else if (STD[i].ScoreSub[j] >= 65) {
                printf(" C+");
            } else if (STD[i].ScoreSub[j] >= 60) {
                printf(" C");
            } else if (STD[i].ScoreSub[j] >= 55) {
                printf(" D+");
            } else if (STD[i].ScoreSub[j] >= 50) {
                printf(" D");
            } else {
                printf(" F");
            } // end if 
        } // end for ปริ้นเกรด

        float Average = 0;
        for (int j = 0; j < 5; j++) {
            Average += STD[i].ScoreSub[j];
        } // end for หาค่าเฉลี่ย

        printf("\nAverage Scores: %.1f\n\n", Average / 5);
    } // end function Grade
}
