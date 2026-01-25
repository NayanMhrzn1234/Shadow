#include <stdio.h>
int i;
int main() {
    int n;
    float arr[100],s,av;
    printf("Enter how many numbers you want to input:");
    scanf("%d",&n);
    void input (int n,float arr[]);
     float sum=(int n,float arr[]);
    printf("Sum is: %.2f\n",s);
    average (n, arr);
   
        return 0;
}

        void input ( int n, float arr[]) {
    for (i=0;i<n;i++) {
        scanf("%f",&arr[i]);
    }
}
float add(int n, float arr[]) {
    float sum=0;
    for (i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    return sum;
}
void average (int n, float arr[]) {
    float avg;
    avg=add(n,arr)/n;
    printf("Average is: %.2f\n",avg);
}
  
   	
   

	

