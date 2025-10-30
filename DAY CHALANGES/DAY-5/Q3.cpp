#include<stdio.h>
#include<math.h>
int main() {

    int x1,x2,y1,y2;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    float d;
   // d = sqrt(pow(x2-x1,2)+pow(y1-y1,2));
   d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.2f",d);
    return 0;
}

