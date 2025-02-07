#include <stdio.h>
#include <stdbool.h>

typedef struct Point {
    double x;
    double y;
    bool valid;
} Point;

// typedef struct Point Point; // this is an alias so we do not have to write struct before declaring a new instance everytime


void Point_print(const struct Point* self);
Point add(Point p1, Point p2);

int main() {
    Point aPoint = {1.0, 35.5, true};

    // default initialization
    Point bPoint = {0};

    // updating values
    //aPoint.x = 1.0;
    //aPoint.y = 35.5;

    Point_print(&aPoint);
    Point_print(&bPoint);

    printf("\n %p", &aPoint);



    // teaser 1
    printf("\nTEASER 1 \n");
    Point a = {0};
    Point b = a; // this is true copy of the structure at a new address.
    Point *c = &a;
    (*c).x = 1.0;
    printf("%f, %f, %f", a.x, b.x, (*c).x);

    printf("\nTEASER 2 \n");

    // teaser 2
    Point d = {1.0, 2.0};
    Point e = {3.0, 4.0};
    Point f = add(d,e);
    printf("%f, %f, %f", d.x, e.x, f.x);

    printf("\n NOTABLE SYNTACTIC SUGAR\n");
    // NOTABLE
    // If I have a POINTER TO A STRUCT, instead of (*c).x we can use c->x
    printf("%f", c->x);
    printf("%f", (*c).x);



}

void Point_print(const struct Point *self) {
    printf("(%f, %f, %b)", (*self).x, (*self).y, (*self).valid);
}

Point add(Point p1, Point p2) {
    p1.x += p2.x;
    p2.y += p2.y;
    return p1;
}
