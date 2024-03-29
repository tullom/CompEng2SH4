//Matteo Tullo
//tullom
//400175089

#include <stdio.h>
#include <math.h>
#define N 3

void printVector(double array[], int size);     //Function Prototypes
void addVectors(double vector1[], double vector2[], double vector3[], int n);
double scalarProd(double vector1[], double vector2[], int n);
double norm2(double vector[], int n);

int main(void)
{
    // double vect1[N] = {3.4124,5.4231,1.2674};
    // double vect2[N] = {5.1432,4.4213,6.4245};
    // double vect3[N] = {10.4222,5.9678,5.1554};
    double vect1[N] = {0,1,2};
    double vect2[N] = {2,4,6};
    double vect3[N];
    int dim = N;
    
    printVector(vect1,dim);
    addVectors(vect1,vect2,vect3,dim);
    printf("Scalar product is %f\n",scalarProd(vect1,vect2,dim));
    printf("Norm2 is %f\n",norm2(vect1,dim));

    return 0;
}





void printVector(double array[], int size)
{
    for (int i=0;i<size;i++) {  //cycles thru indicies of vector
        printf(" Component %d = %f,",(i+1),array[i]);
    }
    printf("\n");
}

void addVectors(double vector1[], double vector2[], double vector3[], int n)
{
    printf("Adding 2 vectors...\n");
    for (int i=0;i<n;i++) {  //cycles thru indicies of vector
        vector3[i] = vector1[i] + vector2[i]; //add the value at certain indicies and append them to vector3
    }
    printVector(vector3,n);
}

double scalarProd(double vector1[], double vector2[], int n)
{
    double sum = 0.0;

    for (int i=0;i<n;i++) {
        sum += (vector1[i]*vector2[i]);  //sum the product of the different indicies of the two vectors
    }
    return sum;
}

double norm2(double vector[], int n)
{
    return sqrt(scalarProd(vector,vector,n));  //take the sqrt of the dot product
}