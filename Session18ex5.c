#include<stdio.h>
#include<string.h>
struct Student
    {
        int id;
        char name[100];
        int age;
        char phoneNumber[100];
    };
int main(){
    int id;
    struct Student student[50];
    student[0].id = 1;
    strcpy(student[0].name,"Quoc Khanh"); 
    student[0].age = 18;
    strcpy(student[0].phoneNumber,"0884977167");
    student[1].id = 2;
    strcpy(student[1].name,"Huy Dao");
    student[1].age = 19;
    strcpy(student[1].phoneNumber,"0984977177");
    student[2].id = 3;
    strcpy(student[2].name,"Hieu");
    student[2].age = 20;
    strcpy(student[2].phoneNumber,"0988877178");
    student[3].id = 4;
    strcpy(student[3].name,"Son Dao");
    student[3].age = 21;
    strcpy(student[3].phoneNumber,"0327487179");
    student[4].id = 5;
    strcpy(student[4].name,"Son");
    student[4].age = 22;
    strcpy(student[4].phoneNumber,"0384978400");
    printf("Nhap ID : ");
    scanf("%d",&id);
    if (id >=1 && id <= 5)
    {
        printf("Nhap ten : ");
        fflush(stdin);
        fgets(student[id-1].name,sizeof(student[id-1].name),stdin);
        printf("Nhap Tuoi : ");
        scanf("%d",&student[id-1].age);
    }
    else{
        printf("Khong tim thay!\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Thong tin sinh vien thu %d\n",i+1);
        printf("ID : %d\n",i+1);
        printf("Ten : %s\n",student[i].name);
        printf("Tuoi : %d\n",student[i].age);
        printf("So dien thoai : %s\n",student[i].phoneNumber);
    }
}
