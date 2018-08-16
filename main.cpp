#include <iostream>
#include <omp.h>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define ndatos 5

using namespace std;

double cpu_time(void);

int main(void)
{
    int vector[ndatos]= {0};
    int key=0;
    int i =0, j =0;
    double x_ = 0.0;
    double y_ = 0.0;

    for(int c = 0; c < (ndatos); c++)
    {
        vector[c] = rand() % (ndatos);
        cout <<vector[c]<< "  ";
    }

    x_ = cpu_time();
    #ifdef _OPENMP
    x_ = omp_get_wtime();
    #endif

    for (j=1; j<ndatos; j++)
    {
      key= vector[j];
      i= j-1;
      while(i>-1 && vector[i]>key)
      {
          vector[i+1]= vector[i];
          i=i-1;
      }
      vector[i+1]=key;
    }

    y_ = cpu_time();
    #ifdef _OPENMP
    y_ = omp_get_wtime();
    #endif
    cout<< y_<< endl;

    cout<< "\nOrdenados:\n";

    for(j=0; j<ndatos ; j++)
    {
        cout<<vector[j]<<"  ";
    }

    cout<< "tardo " << x_ <<" segundos"<<endl;
    cout<< "tardo " << y_ <<" segundos"<<endl;

    cin.get();

    return 0;
}
double cpu_time(void)
{
  double value;
  value = (double) clock () / (double) CLOCKS_PER_SEC;
  return value;
}
