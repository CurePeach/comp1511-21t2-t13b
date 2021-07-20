
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX 64
#define COURSE_LEN 8
#define ZID_LEN 8
#define CLASS_CODE_LEN 4

struct class {
    struct student *roll;
    char code[CLASS_CODE_LEN + 1];
    int amount;
};

struct student {
    char name[NAME_MAX];
    char course[COURSE_LEN + 1];
    int year;
    char zid[ZID_LEN + 1];
    double wam;
    struct student *next;
};

void print_student(struct student *stu);
struct student *create_student(char *name, char *zid);

int main(int argc, char *argv[]) {

    // Create a struct student
    struct student clarissa;
    strcpy(clarissa.name, "Clarissa");
    strcpy(clarissa.course, "COMP1511");
    clarissa.year = 1;
    strcpy(clarissa.zid, "z5555555");
    clarissa.wam = 0.0;

    
    printf("Name: %s\n", clarissa.name);
    printf("Course: %s\n", clarissa.course);
    printf("Year: %d\n", clarissa.year);
    printf("zID: %s\n", clarissa.zid);
    printf("WAM: %.2lf\n", clarissa.wam);

    // Create a struct student *
    struct student *patrick = create_student("Patrick", "z6666666");
    print_student(patrick);

    // Create a linked list
    struct student *andrew = create_student("Andrew", "z7777777");
    struct student *tom = create_student("Tom", "z8888888");
    
    // Originally: Patrick -> NULL
    //             Tom -> NULL
    //             Andrew -> NULL
    
    patrick->next = tom;
    
    // Then: Patrick -> Tom -> NULL
    //       Andrew -> NULL
    
    tom->next = andrew;
    
    // Finally: Patrick -> Tom -> Andrew -> NULL
    
    struct student *curr = patrick;
    while (curr != NULL) {
        print_student(curr);
        curr = curr->next;
    }

    // Create a class
    struct class t13b;
    t13b.roll = patrick;
    strcpy(t13b.code, "t13b");
    t13b.amount = 3;
    // ____________________________________
    // | Patrick -> Tom -> Andrew -> NULL |
    // ____________________________________
    
    struct student *curr = class.roll;
    while (curr != NULL) {
        print_student(curr);
        curr = curr->next;
    }
    
    // Valid but don't do it because it's confusing and ugly
    // double patrick_wam = class.roll->wam;
    // double tom_wam = class.roll->next->wam;
}

void print_student(struct student *stu) {
    printf("Name: %s\n", stu->name);
    printf("Course: %s\n", stu->course);
    printf("Year: %d\n", stu->year);
    printf("zID: %s\n", stu->zid);
    printf("WAM: %.2lf\n", stu->wam);

    return;
}

struct student *create_student(char *name, char *zid) {
    struct student *new = malloc(sizeof(struct student));
    strcpy(new->name, name);
    strcpy(new->course, "COMP1511");
    new->year = 1;
    strcpy(new->zid, zid);
    new->wam = round(0.0);
    new->next = NULL;
    
    return new;
}

struct class *add_to_class(struct class *class, struct student *stu) {
    // How do we add the student stu to the class?
    
    // Remember to increment the amount! :)
    class.amount += 1;
    
    return class;
}