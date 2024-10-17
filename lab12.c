#include stdio.h

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

 ฟังก์ชันในการตัดเกรด
void CalculateGrades(S student) {
    float scores[5] = {student.ScoreSub1, student.ScoreSub2, student.ScoreSub3, student.ScoreSub4, student.ScoreSub5};

    printf(Grades for %s (ID %s)n, student.Name, student.ID);
    
    for (int i = 0; i  5; i++) {
        char grade;

        if (scores[i] = 16) {
            grade = 'A';
        } else if (scores[i] = 15) {
            grade = 'B';
        } else if (scores[i] = 14) {
            grade = 'C';
        } else if (scores[i] = 13) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        printf(Subject %d %.2f - Grade %cn, i + 1, scores[i], grade);
    }
}

int main() {
    int N = 3;  จำนวนนักเรียน
    S students[N];

     รับข้อมูลนักเรียน
    for (int i = 0; i  N; i++) {
        printf(Enter name for student %d , i + 1);
        scanf(%s, students[i].Name);

        printf(Enter ID for student %d , i + 1);
        scanf(%s, students[i].ID);

        printf(Enter score for subject 1 );
        scanf(%f, &students[i].ScoreSub1);
        printf(Enter score for subject 2 );
        scanf(%f, &students[i].ScoreSub2);
        printf(Enter score for subject 3 );
        scanf(%f, &students[i].ScoreSub3);
        printf(Enter score for subject 4 );
        scanf(%f, &students[i].ScoreSub4);
        printf(Enter score for subject 5 );
        scanf(%f, &students[i].ScoreSub5);
    }

     แสดงผลเกรดสำหรับนักเรียนแต่ละคน
    for (int i = 0; i  N; i++) {
        CalculateGrades(students[i]);
    }

    return 0;
}
