#include<stdio.h>
int main() {
    int ages[]= {a,b,c,d,e,f,g,h};
    scanf("%d %d %d %d %d %d %d %d",&a &b &c &d &e &f &g &h);
    int i,avg,sum=0;

    int length=sizeof(ages)/sizeof(ages[0]);

for(i=1;i<=length;i++){
  sum=sum+ages[i];
}
    avg=sum/length;

    printf("Avg is=%d",avg);


return 0;

}
