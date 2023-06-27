#include <stdio.h>

int main() {
    FILE *file = fopen("stu.txt", "w");
    if (file == NULL) {
        printf("无法打开文件。\n");
        return 1;
    }

    int num_students = 5;
    int num_courses = 3;

    for (int i = 0; i < num_students; i++) {
        int student_id;
        char student_name[50];
        int scores[num_courses];
        int total_score = 0;

        printf("请输入第 %d 个学生的学号：", i + 1);
        scanf("%d", &student_id);
        printf("请输入第 %d 个学生的姓名：", i + 1);
        scanf("%s", student_name);
        printf("请输入第 %d 个学生的三门课成绩：\n", i + 1);
        for (int j = 0; j < num_courses; j++) {
            printf("第 %d 门课成绩：", j + 1);
            scanf("%d", &scores[j]);
            total_score += scores[j];
        }

        fprintf(file, "学号：%d\n", student_id);
        fprintf(file, "姓名：%s\n", student_name);
        fprintf(file, "总成绩：%d\n\n", total_score);
    }

    fclose(file);
    printf("数据已成功写入文件 stu.txt。\n");

    return 0;
}
