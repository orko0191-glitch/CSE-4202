#include<stdio.h>
#include<stdio.h>

float calgrade(int marks)
{
    if (marks>=80)
        return 4.0;
    else if (marks>=75)
        return 3.75;
    else if (marks>=70)
        return 3.5;
    else if (marks>=65)
        return 3.25;
    else if (marks>=60)
        return 3.0;
    else if (marks>=55)
        return 2.75;
    else if (marks>=50)
        return 2.5;
    else if (marks>=45)
        return 2.25;
    else if (marks>=40)
        return 2.0;
    else
        return 0.0;
}

struct info{
    char subject[10];
    float credit;
    int marks;
    float grade;
};

int main(){
 struct info m1,m2,m3,m4,m5,m6,m7,m8,m9;
 float totalCredits =0.0,totalGradePoints=0.0,GPA;

 m1.credit=3.00;
 m2.credit=3.00;
 m3.credit=3.00;
 m4.credit=3.00;
 m5.credit=3.00;
 m6.credit=1.50;
 m7.credit=0.75;
 m8.credit=0.75;
 m9.credit=1.50;

 printf("Enter marks of AVE 4201:");
 scanf("%d",&m1.marks);

 printf("Enter marks of CSE 4201:");
 scanf("%d",&m2.marks);
 printf("Enter marks of HUM 4203:");
 scanf("%d",&m3.marks);

 printf("Enter marks of MATH 4203:");
 scanf("%d",&m4.marks);

 printf("Enter marks of CHEM 4201:");
 scanf("%d",&m5.marks);

 printf("Enter marks of CSE 4202:");
 scanf("%d",&m6.marks);

 printf("Enter marks of AVE 4202:");
 scanf("%d",&m7.marks);

 printf("Enter marks of CHEM 4202:");
 scanf("%d",&m8.marks);

 printf("Enter marks of ASE 4202:");
 scanf("%d",&m9.marks);


 m1.grade=calgrade(m1.marks);
 m2.grade=calgrade(m2.marks);
 m3.grade=calgrade(m3.marks);
 m4.grade=calgrade(m4.marks);
 m5.grade=calgrade(m5.marks);
 m6.grade=calgrade(m6.marks);
 m7.grade=calgrade(m7.marks);
 m8.grade=calgrade(m8.marks);
 m9.grade=calgrade(m9.marks);

 totalCredits=m1.credit+m2.credit+m3.credit+m4.credit+m5.credit+m6.credit+m7.credit+m8.credit+m9.credit;
 totalGradePoints=m1.grade*m1.credit+m2.grade*m2.credit+m3.grade*m3.credit+m4.grade*m4.credit+m5.grade*m5.credit+m6.grade*m6.credit+m7.grade*m7.credit+m8.grade*m8.credit+m9.grade*m9.credit;
 GPA=totalGradePoints/totalCredits;

 printf("\nTotal Credits:%f\n",totalCredits);

 printf("Total Grade Points Earned:%f\n",totalGradePoints);

 printf("Semester Grade Point Average:%.2f\n",GPA);

 return 0;

}

