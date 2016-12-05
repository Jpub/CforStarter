#include <stdio.h>
#include <string.h>

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

void InputPeople(People *data);
void ShowPeople(People data);

int main(void)
{
    People data[3];
    int i;
    
    for (i = 0;i < 3;i++) {
        InputPeople(&data[i]);
    }
    
    for (i = 0;i < 3;i++) {
        ShowPeople(data[i]);
    }
    
    return 0;
}

void InputPeople(People *data)
{
    printf("이름:");
    scanf("%s", data->name);
    printf("나이:");
    scanf("%d", &data->age);
    printf("성별(1-남성, 2-여성):");
    scanf("%d", &data->sex);
    printf("\n");
}

void ShowPeople(People data)
{
    char sex[16];
    
    printf("이름:%s\n", data.name);
    printf("나이:%d\n", data.age);
    
    if (data.sex == 1) {
        strcpy(sex, "남성");
    } else {
        strcpy(sex, "여성");
    }
    
    printf("성별:%s\n", sex);
    printf("\n");
}
