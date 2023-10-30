#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);
void squaring(int *a, int n);

void output_result(int max_v,
                   int min_v,
                   double mean_v,
                   double variance_v);

int main()
{
    int n, data[NMAX];
    input(data, &n);
    output(data, n);
    output_result(max(data, n),
                  min(data, n),
                  mean(data, n),
                  variance(data, n));

    return 0;
}

int input(int *a, int *n)
{
    if(scanf("%d", &*n)!=1 || *n<0){
        printf("n/a");
    }
    for(int *p=a; p - a < *n; p++)
    {
        
        scanf("%d", p);
            
        
    }
    return 0;
}

void output(int *a, int n)
{
    
    for(int i =0;i<n;i++){
        printf("%d ", a[i]);
    }
}

int max(int *a, int n)
{
int max=*a;
a =a +1;
for(int i =1;i<n;i++){
        
        if(max <*a){
            max = *a;
        }
        a =a +1;
        
    }
    return max;
}
int min(int *a, int n)
{
int min=*a;
a =a +1;
for(int i =1;i<n;i++){
        
        if(min >*a){
            min = *a;
        }
        a =a +1;
    }
    return min;
}

double mean(int a[], int n){
double p =1.0/n;
double result=0;
for(int i =0;i<n;i++){
        result+=a[i]*p;
    }

    return result;
}
double variance(int *a, int n){
double Mx1 = mean(a,n);
squaring(a,n);
double Mx2 = mean(a,n);

double result = Mx2-(Mx1*Mx1);
return result;
}

void squaring(int *a, int n)
{
    for(int i =0;i<n;i++){
        *a = *a *(*a);
        a =a +1;
    }
}

void output_result(int max_v,
                   int min_v,
                   double mean_v,
                   double variance_v){
                    printf("\n%d %d %.6f %.6f",max_v,min_v,mean_v, variance_v);
                   }